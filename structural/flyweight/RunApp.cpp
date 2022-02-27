#include <iostream>
#include <vector>

#include "GraphicCharFactory.h"
#include "GraphicChar.h"

using std::cout;
using std::endl;
using std::vector;

using namespace flyweight;

// By using flyweight design pattern, we are minimizing the creation of new character with same format. When
// we create a new character with new font, a new GraphicChar object will be created. Otherwise similar Font
// and similar char will give us the character from already created GraphicChar from a Map container.

int main(int argc, char* argv[])
{
	vector<GraphicChar*> text;
	GraphicCharFactory* gcf = new GraphicCharFactory();

	text.push_back( gcf->Get('A', "Times") );
	text.push_back( gcf->Get('B', "Times") );
	text.push_back( gcf->Get('B', "Arial") );
	text.push_back( gcf->Get('B', "Times") );
	text.push_back( gcf->Get('A', "Times") );

	cout<<"GraphicCharFactory created only: "<<gcf->GetNumOfChars()<<" objects for "<<text.size()<<" characters."<<endl;

	vector<GraphicChar*>::iterator it = text.begin();

	int x = 0, y = 0;

	for( ; it != text.end(); it++ )
	{
		GraphicChar::PrintAtPosition(*it, ++x, ++y);
	}

	delete gcf;
}

// End of file
