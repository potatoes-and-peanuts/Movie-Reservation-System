#include "main.h"


void DrawLineTop() { // '영화관 선택'와 같은 글씨가 있는 박스
	int i, j;
	unsigned char a = 0xa6;
	unsigned char b[7];

	for (i = 1; i < 7; i++)
		b[i] = 0xa0 + i;

	cout << a << b[3];   //┌ 출력
	for (i = 0; i < 86; i++)
		cout << a << b[1];   // ─ 출력
	cout << a << b[4] << endl;   // ┐출력

	//빈줄
	for (i = 0; i < 5; i++) {
		cout << a << b[2];
		for (j = 0; j < 43; j++)
			cout << "  ";
		cout << a << b[2] << endl;
	}

	cout << a << b[6];   // └출력
	for (i = 0; i < 86; i++)    //─ 출력
		cout << a << b[1];
	cout << a << b[5] << endl;   // ┘출력 
}

void DrawLineBottom() { // '영화관 선택'와 같은 글씨 아래에 있는 박스 (이벤트 발생하는 구간)
	int i, j;
	unsigned char a = 0xa6;
	unsigned char b[7];

	for (i = 1; i < 7; i++)
		b[i] = 0xa0 + i;

	gotoxy(0, 7);
	cout << a << b[3];   //┌ 출력
	for (i = 0; i < 86; i++)
		cout << a << b[1];   // ─ 출력

	cout << a << b[4] << endl;   // ┐출력

	for (i = 0; i < 25; i++) {
		cout << a << b[2];
		for (j = 0; j < 43; j++) //빈줄
			cout << "  ";
		cout << a << b[2] << endl;
	}

	cout << a << b[6];   // └출력
	for (i = 0; i < 86; i++)    //─ 출력
		cout << a << b[1];
	cout << a << b[5] << endl;   // ┘출력
}

void movie_theater() {
	system("cls");
	//string Area[10];
	DrawLineTop();
	gotoxy(37,3);
	cout << "☆영화관 선택☆" << endl;
	DrawLineBottom();
	Sleep(1000);
	//system("cls");
}