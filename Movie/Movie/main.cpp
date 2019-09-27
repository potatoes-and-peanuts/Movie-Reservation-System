#include "main.h"

int main(void) {
	SetConsoleView();
	DrawReadyScreen();
	while (true)
		ReadyScreen();
	return 0;
}