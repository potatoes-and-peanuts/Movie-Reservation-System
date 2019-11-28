#include "main.h"

int theater() {
	string theater1;
	string theater2;

	string local1[] = { "서울", "경기", "인천", "강원", "대전/충청", "대구", "부산/울산", "경상", "광주/전라/제주" };
	string local2[9][5] = { {"강남", "강변", "구로", "천호", "홍대"},
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
	cout << "☆영화관 선택☆";
	gotoxy(35, 4);
	cout << "- 지역을 선택해주세요. -";

	while (true) {

		DrawLineBottom();

		for (int i = 0; i < 9; i++) {
			gotoxy(35, 10 + (i * 3));
			cout << local1[i] << endl;
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
				theater1 = local1[0];
				break;
			case 1:
				j = 1;
				theater1 = local1[1];
				break;
			case 3:
				j = 3;
				theater1 = local1[2];
				break;
			case 4:
				j = 4;
				theater1 = local1[3];
				break;
			case 5:
				j = 5;
				theater1 = local1[4];
				break;
			case 6:
				j = 6;
				theater1 = local1[5];
				break;
			case 7:
				theater1 = local1[6];
				break;
			case 8:
				j = 8;
				theater1 = local1[7];
				break;
			}
			break;
		}
	}

	system("cls");

	DrawLineTop();
	gotoxy(38, 2);
	cout << "☆영화관 선택☆";
	gotoxy(35, 4);
	cout << "- 극장을 선택해주세요. -";

	x = 0;
	while (true) {
		DrawLineBottom();

		for (int i = 0; i < 5; i++) {
			gotoxy(42, 15 + (i * 3));
			cout << local2[j][i] << endl;
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
			switch (x / 3) {
			case 0:
				theater2 = local2[j][0];
				gotoxy(50, 11);
				break;
			case 1:
				theater2 = local2[j][1];
				gotoxy(50, 11);
				break;
			case 2:
				theater2 = local2[j][2];
				gotoxy(50, 11);
				break;
			case 3:
				theater2 = local2[j][3];
				gotoxy(50, 11);
				break;
			case 4:
				theater2 = local2[j][4];
				gotoxy(50, 11);
				break;
			case 5:
				theater2 = local2[j][5];
				gotoxy(50, 11);
				break;
			}
			break;
		}
	}
	return 1;
}