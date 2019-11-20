#include "main.h"
#include "movie.h"
#include "member.h"

movie* blackmoney[9][25]; //9=����,��� .... / 25=ȫ��, ���, ����....���
movie* JiYoung_82[9][25];
movie* frozen2[9][25];

member* m;

int main(void) {


	SetConsoleView();
	//intro();
	//CtheaterObject();
	//join();
	//theater();
	date();


	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 25; j++) {
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


	for (int i = 0; i < 9; i++) {
		int cnt = 0;
		for (int j = 0; j < 25; j++) {
			if (j % 5 == 0 && j != 0) {
				cnt++;
			}
			blackmoney[i][j] = new movie("���Ӵ�",local1[i], local2[i][cnt]);
			JiYoung_82[i][j] = new movie("82��� ������",local1[i], local2[i][cnt]);
			frozen2[i][j] = new movie("�ܿ�ձ�2",local1[i], local2[i][cnt]);
		}
	}

	//cout<<blackmoney[0][0]->getTitle() << endl;

	//movie(string month, string day, string hour, string theater1, string theater2);
	//movie(string theater1, string theater2);
} 

void join() {
	int birth, tel, pw;
	char check;
	bool ch=true;

	while (ch) {
		DrawLineTop();
		gotoxy(38, 3);
		cout << "�ٰ��� �α��Ρ�" << endl;
	
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
		}else if(check == 'N' || check =='n' ||check != 'Y' || check != 'y' || check != 'N' || check != 'n') {
			system("cls");
		}
	}
	system("cls");
}