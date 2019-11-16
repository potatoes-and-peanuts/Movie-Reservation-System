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
	if (x > 24) x = 0;
	else if (x < 0) x = 24;
	gotoxy(50, 10 + x);
	cout << "◀";
}

void DrawUserCursor2(int& x) { //커서 그리기
	if (x > 12) x = 0;
	else if (x < 0) x = 12;
	gotoxy(47, 15 + x);
	cout << "◀";
}


int choice_theater() {
	//system("cls");

	string theater1[] = { "서울", "경기", "인천", "강원", "대전/충청", "대구", "부산/울산", "경상", "광주/전라/제주" };
	string theater2[9][5] = { {"강남", "강변", "구로", "천호", "홍대"},
			{"구리", "김포",  "시흥", "수원", "용인"},
			{"계양", "청라", "인천", "부평", "연수역"},
			{"강릉", "원주", "인제", "춘천", "춘천명동"},
			{"당진", "대전", "보령", "서산", "세종"},
			{"대구", "대구수성", "대구월성", "대구철곡", "대구한일"},
			{"남포", "대연", "대한", "동래", "서면"},
			{"거제", "구미", "김해", "마산", "안동"},
			{"광양", "군산", "나주", "목포", "순천"} };

	int x = 0;
	int key = 0;
	int j;

	DrawLineTop();
	gotoxy(38, 2);
	cout << "☆영화관 선택☆" << endl;
	gotoxy(35, 4);
	cout << "- 지역을 선택해주세요. -" << endl;

	while (true) {

		DrawLineBottom();

		for (int i = 0; i < 9; i++) {
			gotoxy(35, 10 + (i * 3));
			cout << theater1[i] << endl;
		}
	
		DrawUserCursor(x);

		key = _getch();
		switch (key) {
		case DOWN:
			x += 3;
			break;
		case UP:
			x -= 3;
			break;
		}
		if (key == ENTER) {
			switch (x / 3) {
			case 0:
				j = 0;
				break;
			case 1:
				j = 1;
				break;
			case 3:
				j = 3;
				break;
			case 4:
				j = 4;
				break;
			case 5:
				j = 5;
				break;
			case 6:
				j = 6;
				break;
			case 7:
				j = 7;
				break;
			case 8:
				j = 8;
				break;
			case 9:
				j = 9;
				break;
			}
			break;
		}
	}

	DrawLineTop();
	gotoxy(38, 2);
	cout << "☆영화관 선택☆" << endl;
	gotoxy(35, 4);
	cout << "- 극장을 선택해주세요. -" << endl;

	x = 0;
	while (true) {
		DrawLineBottom();

		for (int i = 0; i < 5; i++) {
			gotoxy(42, 15 + (i * 3));
			cout << theater2[j][i] << endl;
		}
		
		DrawUserCursor2(x);

		key = _getch();
		switch (key) {
		case DOWN:
			x += 3;
			break;
		case UP:
			x -= 3;
			break;
		}

		if (key == ENTER) {
			switch (x/3) {
			case 0:
				gotoxy(55, 11);
				cout << "성공" << endl;
				break;
			case 1:
				gotoxy(55, 11);
				cout << "성공2" << endl;
				break;
			case 2:
				gotoxy(55, 11);
				cout << "성공" << endl;
				break;
			case 3:
				gotoxy(55, 11);
				cout << "성공2" << endl;
				break;
			case 4:
				gotoxy(55, 11);
				cout << "성공" << endl;
				break;
			case 5:
				gotoxy(55, 11);
				cout << "성공2" << endl;
				break;
			}
			break; //지워야함
		}
	}
	
	return 1;
}
