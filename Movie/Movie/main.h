#include <iostream> 
#include <string> 
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>

#define GAMESTART 0		//����ȭ�鿡�� �������� �� �Ѿ�� ��
#define HOWTOPLAY 1
#define QUIT 2

#define UP 72		   // ��������Ű
#define DOWN 80		   // ��������Ű
#define LEFT   75      // ��������Ű 
#define RIGHT  77      // ��������Ű 
#define ENTER 13

#define COL                   GetStdHandle(STD_OUTPUT_HANDLE)        // �ܼ�â�� �ڵ����� �ޱ�

using namespace std;

void SetConsoleView();
void gotoxy(int x, int y);
int ReadyScreen();
void DrawReadyScreen();
void DrawUserCursor(int& x);
void intro();

void movie_theater();

void play();