#include <iostream>
#include "Controller.h"
#include <gtk/gtk.h>


#include "GenericModel.h"

void Controller::DisplayModel(const GenericModel& p_Model)
{
	#ifdef USE_GTK
	GtkWidget *dialog, *label;

	dialog = gtk_dialog_new();
	label = gtk_label_new (DATA_CONST_CAST(p_Model.GetModelData()));
	g_signal_connect_swapped (dialog,
			"response", 
			G_CALLBACK (gtk_widget_destroy),
			dialog);

	gtk_container_add (GTK_CONTAINER (GTK_DIALOG(dialog)->vbox),
			label);
	gtk_widget_show_all (dialog);
#else
	std::cout<<"Output from Model: \n"<<p_Model.GetModelData()<<std::endl;
#endif // USE_GTK
}

void Controller::Notify(const GenericModel& p_Model)
{
	DisplayModel(p_Model);
}
