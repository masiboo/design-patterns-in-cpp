#include "Component.h"

using composite::Math;
using composite::Physics;
using composite::Program;

int main()
{
	string* m1 = new string("Math1");
	string* p1 = new string("Physics1");
	string* prA = new string("Information Tech.");
	string* prB = new string("Media Engineering");

	Math math1( m1, 4 );
	Physics physics1( p1, 5 );
	Program it( prA );
	Program me( prB );
	
	it.add(&math1);
	it.add(&physics1);

	me.add(&math1);
	me.add(&math1);

	it.PrintInfo();
	me.PrintInfo();
}

