#include "main.h"
#include "movie.h"
#include "member.h"

movie* blackmoney[9][25]; //9=서울,경기 .... / 25=홍대, 상암, 강남....등등
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
	string local1[] = { "서울", "경기", "인천", "강원", "대전/충청", "대구", "부산/울산", "경상", "광주/전라/제주" };
	string local2[9][5] = { { "강남", "강변", "구로", "천호", "홍대" },
	{ "구리", "김포",  "시흥", "수원", "용인" },
	{ "계양", "청라", "인천", "부평", "연수역" },
	{ "강릉", "원주", "인제", "춘천", "춘천명동" },
	{ "당진", "대전", "보령", "서산", "세종" },
	{ "대구", "대구수성", "대구월성", "대구철곡", "대구한일" },
	{ "남포", "대연", "대한", "동래", "서면" },
	{ "거제", "구미", "김해", "마산", "안동" },
	{ "광양", "군산", "나주", "목포", "순천" } };


	for (int i = 0; i < 9; i++) {
		int cnt = 0;
		for (int j = 0; j < 25; j++) {
			if (j % 5 == 0 && j != 0) {
				cnt++;
			}
			blackmoney[i][j] = new movie("블랙머니",local1[i], local2[i][cnt]);
			JiYoung_82[i][j] = new movie("82년생 김지영",local1[i], local2[i][cnt]);
			frozen2[i][j] = new movie("겨울왕국2",local1[i], local2[i][cnt]);
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
		cout << "☆간편 로그인☆" << endl;
	
		DrawLineBottom();

		gotoxy(30, 10);
		cout << "생년월일(6자리) >>";
		gotoxy(49, 10);
		cin >> birth;

		gotoxy(30, 12);
		cout << "전화번호(-제외) >>";
		gotoxy(49, 12);
		cin >> tel;

		gotoxy(30, 14);
		cout << "비밀번호(6자리) >>";
		gotoxy(49, 14);
		cin >> pw;

		m = new member(birth, tel, pw);

		gotoxy(35, 18);
		cout << "*입력된 정보 확인*";

		gotoxy(34, 20);
		cout << "생년월일 : ";
		gotoxy(47, 20);
		cout << m->getBirth();

		gotoxy(34, 22);
		cout << "전화번호 : ";
		gotoxy(47, 22);
		cout << m->getTel();

		gotoxy(34, 24);
		cout << "비밀번호 : ";
		gotoxy(47, 24);
		cout << m->getPw();

		gotoxy(29, 28);
		cout << "입력하신 정보가 맞나요?(Y/N) ";
		
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