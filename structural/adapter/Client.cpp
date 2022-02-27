#include "Existing.h"
#include "Client.h"

using namespace adapter;

// Client has no knowledge about any adapted method.
// It just calls its existing interface.

Client::Client()
{
}

Client::~Client()
{
}

void Client::ClientMethod(Existing& pExisting)
{
	// ExistingMethod is implemented by the adapter
	// class. In this method, adapter calls the method
	// of Adaptee class which is basically adapted in the system.
	// Client just gets the new functionality from the Adaptee class
	// without knowing this class at all.
	pExisting.ExistingMethod();
}
