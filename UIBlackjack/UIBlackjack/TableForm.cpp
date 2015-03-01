#include "TableForm.h"
#include <iostream>
#include <stdlib.h>
#include <string>

/*     These are specific to windows forms/.NET     */
using namespace System::Windows::Forms;
using namespace System::Drawing;
/* ------------------------------------------------ */
using namespace std;


void Main()
{
	/*     Not sure what these two do     */
	//Application::EnableVisualStyles(); 
	//Application::SetCompatibleTextRenderingDefault(false);
	
	/*     These two are keeping the form up. Without it, the code runs and exits     */
	UIBlackjack::TableForm form;
	Application::Run(%form);

}

