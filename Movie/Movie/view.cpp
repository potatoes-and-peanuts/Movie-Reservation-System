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

void textcolor(int foreground, int background)
{
	int color = foreground + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
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
	int n, m;
	unsigned char a = 0xa6;
	unsigned char b[7];

	for (n = 1; n < 7; n++)
		b[n] = 0xa0 + n;

	gotoxy(0, 7);
	cout << a << b[3];   //�� ���
	for (n = 0; n < 86; n++)
		cout << a << b[1];   // �� ���

	cout << a << b[4] << endl;   // �����

	for (n = 0; n < 30; n++) {
		cout << a << b[2];
		for (m = 0; m < 43; m++) //����
			cout << "  ";
		cout << a << b[2] << endl;
	}

	cout << a << b[6];   // �����
	for (n = 0; n < 86; n++)    //�� ���
		cout << a << b[1];
	cout << a << b[5] << endl;   // �����
}

void DrawLineBottom2() { //��ȭ ȭ���� ȭ�� ��ȯ �������� ���� �׵θ���
	int n;
	unsigned char a = 0xa6;
	unsigned char b[7];

	DrawLineBottom();

	for (n = 1; n < 7; n++)
		b[n] = 0xa0 + n;

	gotoxy(20, 12);
	cout << a << b[3];   //�� ���
	for (n = 0; n < 49; n++)
		cout << a << b[1];   // �� ���
	cout << a << b[4] << endl;   // �����

	for (n = 0; n < 21; n++) {
		gotoxy(20, 13+n);
		cout << a << b[2];
		gotoxy(70, 13+n);
		cout << a << b[2] << endl;
	}

	gotoxy(20, 34);
	cout << a << b[6];   // �����
	for (n = 0; n < 48; n++)    //�� ���
		cout << a << b[1];
	gotoxy(70, 34);
	cout << a << b[5] << endl;   // �����
}

void DrawLineBottom3() { //�ð� ���� ȭ�� �������� ���� �׵θ���
	int n;
	unsigned char a = 0xa6;
	unsigned char b[7];

	DrawLineBottom();

	for (n = 1; n < 7; n++)
		b[n] = 0xa0 + n;

	gotoxy(8, 10);
	cout << a << b[3];   //�� ���
	for (n = 0; n < 70; n++)
		cout << a << b[1];   // �� ���
	cout << a << b[4];   // �����

	for (n = 0; n < 12; n++) {
		gotoxy(8, 11 + n);
		cout << a << b[2];
		gotoxy(79, 11 + n);
		cout << a << b[2];
	}

	gotoxy(8, 23);
	cout << a << b[6];   // �����
	for (n = 0; n < 70; n++)    //�� ���
		cout << a << b[1];
	gotoxy(79, 23);
	cout << a << b[5];   // �����


	//��� �� 2��
	for (n = 0; n < 12; n++) {
		gotoxy(32, 11 + n);
		cout << a << b[2];
		gotoxy(56, 11 + n);
		cout << a << b[2] << endl;
	}
	gotoxy(0, 0);
}

void textcolor(int color_number) //����ؽ�Ʈ �÷� ����
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
}

void CursorView(char show)//Ŀ�������
{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
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

void DrawUserCursor3(int& x) {
	if (x > 4) x = 0;
	else if (x < 0) x = 4;
	gotoxy(55, 23 + x);
	cout << "��";
}

void DrawUserCursor4(int& y) { //�¿�
	if (y > 4) y = 0;
	else if (y < 0) y = 4;
}

void DrawUserCursor5(int& x) { //�ð� ���� ȭ�� �¿�
	if (x > 46) x = 0;
	else if (x<0) x = 46;
	gotoxy(20+x, 20);
	cout << "��";
}