#include "Adapter.h"
#include "Client.h"

using namespace std;
using namespace adapter;

int main(int argc, char* argv[])
{
	Client* c = new Client();
	Existing* ex = new Adapter();
	c->ClientMethod(*ex);
	delete static_cast<Adapter*>(ex);
	delete c;
}
// End of file
