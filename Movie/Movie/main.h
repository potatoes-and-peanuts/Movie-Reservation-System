#include <iostream> 
#include <string> 
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

#define UP 72		   // ��������Ű
#define DOWN 80		   // ��������Ű
#define LEFT   75      // ��������Ű 
#define RIGHT  77      // ��������Ű 
#define ENTER 13

#define COL                   GetStdHandle(STD_OUTPUT_HANDLE)        // �ܼ�â�� �ڵ����� �ޱ�

/*
// ** ��ä�� **
#define BLACK                SetConsoleTextAttribute(COL, 0x0000);        // ������
#define WHITE                SetConsoleTextAttribute(COL, 0x000f);        // ���
#define GRAY                 SetConsoleTextAttribute(COL, 0x0008);        // ȸ��
#define ORIGINAL            SetConsoleTextAttribute(COL, 0x0007);        // ���� ȸ�� (default)

// ** ���� ** 
#define RED                   SetConsoleTextAttribute(COL, 0x000c);        // ������
#define YELLOW             SetConsoleTextAttribute(COL, 0x000e);        // �����
#define DARK_BLUE         SetConsoleTextAttribute(COL, 0x0001);        // �Ķ���
#define GREEN                SetConsoleTextAttribute(COL, 0x0002);        // ���
#define BLUE_GREEN        SetConsoleTextAttribute(COL, 0x0003);        // û���
#define BLOOD               SetConsoleTextAttribute(COL, 0x0004);        // �˺�����
#define PURPLE               SetConsoleTextAttribute(COL, 0x0005);        // �����
#define GOLD                 SetConsoleTextAttribute(COL, 0x0006);        // �ݻ�
#define BLUE                  SetConsoleTextAttribute(COL, 0x0009);        // �Ķ���
#define HIGH_GREEN       SetConsoleTextAttribute(COL, 0x000a);        // ���λ�
#define SKY_BLUE           SetConsoleTextAttribute(COL, 0x000b);        // �ϴû�
#define PLUM                SetConsoleTextAttribute(COL, 0x000d);        // ���ֻ�
*/



//main.cpp
void SetConsoleView();
void gotoxy(int x, int y);
void DrawLineTop();
void DrawLineBottom();
void DrawUserCursor(int& x);
void DrawUserCursor2(int& x);

//intro.cpp
int intro();

//theater.cpp
int theater();

void CtheaterObject();

void join();
void Choose_date();
void Choose_seat();