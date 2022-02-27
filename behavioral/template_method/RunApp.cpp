#include "ConcreteClass.h"

using namespace template_method;

int main( int argc, char* argv[] )
{
	Game* m = new Monopoly();
	m->PlayOneGame( 3 );
	delete m;

	Chess* c = new Chess();
	c->PlayOneGame( 2 );
	delete c;

	return 0;
}
