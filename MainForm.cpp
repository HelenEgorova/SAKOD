#include "MainForm.h"
#include <Windows.h>

// Стандартный код для функции входа программы. Происходит запуск формы главного меню.

using namespace System;
using namespace System::Windows::Forms;
using namespace RentalAgency;

[System::STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    RentalAgency::MainForm form;
    Application::Run(% form);
    return 0;
}