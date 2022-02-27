#include "Purchase.h"
#include "ConcreteApprover.h"

using namespace chain_of_rsp;

int main( int argc, char* argv[] )
{
	// Setup Chain of Responsibility
	Director* Larry = new Director();
	VicePresident* Sam = new VicePresident();
	President* Tammy = new President();
	Larry->SetSuccessor(Sam);
	Sam->SetSuccessor(Tammy);

	// Generate and process purchase requests
	Purchase p(2034, 350.00, "Supplies");
	Larry->ProcessRequest(p);

	Purchase p1(2035, 22090.10, "Project X");
	Larry->ProcessRequest(p1);

	Purchase p2(2036, 122100.00, "Project Y");
	Larry->ProcessRequest(p2);

	delete Larry;
	delete Sam;
	delete Tammy;

	return 0;
}
