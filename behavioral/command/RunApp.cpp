#include "Client.h"

using namespace command;

int main( int argc, char* argv[] )
{
	Client* client = new Client();

	client->Compute('+', 100);
	client->Compute('-', 50);
    client->Compute('*', 10);
    client->Compute('/', 2);
	client->Compute('+', 100);
	client->Compute('*', 2);

	// Undo 4 commands
	client->Undo(6);

	// Redo 3 commands
	client->Redo(5);

	return 0;
}
