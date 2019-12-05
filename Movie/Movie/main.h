#include <iostream> 
#include <string> 
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

#define UP 72		   // 우측방향키
#define DOWN 80		   // 하측방향키
#define LEFT   75      // 좌측방향키 
#define RIGHT  77      // 우측방향키 
#define ENTER 13

#define COL                   GetStdHandle(STD_OUTPUT_HANDLE)        // 콘솔창의 핸들정보 받기

// color상수 지정 
#define BLACK 0 
#define BLUE 1 
#define GREEN 2 
#define CYAN 3 
#define RED 4 
#define MAGENTA 5 
#define BROWN 6 
#define LIGHTGRAY 7 
#define DARKGRAY 8 
#define LIGHTBLUE 9 
#define LIGHTGREEN 10 
#define LIGHTCYAN 11 
#define LIGHTRED 12 
#define LIGHTMAGENTA 13 
#define YELLOW 14 
#define WHITE 15 

//view.cpp
void SetConsoleView();
void gotoxy(int x, int y);
void textcolor(int foreground, int background);

void DrawLineTop();
void DrawLineBottom();
void DrawLineBottom2();
void DrawLineBottom3();

void CursorView(char show);

void DrawUserCursor(int& x);
void DrawUserCursor2(int& x);
void DrawUserCursor3(int& x);
void DrawUserCursor4(int& y);
void DrawUserCursor5(int& x);

//intro.cpp
void intro();

//theater.cpp
int theater();

//main.cpp
void CtheaterObject();

void join();

void Choose_date();
int Choose_seat();
void Choose_movie();

void View_Story(int y);//스토리 파일 입출력
void View_Review(int y); //리뷰 파일 입출력

void Choose_payment();

void Show_Loading();

void print();

void Choose_hour(int& x);

int compute(int teenager, int adult, int udea);