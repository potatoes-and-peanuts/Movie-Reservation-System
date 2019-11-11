#include "main.h"

void SetConsoleView() {
	system("mode con:cols=90 lines=40");
	system("Title Movie Reservation Program");
}

void gotoxy(int x, int y) {
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void DrawUserCursor(int& x) { //Ŀ�� �׸���
	if (x <= 0) x = 0;
	else if (x > 2) x = 1;
	gotoxy(40, 15 + x);
	cout << "��";
}

void DrawLineScreen() {
	
	int i, j, x=0;
	unsigned char a = 0xa6;
	unsigned char b[7];

	for (i = 1; i < 7; i++)
		b[i] = 0xa0 + i;

	gotoxy(10, 50);
	cout << a << b[3];   //�� ���
	for (i = 0; i < 86; i++)
		cout << a << b[1];   // �� ���
	cout << a << b[4] << endl;   // �����

	//����
	for (i = 0; i < 37; i++) {
		cout << a << b[2];
		for (j = 0; j < 43; j++)
			cout << "  ";
		cout << a << b[2] << endl;
	}

	cout << a << b[6];   // �����
	for (i = 0; i < 86; i++)    //�� ���
		cout << a << b[1];
	cout << a << b[5] << endl;   // �����
	
}

int ReadyScreen() { //����ȭ��
	system("cls");
	DrawLineScreen();
	gotoxy(50,6);
	cout << "ȣ�ɹڽ�" << endl;
	Sleep(2000);
	system("cls");
	
	return 0;
}