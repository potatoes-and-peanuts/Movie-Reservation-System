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

		gotoxy(35, 10);
		cout << "*숫자만 입력해주세요.*" << endl;

		gotoxy(41, 13);
		cout << "월 >>" << endl;
		gotoxy(47, 13);
		cin >> month;

		gotoxy(41, 15);
		cout << "일 >>" << endl;
		gotoxy(47, 15);
		cin >> date;

		gotoxy(37, 20);
		cout << "*입력된 정보 확인*";

		gotoxy(41, 22);
		cout << month << " 월  " << date << " 일 ";
		

		gotoxy(30, 28);
		cout << "입력하신 정보가 맞나요?(Y/N) ";
		cin >> check;

		if (check == 'Y' || check == 'y') {
			ch = false;
			break;
		}
		else if (check == 'N' || check == 'n' || check != 'Y' || check != 'y' || check != 'N' || check != 'n') {
			system("cls");
		}
	}

	system("cls");
}