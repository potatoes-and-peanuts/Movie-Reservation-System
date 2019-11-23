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
	//Choose_date();
	Choose_seat();

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
			blackmoney[i][j] = new movie("블랙머니", local1[i], local2[i][cnt]);
			JiYoung_82[i][j] = new movie("82년생 김지영", local1[i], local2[i][cnt]);
			frozen2[i][j] = new movie("겨울왕국2", local1[i], local2[i][cnt]);
		}
	}

	//cout<<blackmoney[0][0]->getTitle() << endl;

	//movie(string month, string day, string hour, string theater1, string theater2);
	//movie(string theater1, string theater2);
}


void join() {
	int birth, tel, pw;
	char check;
	bool ch = true;

	while (ch) {
		DrawLineTop();
		gotoxy(38, 3);
		cout << "☆간편 로그인☆";

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
		cout << "☆날짜 선택☆";
		gotoxy(35, 4);
		cout << "- 날짜를 선택해주세요. -";

		DrawLineBottom();

		gotoxy(35, 10);
		cout << "*숫자만 입력해주세요.*";

		gotoxy(41, 13);
		cout << "월 >>";
		gotoxy(47, 13);
		cin >> month;

		gotoxy(41, 15);
		cout << "일 >>";
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
	cout << "☆좌석과 인원 선택☆";
	gotoxy(32, 4);
	cout << "- 좌석과 인원을 선택해주세요. -";

	DrawLineBottom();

	gotoxy(28, 16);
	cout << "스크린";
	//좌석 행, 열 출력
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

	//좌석 출력
	for (i = 0; i < 9; i++) {
		gotoxy(8, 19 + i);
		for (j = 0; j < 3; j++)
			if (seat[i][j] == 0) {
				cout << "□ ";
			}
			else if (seat[i][j] == 15) {
				cout << "■ ";
			}

		cout << "   ";

		for (j = 3; j < 10; j++)
			if (seat[i][j] == 0) {
				cout << "□ ";
			}
			else if (seat[i][j] == 15) {
				cout << "■ ";
			}
			
		cout << "   ";

		for (j = 10; j < 13; j++)
			if (seat[i][j] == 0) {
				cout << "□ ";
			}
			else if (seat[i][j] == 15) {
				cout << "■ ";
			}
	

		cout << "\n" << endl;
	}

	//인원 입력
	gotoxy(7, 10);
	cout << "◈ 관람 인원이 몇 명입니까?";
	gotoxy(40, 10);
	cout << "청소년 : ";
	gotoxy(54, 10);
	cout << "성인 : ";
	gotoxy(66, 10);
	cout << "우대 : ";

	gotoxy(49, 10);
	cin >> teenager;
	gotoxy(61, 10);
	cin >> adult;
	gotoxy(73, 10);
	cin >> udae;

	if (teenager == 0 && adult == 0 && udae == 0) {
		while (true) {
			gotoxy(28, 13);
			cout << "***관람인원이 없습니다. ***";

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

	//좌석 입력
	p_total = teenager + adult + udae;
	gotoxy(56, 16);
	cout << "◈ " << p_total << "명의 좌석을 입력해주세요.";

	for (i = 0; i < p_total; i++) {
		gotoxy(56, 20);
		cout << "원하는 좌석의 행(알파벳) :     ";
		gotoxy(56, 24);
		cout << "원하는 좌석의 열(번호) :      ";

		gotoxy(83, 20);
		cin >> row[i];
	

		//알파벳 대문자가 아닐 때
		if (row[i] <= 64 || row[i] >= 74) {
			while (true) {
				gotoxy(27, 13);
				cout << "***알파벳 대문자로 입력해주세요.***";
			
				gotoxy(83, 20);
				cout << "   ";
				gotoxy(83, 20);
				cin >> row[i];

				if (row[i] >= 64 && row[i] <= 74) break;
			}
		}

		gotoxy(81, 24);
		cin >> col[i];

		//입력받은 1~13가 아닐 때 
		if (col[i] < 1 || col[i] >= 13) {
			while (true) {
				gotoxy(27, 13);
				cout << "***1 ~ 13사이의 숫자를 입력해주세요.***";

				gotoxy(81, 24);
				cout << "   ";
				gotoxy(81, 24);
				cin >> row[i];

				if (col[i] <= 1 || col[i] >= 13) break;
			}
		}
	}


	//확인용 
	for (int i = 0; i < p_total; i++) {
		gotoxy(20, 30+i);
		cout << i+1 << "번 | " << row[i] << col[i];
	}

	while (true) {
		gotoxy(31, 32);
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

void DrawLineBottom() { // '영화관 선택'와 같은 글씨 아래에 있는 박스 (이벤트 발생하는 구간)
	int n, m;
	unsigned char a = 0xa6;
	unsigned char b[7];

	for (n = 1; n < 7; n++)
		b[n] = 0xa0 + n;

	gotoxy(0, 7);
	cout << a << b[3];   //┌ 출력
	for (n = 0; n < 86; n++)
		cout << a << b[1];   // ─ 출력

	cout << a << b[4] << endl;   // ┐출력

	for (n = 0; n < 30; n++) {
		cout << a << b[2];
		for (m = 0; m < 43; m++) //빈줄
			cout << "  ";
		cout << a << b[2] << endl;
	}

	cout << a << b[6];   // └출력
	for (n = 0; n < 86; n++)    //─ 출력
		cout << a << b[1];
	cout << a << b[5] << endl;   // ┘출력
}

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

