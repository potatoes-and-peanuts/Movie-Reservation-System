#include "main.h"
#include "movie.h"
#include "member.h"

movie* blackmoney[9][15]; //9=����,��� .... / 25=ȫ��, ���, ����....���
movie* JiYoung_82[9][15];
movie* frozen2[9][15];

member* m;


int main(void) {

	SetConsoleView();
	//intro();
	CtheaterObject();
	join();
	theater();
	Choose_date();
	Choose_movie();

	print();


	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 15; j++) {
			delete blackmoney[i][j];
			delete JiYoung_82[i][j];
			delete frozen2[i][j];
		}
	}
	delete m;

	return 0;
}

void CtheaterObject() {
	string local1[] = { "����", "���", "��õ", "����", "����/��û", "�뱸", "�λ�/���", "���", "����/����/����" };
	string local2[9][5] = { { "����", "����", "����", "õȣ", "ȫ��" },
	{ "����", "����",  "����", "����", "����" },
	{ "���", "û��", "��õ", "����", "������" },
	{ "����", "����", "����", "��õ", "��õ��" },
	{ "����", "����", "����", "����", "����" },
	{ "�뱸", "�뱸����", "�뱸����", "�뱸ö��", "�뱸����" },
	{ "����", "�뿬", "����", "����", "����" },
	{ "����", "����", "����", "����", "�ȵ�" },
	{ "����", "����", "����", "����", "��õ" } };
	string frozen2hour[] = { "7:00~8:50","11:20~1:10","22:05~23:55" };
	string blackmoneyhour[] = { "8:00~10:4","11:30~1:34","10:05~11:55" };
	string Kim82hour[] = { "7:00~8:50","11:20~1:10","21:55~23:59" };


	for (int i = 0; i < 9; i++) {
		int cnt = 0;
		for (int j = 0; j < 15; j++) {
			if (j % 3 == 0 && j != 0) {
				cnt++;
			}
			blackmoney[i][j] = new movie("���Ӵ�", local1[i], local2[i][cnt], blackmoneyhour[j%3]);
			JiYoung_82[i][j] = new movie("82��� ������", local1[i], local2[i][cnt], Kim82hour[j % 3]);
			frozen2[i][j] = new movie("�ܿ�ձ�2", local1[i], local2[i][cnt], frozen2hour[j % 3]);
		}
	}
}


void join() {
	int birth, tel, pw;
	char check;
	bool ch = true;

	CursorView(0);

	while (ch) {
		DrawLineTop();
		gotoxy(38, 3);
		cout << "�ٰ��� �α��Ρ�";

		DrawLineBottom();

		gotoxy(30, 10);
		cout << "�������(6�ڸ�) >>";
		gotoxy(49, 10);
		cin >> birth;

		gotoxy(30, 12);
		cout << "��ȭ��ȣ(-����) >>";
		gotoxy(49, 12);
		cin >> tel;

		gotoxy(30, 14);
		cout << "��й�ȣ(6�ڸ�) >>";
		gotoxy(49, 14);
		cin >> pw;

		m = new member(birth, tel, pw);

		gotoxy(35, 18);
		cout << "*�Էµ� ���� Ȯ��*";

		gotoxy(34, 20);
		cout << "������� : ";
		gotoxy(47, 20);
		cout << m->getBirth();

		gotoxy(34, 22);
		cout << "��ȭ��ȣ : ";
		gotoxy(47, 22);
		cout << m->getTel();

		gotoxy(34, 24);
		cout << "��й�ȣ : ";
		gotoxy(47, 24);
		cout << m->getPw();

		gotoxy(29, 28);
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

void Choose_date() {
	system("cls");

	int month = 0;
	int date = 0;
	char check;
	bool ch = true;

	CursorView(0);

	while (true) {

		DrawLineTop();

		gotoxy(39, 2);
		cout << "�ٳ�¥ ���á�";
		gotoxy(35, 4);
		cout << "- ��¥�� �������ּ���. -";

		DrawLineBottom();

		gotoxy(35, 10);
		cout << "*���ڸ� �Է����ּ���.*";

		gotoxy(41, 13);
		cout << "�� >>";
		gotoxy(47, 13);
		cin >> month;

		gotoxy(41, 15);
		cout << "�� >>";
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
			m->setMonth(month);
			m->setDate(date);
			ch = false;
			break;
		}
		else if (check == 'N' || check == 'n' || check != 'Y' || check != 'y' || check != 'N' || check != 'n') {
			system("cls");
		}
	}

	system("cls");
}

int check_seat(int seat[9][13], char row, int col) {
	if (row == 'A') {
		return seat[0][col - 1] = 15;
	}
	else if (row == 'B') {
		return seat[1][col - 1] = 15;
	}
	else if (row == 'C') {
		return seat[2][col - 1] = 15;
	}
	else if (row == 'D') {
		return seat[3][col - 1] = 15;
	}
	else if (row == 'E') {
		return seat[4][col - 1] = 15;
	}
	else if (row == 'F') {
		return seat[5][col - 1] = 15;
	}
	else if (row == 'G') {
		return seat[6][col - 1] = 15;
	}
	else if (row == 'H') {
		return seat[7][col - 1] = 15;
	}
	else if (row = 'I') {
		return seat[8][col - 1] = 15;
	}
	
	else return 0;
}

int Choose_seat() {
	system("cls");

	int i, j;
	bool ch = true;

	int seat[9][13] = { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };


	char ShowRows[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I' };
	int ShowCols[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };

	char row[20];
	int col;

	int teenager = 0, adult = 0, udae = 0;

	int p_total = 0;


	CursorView(0);

	DrawLineTop();

	gotoxy(36, 2);
	cout << "���¼��� �ο� ���á�";
	gotoxy(32, 4);
	cout << "- �¼��� �ο��� �������ּ���. -";

	DrawLineBottom();

	gotoxy(28, 16);
	cout << "��ũ��";

	//�¼� ��, �� ���
	for (i = 0; i < 9; i++) {
		gotoxy(6, 19 + i);
		cout << ShowRows[i];
	}
	for (i = 0; i < 3; i++) {
		gotoxy(7 + (i * 3), 18);
		cout << ShowCols[i];
	}
	for (i = 3; i < 10; i++) {
		gotoxy(11 + (i * 3), 18);
		cout << ShowCols[i];
	}
	for (i = 10; i < 13; i++) {
		gotoxy(14 + (i * 3), 18);
		cout << ShowCols[i];
	}

	//�¼� ���
	for (i = 0; i < 9; i++) {
		gotoxy(8, 19 + i);
		for (j = 0; j < 3; j++)
			if (seat[i][j] == 0)
				cout << "�� ";
			else if (seat[i][j] == 15)
				cout << "�� ";
		cout << "   ";

		for (j = 3; j < 10; j++)
			if (seat[i][j] == 0)
				cout << "�� ";
			else if (seat[i][j] == 15)
				cout << "�� ";
		cout << "   ";

		for (j = 10; j < 13; j++)
			if (seat[i][j] == 0)
				cout << "�� ";
			else if (seat[i][j] == 15)
				cout << "�� ";
		cout << "\n" << endl;
	}

	//�ο� �Է�
	gotoxy(7, 10);
	cout << "�� ���� �ο��� �� ���Դϱ�?";
	gotoxy(40, 10);
	cout << "û�ҳ� : ";
	gotoxy(54, 10);
	cout << "���� : ";
	gotoxy(66, 10);
	cout << "��� : ";

	gotoxy(49, 10);
	cin >> teenager;
	gotoxy(61, 10);
	cin >> adult;
	gotoxy(73, 10);
	cin >> udae;

	p_total = teenager + adult + udae;

	if (p_total <= 0 || p_total > 19) {
		while (true) {
			gotoxy(35, 13);
			cout << "***1~19 ������ �ο� �Է��ϼ���.***";

			gotoxy(49, 10);
			cout << "   ";
			gotoxy(61, 10);
			cout << "   ";
			gotoxy(73, 10);
			cout << "   ";

			gotoxy(49, 10);
			cin >> teenager;
			gotoxy(61, 10);
			cin >> adult;
			gotoxy(73, 10);
			cin >> udae;

			p_total = teenager + adult + udae;

			if (p_total > 0 && p_total < 20) break;
		}
	}

	//�¼� �Է�
	gotoxy(56, 16);
	cout << "�� " << p_total << "���� �¼��� �Է����ּ���.";

	int cnt = 1;
	while (true) {
		cnt++;

		gotoxy(56, 20);
		cout << "���ϴ� �¼��� ��(���ĺ�) :     ";
		gotoxy(56, 24);
		cout << "���ϴ� �¼��� ��(��ȣ) :      ";

		gotoxy(83, 20);
		cin >> row[i];

		//���ĺ� �빮�ڰ� �ƴ� ��
		if (row[i] <= 64 || row[i] >= 74) {
			while (true) {
				gotoxy(27, 13);
				cout << "***���ĺ� �빮�ڷ� �Է����ּ���.***";

				gotoxy(83, 20);
				cout << "   ";
				gotoxy(83, 20);
				cin >> row[i];

				if (row[i] >= 64 && row[i] <= 74) break;
			}
		}

		gotoxy(81, 24);
		cin >> col;

		//�Է¹��� 1~13�� �ƴ� �� 
		if (col < 1 || col > 13) {
			while (true) {
				gotoxy(27, 13);
				cout << "***1 ~ 13������ ���ڸ� �Է����ּ���.***";

				gotoxy(81, 24);
				cout << "   ";
				gotoxy(81, 24);
				cin >> row[i];

				if (col <= 1 || col >= 13) break;
			}
		}


		check_seat(seat, row[i], col);

		//�¼� üũ
		for (i = 0; i < 9; i++) {
			gotoxy(8, 19 + i);
			for (j = 0; j < 3; j++)
				if (seat[i][j] == 0) {
					cout << "�� ";
				}
				else if (seat[i][j] == 15) {
					cout << "�� ";
				}

			cout << "   ";

			for (j = 3; j < 10; j++)
				if (seat[i][j] == 0) {
					cout << "�� ";
				}
				else if (seat[i][j] == 15) {
					cout << "�� ";
				}

			cout << "   ";

			for (j = 10; j < 13; j++)
				if (seat[i][j] == 0) {
					cout << "�� ";
				}
				else if (seat[i][j] == 15) {
					cout << "�� ";
				}
		}


		if (cnt > p_total) {
			Sleep(1000);
			Choose_payment();
			break;
		}
		break;
	}

	

	return 0;
}

void Choose_movie() {
	bool ch = true;
	int x = 0, y = 0;
	int key = 0;

	CursorView(0);

	DrawLineTop();

	gotoxy(38, 3);
	cout << "�ٿ�ȭ ���š�" << endl;

	while (ch) {
		gotoxy(38, 3);
		cout << "�ٿ�ȭ ���š�" << endl;
		DrawLineBottom2();
		gotoxy(40, 18);
		DrawUserCursor4(y);

		switch (y / 2)
		{
		case 0: cout << "�ܿ�ձ�2"; m->setTitle("�ܿ�ձ�2"); break;
		case 1: cout << "���Ӵ�"; m->setTitle("���Ӵ�"); break;
		case 2: cout << "82��� ������"; m->setTitle("82��� ������"); break;
		}

		gotoxy(40, 23);
		cout << "�����ϱ�";

		gotoxy(40, 25);
		cout << "�ٰŸ�����";

		gotoxy(40, 27);
		cout << "���亸��";

		gotoxy(3, 23);
		cout << "<";

		gotoxy(83, 23);
		cout << ">";

		DrawUserCursor3(x);


		key = _getch();
		switch (key) {
		case DOWN:
			x += 2;
			break;
		case UP:
			x -= 2;
			break;
		case RIGHT:
			y += 2;
			break;
		case LEFT:
			y -= 2;
			break;
		}

		if (key == ENTER) {
			switch (x / 2) {
			case 0:
				ch = false;
				Choose_hour(y);
				break;
			case 1:
				View_Story(y);
				break;
			case 2:
				View_Review(y);
				break;
			}
		}
	}
}

void View_Story(int y) { //�ٰŸ� �����ֱ�
	int i = 0;
	string buffer;
	char ch;
	system("cls");
	DrawLineTop();

	gotoxy(38, 3);
	cout << "���ٰŸ���" << endl;

	DrawLineBottom();
	switch (y / 2)
	{
	case 0: {	ifstream Story_frozen("Frozen2Story.txt");
		while (Story_frozen.get(ch)) {
			if (ch == '\n') {
				gotoxy(5, 15 + i);
				i++;
			}
			else {
				cout << ch;
			}
		}
		Story_frozen.close();
		break;
	}
	case 1: {	ifstream Story_black("BlackMoneyStory.txt");
		while (Story_black.get(ch)) {
			if (ch == '\n') {
				gotoxy(4, 15 + i);
				i++;
			}
			else {
				cout << ch;
			}
		}
		Story_black.close();
		break;
	}
	case 2: {	ifstream Story_82("82KimStory.txt");
		while (Story_82.get(ch)) {
			if (ch == '\n') {
				gotoxy(5, 15 + i);
				i++;
			}
			else {
				cout << ch;
			}
		}
		Story_82.close();
		break;
	}
	}
	system("pause>null");
}

void View_Review(int y) {
	int i = 0;
	string buffer;
	char ch;
	system("cls");
	DrawLineTop();

	gotoxy(40, 3);
	cout << "�ٸ����" << endl;

	DrawLineBottom();
	switch (y / 2)
	{
	case 0: {	ifstream Review_frozen("Frozen2Review.txt");
		while (Review_frozen.get(ch)) {
			if (ch == '\n') {
				gotoxy(5, 15 + i);
				i++;
			}
			else {
				cout << ch;
			}
		}
		Review_frozen.close();
		break;
	}
	case 1: {	ifstream Review_black("BlackMoneyReview.txt");
		while (Review_black.get(ch)) {
			if (ch == '\n') {
				gotoxy(4, 15 + i);
				i++;
			}
			else {
				cout << ch;
			}
		}
		Review_black.close();
		break;
	}
	case 2: {	ifstream Review_82("82KimReview.txt");
		while (Review_82.get(ch)) {
			if (ch == '\n') {
				gotoxy(5, 15 + i);
				i++;
			}
			else {
				cout << ch;
			}
		}
		Review_82.close();
		break;
	}
	}
	system("pause>null");
}

int theater() {
	string theater1;
	string theater2;

	string local1[] = { "����", "���", "��õ", "����", "����/��û", "�뱸", "�λ�/���", "���", "����/����/����" };
	string local2[9][5] = { { "����", "����", "����", "õȣ", "ȫ��" },
	{ "����", "����",  "����", "����", "����" },
	{ "���", "û��", "��õ", "����", "������" },
	{ "����", "����", "����", "��õ", "��õ��" },
	{ "����", "����", "����", "����", "����" },
	{ "�뱸", "�뱸����", "�뱸����", "�뱸ö��", "�뱸����" },
	{ "����", "�뿬", "����", "����", "����" },
	{ "����", "����", "����", "����", "�ȵ�" },
	{ "����", "����", "����", "����", "��õ" } };

	int x = 0;
	int key = 0;
	int j;

	DrawLineTop();
	gotoxy(38, 2);
	cout << "�ٿ�ȭ�� ���á�" << endl;
	gotoxy(35, 4);
	cout << "- ������ �������ּ���. -" << endl;

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
			case 2:
				j = 2;
				theater1 = local1[2];
				break;
			case 3:
				j = 3;
				theater1 = local1[3];
				break;
			case 4:
				j = 4;
				theater1 = local1[4];
				break;
			case 5:
				j = 5;
				theater1 = local1[5];
				break;
			case 6:
				j = 6;
				theater1 = local1[6];
				break;
			case 8:
				j = 8;
				theater1 = local1[7];
				break;
			}
			m->setArea(theater1);
			break;
		}
	}
	system("cls");

	DrawLineTop();
	gotoxy(38, 2);
	cout << "�ٿ�ȭ�� ���á�" << endl;
	gotoxy(35, 4);
	cout << "- ������ �������ּ���. -" << endl;

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
			m->setTheater(theater2);
			break;
		}
	}
	return 1;
}
void Show_Loading() {
	system("cls");

	CursorView(0);

	gotoxy(36, 15);
	cout << "* ���� ��... *";
	gotoxy(38, 17);
	cout << "������";
	Sleep(500);
	gotoxy(38, 17);
	cout << "��";
	Sleep(500);
	gotoxy(38, 17);
	cout << "���";
	Sleep(500);
	gotoxy(38, 17);
	cout << "����";
	Sleep(500);
	gotoxy(38, 17);
	cout << "�����";
	Sleep(500);
	gotoxy(31, 15);
	cout << "* ������ �Ϸ�Ǿ����ϴ�! *";
	gotoxy(37, 17);
	cout << "������";
	Sleep(1000);

	system("cls");
	gotoxy(30, 15);
	cout << "* ������ ��� ��... *";
	gotoxy(38, 17);
	cout << "������";
	Sleep(500);
	gotoxy(38, 17);
	cout << "��";
	Sleep(500);
	gotoxy(38, 17);
	cout << "���";
	Sleep(500);
	gotoxy(38, 17);
	cout << "����";
	Sleep(500);
	gotoxy(38, 17);
	cout << "�����";
	Sleep(500);
	gotoxy(29, 15);
	cout << "* ������ ����� �Ϸ�Ǿ����ϴ�! *";
	gotoxy(37, 17);
	cout << "������";
	
	Sleep(500);
	print();

}

void Choose_payment() {
	int card_num;
	int expiry_date;
	int card_pw;
	int legal_birth;

	system("cls");

	CursorView(0);

		DrawLineTop();
		gotoxy(38, 3);
		cout << "�ٰ��� ȭ���";

		DrawLineBottom();
		
		gotoxy(34, 10);
		cout << "û�ҳ�	��";
		gotoxy(34, 11);
		cout << "����		��";
		gotoxy(34, 12);
		cout << "���		��";

		gotoxy(33, 15);
		cout << " ���� �ݾ� : ";
		//gotoxy(49, 10);
		//cin >> birth;

		gotoxy(33, 18);
		cout << "ī���ȣ >>";
		gotoxy(45, 18);
		cin >> card_num;

		gotoxy(33, 21);
		cout << "��ȿ�Ⱓ >>";
		gotoxy(45, 21);
		cin >> expiry_date;

		gotoxy(33, 24);
		cout << "��й�ȣ >>   **";
		gotoxy(45, 24);
		cin >> card_pw;

		gotoxy(33, 27);
		cout << "��������(6�ڸ�)>>";
		gotoxy(51, 27);
		cin >> legal_birth;

		//m = new member(birth, tel, pw);

		system("cls");
		Show_Loading();
}



void print() {

	CursorView(0);

	DrawLineTop();
	gotoxy(38, 3);
	cout << "�ٿ����� Ȯ�Ρ�";
	DrawLineBottom2();

	gotoxy(37, 10);
	cout << "�� Movie Ticket ��";

	gotoxy(33, 14);
	cout << "��ȭ ���� : ";

	gotoxy(33, 17);
	cout << "���� : ";

	gotoxy(33, 20);
	cout << "��¥ : ";

	gotoxy(33, 23);
	cout << "���� : ";

	gotoxy(33, 26);
	cout << "���� �ο� : ";

	gotoxy(33, 29);
	cout << "�¼� : ";

	gotoxy(33, 32);
	cout << "���� ��ȣ : ";

	gotoxy(15, 35);
	cout << "�ַ�� Ž���� 'Movie' > ����Ž���� ���� ���� > ticket.txt Ȯ��";

	//m = new member(birth, tel, pw);

	gotoxy(0, 0);
	//system("cls");

}

void Choose_hour(int& x) {
	bool ch = true;
	int cnt = 0, key = 0, width = 0;
	string area, theater, hour[3], title;
	area = m->getArea();
	theater = m->getTheater();
	title = m->getTitle();

	switch (x / 2)
	{
	case 0: {
		for (int i = 0; i < 9; i++)
			for (int j = 0; j < 15; j++) {
				if (area == frozen2[i][j]->getTheater1() && theater == frozen2[i][j]->getTheater2()) {
					hour[cnt] = frozen2[i][j]->getHour();
					/*gotoxy((cnt+1) * 20, 20);
					cout << hour[cnt];*/
					cnt++;
				}
			}
	}break;//�ܿ�ձ�2�� �����ߴٴ� ��
	case 1: {
		for (int i = 0; i < 9; i++)
			for (int j = 0; j < 15; j++) {
				if (area == blackmoney[i][j]->getTheater1() && theater == blackmoney[i][j]->getTheater2()) {
					hour[cnt] = blackmoney[i][j]->getHour();
					cnt++;
				}
			}
	}break; //���Ӵ�
	case 2: {
		for (int i = 0; i < 9; i++)
			for (int j = 0; j < 15; j++) {
				if (area == JiYoung_82[i][j]->getTheater1() && theater == JiYoung_82[i][j]->getTheater2()) {
					hour[cnt] = JiYoung_82[i][j]->getHour();
					cnt++;
				}
			}
	}break;//82��� ������
	}

	system("cls");
	DrawLineTop();
	gotoxy(41, 3);
	cout << "�ٽð� ���á�";

	while (ch) {

		DrawLineBottom3();

		gotoxy(16, 14);
		cout << title;
		gotoxy(40, 14);
		cout << title;
		gotoxy(63, 14);
		cout << title;

		gotoxy(16, 17);
		cout << hour[0];
		gotoxy(40, 17);
		cout << hour[1];
		gotoxy(63, 17);
		cout << hour[2];

		DrawUserCursor5(width);

		key = _getch();
		switch (key) {
		case RIGHT:
			width += 23;
			break;
		case LEFT:
			width -= 23;
			break;
		}

		if (key == ENTER) {
			Choose_seat();
			ch = false;
		}
	}

}