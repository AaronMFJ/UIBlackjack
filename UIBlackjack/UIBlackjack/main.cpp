#include "TableForm.h"
#include <iostream>
#include <stdlib.h>
#include <string>

/*  These are specific to windows forms/.NET  */
using namespace System::Windows::Forms;
using namespace System::Drawing;
/* ------------------------------------------------ */
using namespace std;

/*  Entry point must be set to main to run forms. rc Project>Properties>Linker>Advanced  */
void main()
{
	string player1Name;
	cout << "enter the name\n";
	cin >> player1Name;

	/*  Not sure what these two do  */
	//Application::EnableVisualStyles(); 
	//Application::SetCompatibleTextRenderingDefault(false);
	
	/*  These two are keeping the form up. Without it, the code runs and exits  */
	UIBlackjack::TableForm form;
	Application::Run(%form);

}

