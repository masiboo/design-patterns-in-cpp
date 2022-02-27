#include "Adapter.h"
#include "Client.h"

using namespace std;
using namespace adapter;

// Here is the demonstration of the adapter class design patterns.

int main(int argc, char* argv[])
{
	Client* c = new Client();
	Adapter* adapter = new Adapter();
	c->ClientMethod(*adapter);
	delete adapter;
	delete c;
}
// End of file
