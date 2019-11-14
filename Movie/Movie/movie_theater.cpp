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

	for (i = 0; i < 30; i++) {
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

void DrawUserCursor(int& x) { //커서 그리기
	gotoxy(30, 10+x);
	cout << "◀";
}

void movie_theater() {
	system("cls");

	string theater1, theater2;
	int x = 0;

	DrawLineTop();
	gotoxy(37, 3);
	cout << "☆영화관 선택☆" << endl;
	
	
	int key = 0;
	while (true) {

		DrawLineBottom();
		gotoxy(15, 10);
		cout << "서울" << endl;
		gotoxy(15, 13);
		cout << "경기" << endl;
		gotoxy(15, 16);
		cout << "인천" << endl;
		gotoxy(15, 19);
		cout << "강원" << endl;
		gotoxy(15, 22);
		cout << "대전/충청" << endl;
		gotoxy(15, 25);
		cout << "대구" << endl;
		gotoxy(15, 28);
		cout << "부산/울산" << endl;
		gotoxy(15, 31);
		cout << "경상" << endl;
		gotoxy(15, 34);
		cout << "광주/전라/제주" << endl;

		DrawUserCursor(x);

		key = _getch();
		switch (key) {
		case DOWN:
			x+=3;
			break;
		case UP:
			x-=3;
			break;
		}
		if (key == ENTER) {
			switch (x/3) {
			case 0:
				theater1 = "서울";
				break;
			case 1:
				theater1 = "경기";
				break;
			case 2:
				theater1 = "인천";
				break;
			case 3:
				theater1 = "강원";
				break;
			case 4:
				theater1 = "대전/충청";
				break;
			case 5:
				theater1 = "대구";
				break;
			case 6:
				theater1 = "부산/울산";
				break;
			case 7:
				theater1 = "경상";
				break;
			case 8:
				theater1 = "광주/전라/제주";
				break;
			}
		}
	}

	system("cls");
}