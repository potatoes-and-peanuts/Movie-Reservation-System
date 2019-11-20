#include "main.h"
#include "member.h"

void date() {
	system("cls");

	int month=0;
	int date=0;
	char check;
	bool ch = true;


	while (true) {

		DrawLineTop();

		gotoxy(39, 2);
		cout << "☆날짜 선택☆" << endl;
		gotoxy(35, 4);
		cout << "- 날짜를 선택해주세요. -" << endl;



		DrawLineBottom();

		gotoxy(35, 9);
		cout << "*숫자만 입력해주세요*" << endl;

		gotoxy(42, 13);
		cout << "월 >>" << endl;
		gotoxy(48, 13);
		cin >> month;

		gotoxy(42, 15);
		cout << "일 >>" << endl;
		gotoxy(48, 15);
		cin >> date;

		gotoxy(38, 20);
		cout << "*입력 정보 확인*";

		gotoxy(42, 22);
		cout << month << " 월  " << date << " 일 ";
		

		gotoxy(29, 27);
		cout << "입력하신 정보가 맞나요?(Y/N) ";
		cin >> check;

		if (check == 'Y' || check == 'y') {
			ch = false;
			break;
		}
		else if (check == 'N' || check == 'n') {
			system("cls");
		}
	}

	system("cls");
}