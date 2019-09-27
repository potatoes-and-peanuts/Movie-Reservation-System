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
	gotoxy(32, 15 + x);
	cout << "��";
}

void DrawReadyScreen() {
	system("cls");

	int i, j;
	unsigned char a = 0xa6;
	unsigned char b[7];

	for (i = 1; i < 7; i++)
		b[i] = 0xa0 + i;

	gotoxy(20, 50);
	cout << a << b[3];   //�� ���
	for (i = 0; i < 86; i++)
		cout << a << b[1];   // �� ���
	cout << a << b[4] << endl;   // �����
	
	//����
	for (i = 0; i < 18; i++) {
		cout << a << b[2];
		for (j = 0; j < 23; j++)
			cout << "  ";
		
		for (j = 0; j < 20; j++)
			cout << "  ";
		cout << a << b[2] << endl;
	}

	//�۾� �ֱ�
	cout << a << b[2];
	for (j = 0; j < 19; j++)
		cout << "  ";
	cout << "ȣ�ɹڽ�";
	for (j = 0; j < 20; j++)
		cout << "  ";
	cout << a << b[2];

	//����
	cout << endl;
	for (i = 0; i < 18; i++) {
		cout << a << b[2];
		for (j = 0; j < 23; j++)
			cout << "  ";

		for (j = 0; j < 20; j++)
			cout << "  ";
		cout << a << b[2] << endl;
	}

	cout << a << b[6];   // �����
	for (i = 0; i < 86; i++)    //�� ���
		cout << a << b[1];
	cout << a << b[5] << endl;   // �����
	Sleep(1000);
	system("cls");
	
}

int ReadyScreen() { //����ȭ��

	int x = 0;
	int key = 0;
	while(true) {

		movie_theater();
		DrawUserCursor(x);

		key = _getch();
		switch (key) {
		case DOWN:
			++x;
			break;
		case UP:
			--x;
			break;
		}
		if (key == ENTER) {
			switch (x) {
			case 0:
				return GAMESTART;
			case 1:
				return QUIT;
			}
		}
	}
	return 1;
}