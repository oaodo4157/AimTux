#include "atgui.h"

void SetupUI()
{
	int x, y;
	engine->GetScreenSize(x, y);
	
	// Main window
	main_window = new MainWindow("AimTux [NEW UI IN DEVELOPMENT]", LOC(1280 - 20, 720 - 20), LOC((x / 2) - (1280 - 20) / 2, (y / 2) - (720 - 20) / 2), Color(0, 0, 0, 0));
	gui->AddWindow(main_window);

	// Menu window
	menu_window = new MenuWindow("Configs", LOC(270, 160), LOC(100, 100), Color(0, 0, 0, 0));
	menu_window->position = LOC(1280-20, 720-20) - LOC(270, 160);
	gui->AddWindow(menu_window);
	
	gui->Focus(menu_window);
}
