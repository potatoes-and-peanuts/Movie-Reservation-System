#include <iostream> 
#include <string> 
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

#define UP 72		   // ��������Ű
#define DOWN 80		   // ��������Ű
#define LEFT   75      // ��������Ű 
#define RIGHT  77      // ��������Ű 
#define ENTER 13

#define COL                   GetStdHandle(STD_OUTPUT_HANDLE)        // �ܼ�â�� �ڵ����� �ޱ�


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

void View_Story(int y);//���丮 ���� �����
void View_Review(int y); //���� ���� �����

void Choose_payment();

void Show_Loading();

void print();

void Choose_hour(int& x);

int compute(int teenager, int adult, int udea);