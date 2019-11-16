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

void DrawLineTop() { // '��ȭ�� ����'�� ���� �۾��� �ִ� �ڽ�
	int i, j;
	unsigned char a = 0xa6;
	unsigned char b[7];

	for (i = 1; i < 7; i++)
		b[i] = 0xa0 + i;

	cout << a << b[3];   //�� ���
	for (i = 0; i < 86; i++)
		cout << a << b[1];   // �� ���
	cout << a << b[4] << endl;   // �����

	//����
	for (i = 0; i < 5; i++) {
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

void DrawLineBottom() { // '��ȭ�� ����'�� ���� �۾� �Ʒ��� �ִ� �ڽ� (�̺�Ʈ �߻��ϴ� ����)
	int i, j;
	unsigned char a = 0xa6;
	unsigned char b[7];

	for (i = 1; i < 7; i++)
		b[i] = 0xa0 + i;

	gotoxy(0, 7);
	cout << a << b[3];   //�� ���
	for (i = 0; i < 86; i++)
		cout << a << b[1];   // �� ���

	cout << a << b[4] << endl;   // �����

	for (i = 0; i < 30; i++) {
		cout << a << b[2];
		for (j = 0; j < 43; j++) //����
			cout << "  ";
		cout << a << b[2] << endl;
	}

	cout << a << b[6];   // �����
	for (i = 0; i < 86; i++)    //�� ���
		cout << a << b[1];
	cout << a << b[5] << endl;   // �����
}

void DrawUserCursor(int& x) { //Ŀ�� �׸���
	if (x > 24) x = 0;
	else if (x < 0) x = 24;
	gotoxy(50, 10 + x);
	cout << "��";
}

void DrawUserCursor2(int& x) { //Ŀ�� �׸���
	if (x > 12) x = 0;
	else if (x < 0) x = 12;
	gotoxy(47, 15 + x);
	cout << "��";
}
