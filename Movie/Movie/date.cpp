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

		gotoxy(35, 10);
		cout << "*���ڸ� �Է����ּ���.*" << endl;

		gotoxy(41, 13);
		cout << "�� >>" << endl;
		gotoxy(47, 13);
		cin >> month;

		gotoxy(41, 15);
		cout << "�� >>" << endl;
		gotoxy(47, 15);
		cin >> date;

		gotoxy(37, 20);
		cout << "*�Էµ� ���� Ȯ��*";

		gotoxy(41, 22);
		cout << month << " ��  " << date << " �� ";
		

		gotoxy(30, 28);
		cout << "�Է��Ͻ� ������ �³���?(Y/N) ";
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