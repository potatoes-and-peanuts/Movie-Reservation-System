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
		cout << "�ٳ�¥ ���á�" << endl;
		gotoxy(35, 4);
		cout << "- ��¥�� �������ּ���. -" << endl;



		DrawLineBottom();

		gotoxy(35, 9);
		cout << "*���ڸ� �Է����ּ���*" << endl;

		gotoxy(42, 13);
		cout << "�� >>" << endl;
		gotoxy(48, 13);
		cin >> month;

		gotoxy(42, 15);
		cout << "�� >>" << endl;
		gotoxy(48, 15);
		cin >> date;

		gotoxy(38, 20);
		cout << "*�Է� ���� Ȯ��*";

		gotoxy(42, 22);
		cout << month << " ��  " << date << " �� ";
		

		gotoxy(29, 27);
		cout << "�Է��Ͻ� ������ �³���?(Y/N) ";
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