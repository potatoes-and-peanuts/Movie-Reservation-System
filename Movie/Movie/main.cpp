#include "main.h"
#include "movie.h"
#include "member.h"

movie* blackmoney[9][15]; //9=����,��� .... / 25=ȫ��, ���, ����....���
movie* JiYoung_82[9][15];
movie* frozen2[9][15];

member* m;


int main(void) {

	SetConsoleView();
	intro();
	CtheaterObject();
	join();
	theater();
	Choose_date();
	Choose_movie();
	Choose_seat();

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

void Choose_seat() {
	system("cls");

	int i, j;
	char check;
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

	int teenager = 0, adult = 0, udae = 0;
	
	char row[20];
	int col[20];
	int p_money = 0;  
	int p_total = 0;





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

	if (teenager == 0 && adult == 0 && udae == 0) {
		while (true) {
			gotoxy(28, 13);
			cout << "***�����ο��� �����ϴ�. ***";

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

			if (teenager != 0 || adult != 0 || udae != 0) break;
		}
	}

	//�¼� �Է�
	p_total = teenager + adult + udae;
	gotoxy(56, 16);
	cout << "�� " << p_total << "���� �¼��� �Է����ּ���.";

	for (i = 0; i < p_total; i++) {
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
		cin >> col[i];

		//�Է¹��� 1~13�� �ƴ� �� 
		if (col[i] < 1 || col[i] >= 13) {
			while (true) {
				gotoxy(27, 13);
				cout << "***1 ~ 13������ ���ڸ� �Է����ּ���.***";

				gotoxy(81, 24);
				cout << "   ";
				gotoxy(81, 24);
				cin >> row[i];

				if (col[i] <= 1 || col[i] >= 13) break;
			}
		}
	}


	//Ȯ�ο� 
	for (int i = 0; i < p_total; i++) {
		gotoxy(20, 30+i);
		cout << i+1 << "�� | " << row[i] << col[i];
	}

	while (true) {
		gotoxy(31, 32);
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
	gotoxy(35, 15 + x);
	cout << "��";
}

void DrawUserCursor4(int& y) { //�¿�
	if (y > 4) y = 0;
	else if (y < 0) y = 4;
}

void Choose_movie() {
	int x = 0, y = 0;
	int key = 0;
	DrawLineTop();

	gotoxy(38, 3);
	cout << "�ٿ�ȭ ���š�" << endl;

	while (true) {
		gotoxy(38, 3);
		cout << "�ٿ�ȭ ���š�" << endl;
		DrawLineBottom();
		gotoxy(40, 10);
		DrawUserCursor4(y);

		switch (y / 2)
		{
		case 0: cout << "�ܿ�ձ�2"; break;
		case 1: cout << "���Ӵ�"; break;
		case 2: cout << "82��� ������"; break;
		}
		/*cout << "�ܿ�ձ�2";*/

		gotoxy(40, 15);
		cout << "�����ϱ�";

		gotoxy(40, 17);
		cout << "�ٰŸ�����";

		gotoxy(40, 19);
		cout << "���亸��";

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
				//Choose_hour();
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