#include <iostream>
#include "Observable.h"
#include "GenericModel.h"
#include "Controller.h"
#include "View.h"
#include <gtk/gtk.h>

using namespace std;

void
change_model(GtkWidget* widget, gpointer user_data)
{
	View* view = static_cast<View*>(user_data);
	view->SendNotification();
}

int main(int argc, char* argv[])
{
#ifdef USE_GTK
	GtkWidget *window;
	GtkWidget* vbox;
	gtk_init(NULL, NULL);

	View* view = new View();
	GenericObserver* con1 = new Controller();
	GenericObserver* con2 = new Controller();
	view->Register(*con1);
	view->Register(*con2);

	GtkWidget* but1 = gtk_button_new_with_label("ChangeModel");

	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(window), "Observer Pattern for MVC");
	gtk_window_resize(GTK_WINDOW(window),280,100);
	vbox = gtk_vbox_new(FALSE,0);
	
	gtk_box_pack_start(GTK_BOX(vbox),but1,TRUE,TRUE,0);	
	
	g_signal_connect(window, "destroy", gtk_main_quit, NULL);
	
	gtk_signal_connect (GTK_OBJECT (but1), "clicked",
                        GTK_SIGNAL_FUNC (change_model), view);

	gtk_container_add(GTK_CONTAINER(window), vbox);
	gtk_widget_show_all(window);

	// Strating gtk main loop
	gtk_main();
	delete con1;
	delete con2;
	delete view;
#else // Command Line
	View* view = new View();
	GenericObserver* con = new Controller();
	GenericObserver* con2 = new Controller();
	view->Register(*con);
	view->Register(*con2);
	view->UnRegister(*con2);
	view->SendNotification();
	delete con;
	delete con2;
	delete view;
#endif // USE_GTK

	return 0;
}
