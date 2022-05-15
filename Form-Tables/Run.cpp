#include "TableForm.h"
#include <Windows.h> 
using namespace FormTables;

[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew TableForm);
	return 0;
}