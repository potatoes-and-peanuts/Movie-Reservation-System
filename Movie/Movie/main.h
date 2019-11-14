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

void SetConsoleView();
void gotoxy(int x, int y);
int intro();
void DrawStartScreen();
void DrawUserCursor(int& x);
//void intro();

void movie_theater();
void DrawLineTop();
void DrawLineBottom();

void play();

// ** 무채색 **
#define BLACK                SetConsoleTextAttribute(COL, 0x0000);        // 검정색
#define WHITE                SetConsoleTextAttribute(COL, 0x000f);        // 흰색
#define GRAY                 SetConsoleTextAttribute(COL, 0x0008);        // 회색
#define ORIGINAL            SetConsoleTextAttribute(COL, 0x0007);        // 밝은 회색 (default)

// ** 원색 ** 
#define RED                   SetConsoleTextAttribute(COL, 0x000c);        // 빨간색
#define YELLOW             SetConsoleTextAttribute(COL, 0x000e);        // 노란색
#define DARK_BLUE         SetConsoleTextAttribute(COL, 0x0001);        // 파란색
#define GREEN                SetConsoleTextAttribute(COL, 0x0002);        // 녹색
#define BLUE_GREEN        SetConsoleTextAttribute(COL, 0x0003);        // 청녹색
#define BLOOD               SetConsoleTextAttribute(COL, 0x0004);        // 검붉은색
#define PURPLE               SetConsoleTextAttribute(COL, 0x0005);        // 보라색
#define GOLD                 SetConsoleTextAttribute(COL, 0x0006);        // 금색
#define BLUE                  SetConsoleTextAttribute(COL, 0x0009);        // 파란색
#define HIGH_GREEN       SetConsoleTextAttribute(COL, 0x000a);        // 연두색
#define SKY_BLUE           SetConsoleTextAttribute(COL, 0x000b);        // 하늘색
#define PLUM                SetConsoleTextAttribute(COL, 0x000d);        // 자주색