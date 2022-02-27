#include "Document.h"

int main(int argc, char* argv[])
{
	Document* doc = new Document();
	doc->Backup();
	delete doc;
	return 0;
}
