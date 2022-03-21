#include "MyForm.h"
using namespace StudentC;


[STAThreadAttribute]
int Main()
{
	MyForm Form1;
	Form1.ShowDialog();
	return 0;
}

