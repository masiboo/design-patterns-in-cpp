#include "Adapter.h"
#include "Client.h"

using namespace adapter;

// Client has no knowledge about any adapted method.
// It just calls the AdaptedMethod in Adapter class.

Client::Client()
{
}

Client::~Client()
{
}

void Client::ClientMethod(Adapter& pAdapter)
{
	// Uses the existing interface which in turns
	// calls the adapted method from its base classes.
	pAdapter.AdaptedMethod();
}
