#include <iostream> 
#include <string> 
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>


#define GAMESTART 0		//시작화면에서 선택했을 때 넘어가는 값
#define HOWTOPLAY 1
#define QUIT 2

#define UP 72		   // 우측방향키
#define DOWN 80		   // 하측방향키
#define LEFT   75      // 좌측방향키 
#define RIGHT  77      // 우측방향키 
#define ENTER 13

#define COL                   GetStdHandle(STD_OUTPUT_HANDLE)        // 콘솔창의 핸들정보 받기

using namespace std;


void play();
void view();

void intro();
void gotoxy(int x, int y);

void DrawStartGame();
void DrawReadyScreen();
void DrawUserCursor(int& x);
void SetConsoleView();

int ReadyScreen();
void DrawChoiceScreen();

