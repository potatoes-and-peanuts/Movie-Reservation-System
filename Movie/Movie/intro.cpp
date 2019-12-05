#include "main.h"

void intro() { //시작화면
	system("cls");

	int i, j, x = 0;
	unsigned char a = 0xa6;
	unsigned char b[7];

	CursorView(0);

	for (i = 1; i < 7; i++)
		b[i] = 0xa0 + i;

	gotoxy(10, 50);
	cout << a << b[3];   //┌ 출력
	for (i = 0; i < 86; i++)
		cout << a << b[1];   // ─ 출력
	cout << a << b[4] << endl;   // ┐출력

	//빈줄
	for (i = 0; i < 37; i++) {
		cout << a << b[2];
		for (j = 0; j < 43; j++)
			cout << "  ";
		cout << a << b[2] << endl;
	}

	cout << a << b[6];   // └출력
	for (i = 0; i < 86; i++)    //─ 출력
		cout << a << b[1];
	cout << a << b[5] << endl;   // ┘출력

	//알파벳 그리기
	gotoxy(5, 6);
	cout << "|";
	gotoxy(6, 5);
	cout << "＊" << a << b[1];
	gotoxy(11, 6);
	cout << "＼";
	gotoxy(13, 7);
	cout << a << b[1] << " ＊";
	gotoxy(5, 7);
	cout << "|";
	gotoxy(5, 8);
	cout << "|";
	gotoxy(5, 9);
	cout << "|";
	gotoxy(5, 10);
	cout << "|";
	gotoxy(5, 11);
	cout << "|";
	gotoxy(6, 12);
	cout << a << b[1] << "＊" << a << b[1];
	gotoxy(10, 9);
	cout << "＼" << endl;
	gotoxy(13, 10);
	cout << a << b[1] << " ＊";
	gotoxy(9, 10);
	cout << " ＊";
	gotoxy(10, 11);
	cout << "|";
	gotoxy(17, 6);
	cout << "/";
	gotoxy(17, 9);
	cout << "/";
	gotoxy(19, 5);
	cout << a << b[1] << "  ＊";
	gotoxy(23, 6);
	cout << "|";
	gotoxy(23, 7);
	cout << "|";
	gotoxy(23, 8);
	cout << "|";
	gotoxy(23, 9);
	cout << "|";
	gotoxy(23, 10);
	cout << "|";
	gotoxy(23, 11);
	cout << "|";
	gotoxy(22, 12);
	cout << a << b[1];
	gotoxy(19, 12);
	cout << a << b[1] << "＊";
	gotoxy(18, 9);
	cout << "|";
	gotoxy(18, 10);
	cout << "|";
	gotoxy(18, 11);
	cout << "|";
	////////////////////// M 완성
	Sleep(600);

	gotoxy(28, 6);
	cout << "/";
	gotoxy(29, 5);
	cout << "＊" << a << b[1];
	gotoxy(31, 5);
	cout << a << b[1];
	gotoxy(32, 5);
	cout << a << b[1];
	gotoxy(33, 5);
	cout << a << b[1];
	gotoxy(34, 5);
	cout << a << b[1];
	gotoxy(35, 5);
	cout << a << b[1];
	gotoxy(38, 6);
	cout << "＼";
	gotoxy(39, 7);
	cout << "＊";
	gotoxy(40, 8);
	cout << "|";
	gotoxy(40, 9);
	cout << "|";
	gotoxy(39, 9);
	cout << "＊";
	gotoxy(39, 10);
	cout << "/";
	gotoxy(38, 11);
	cout << "/";
	gotoxy(37, 12);
	cout << "＊ ";
	gotoxy(36, 12);
	cout << a << b[1];
	gotoxy(35, 12);
	cout << a << b[1];
	gotoxy(34, 12);
	cout << a << b[1];
	gotoxy(33, 12);
	cout << a << b[1];
	gotoxy(29, 12);
	cout << "＊" << a << b[1];
	gotoxy(28, 11);
	cout << "＼";
	gotoxy(27, 10);
	cout << "|";
	gotoxy(27, 9);
	cout << "|";
	gotoxy(27, 8);
	cout << "|";
	gotoxy(27, 7);
	cout << "＊";
	//겉
	Sleep(600);
	gotoxy(30, 8);
	cout << "/";
	gotoxy(32, 7);
	cout << a << b[1];
	gotoxy(33, 7);
	cout << "＊";
	gotoxy(35, 8);
	cout << "＼";
	gotoxy(36, 9);
	cout << "/";
	gotoxy(34, 10);
	cout << "＊";
	gotoxy(33, 10);
	cout << a << b[1];
	gotoxy(32, 10);
	cout << a << b[1];
	gotoxy(30, 9);
	cout << "＼";
	//속
	// O 완성
	Sleep(300);

	gotoxy(44, 5);
	cout << a << b[1];
	gotoxy(45, 5);
	cout << a << b[1];
	gotoxy(47, 6);
	cout << "＼";
	gotoxy(49, 7);
	cout << "＼";
	gotoxy(51, 8);
	cout << "＊";
	gotoxy(53, 7);
	cout << "/";
	gotoxy(54, 6);
	cout << "/";
	gotoxy(56, 5);
	cout << a << b[1];
	gotoxy(57, 5);
	cout << a << b[1] << " ＊";
	gotoxy(60, 6);
	cout << "|";
	gotoxy(59, 7);
	cout << "＊";
	gotoxy(59, 8);
	cout << "/";
	gotoxy(58, 9);
	cout << "/";
	gotoxy(57, 10);
	cout << "/";
	gotoxy(56, 11);
	cout << "/";
	gotoxy(55, 12);
	cout << "＊";
	gotoxy(52, 12);
	cout << a << b[1];
	gotoxy(49, 12);
	cout << "＊ " << a << b[1];
	gotoxy(48, 11);
	cout << "＼";
	gotoxy(46, 10);
	cout << "＼";
	gotoxy(44, 9);
	cout << "＼";
	gotoxy(43, 6);
	cout << "|";
	gotoxy(43, 7);
	cout << "|";
	gotoxy(42, 8);
	cout << " ＊";
	// V완성
	Sleep(600);

	gotoxy(64, 5);
	cout << a << b[1];
	gotoxy(65, 5);
	cout << a << b[1];
	gotoxy(66, 5);
	cout << "＊";
	gotoxy(67, 6);
	cout << "|";
	gotoxy(67, 7);
	cout << "|";
	gotoxy(67, 8);
	cout << "|";
	gotoxy(67, 9);
	cout << "|";
	gotoxy(67, 10);
	cout << "|";
	gotoxy(67, 11);
	cout << "|";
	gotoxy(66, 12);
	cout << "＊";
	gotoxy(65, 12);
	cout << a << b[1];
	gotoxy(64, 12);
	cout << a << b[1];
	gotoxy(63, 6);
	cout << "|";
	gotoxy(63, 7);
	cout << "|";
	gotoxy(63, 8);
	cout << "|";
	gotoxy(63, 9);
	cout << "|";
	gotoxy(63, 10);
	cout << "|";
	gotoxy(63, 11);
	cout << "|";
	//I 완성
	Sleep(700);

	gotoxy(72, 5);
	cout << a << b[1];
	gotoxy(73, 5);
	cout << a << b[1];
	gotoxy(74, 5);
	cout << a << b[1];
	gotoxy(75, 5);
	cout << a << b[1];
	gotoxy(76, 5);
	cout << a << b[1];
	gotoxy(77, 5);
	cout << a << b[1];
	gotoxy(78, 5);
	cout << a << b[1] << " ＊";
	gotoxy(81, 6);
	cout << "|";
	gotoxy(79, 6);
	cout << a << b[1];
	gotoxy(77, 6);
	cout << a << b[1];
	gotoxy(75, 6);
	cout << a << b[1];
	gotoxy(73, 6);
	cout << "＊" << a << b[1];
	gotoxy(74, 7);
	cout << "|";
	gotoxy(75, 8);
	cout << a << b[1];
	gotoxy(76, 8);
	cout << a << b[1];
	gotoxy(77, 8);
	cout << a << b[1];
	gotoxy(78, 8);
	cout << a << b[1];
	gotoxy(79, 8);
	cout << a << b[1];
	gotoxy(80, 8);
	cout << "＊";
	gotoxy(81, 9);
	cout << "|";
	gotoxy(79, 9);
	cout << a << b[1];
	gotoxy(77, 9);
	cout << a << b[1];
	gotoxy(75, 9);
	cout << a << b[1];
	gotoxy(73, 9);
	cout << "＊";
	gotoxy(74, 10);
	cout << "|";
	gotoxy(75, 11);
	cout << a << b[1];
	gotoxy(77, 11);
	cout << a << b[1];
	gotoxy(79, 11);
	cout << a << b[1];
	gotoxy(80, 11);
	cout << "＊";
	gotoxy(81, 12);
	cout << "|";
	gotoxy(80, 12);
	cout << a << b[1];
	gotoxy(79, 12);
	cout << a << b[1];
	gotoxy(78, 12);
	cout << a << b[1];
	gotoxy(77, 12);
	cout << a << b[1];
	gotoxy(76, 12);
	cout << a << b[1];
	gotoxy(75, 12);
	cout << a << b[1];
	gotoxy(74, 12);
	cout << a << b[1];
	gotoxy(73, 12);
	cout << a << b[1];
	gotoxy(72, 12);
	cout << a << b[1];
	gotoxy(71, 5);
	cout << "＊";
	gotoxy(71, 6);
	cout << "|";
	gotoxy(71, 7);
	cout << "|";
	gotoxy(71, 8);
	cout << "|";
	gotoxy(71, 9);
	cout << "|";
	gotoxy(71, 10);
	cout << "|";
	gotoxy(71, 11);
	cout << "|";
	gotoxy(71, 12);
	cout << "＊";
	//E완성

	Sleep(600);

	for (i = 0; i < 10; i++) {
		gotoxy(17, 17 + i);
		cout << "|";
	}
	gotoxy(17, 16);
	cout << "＊";

	for (i = 0; i < 7; i++) {
		gotoxy(18+i, 16);
		cout << a << b[1];
	}
	gotoxy(26, 16);
	cout << "*";
	gotoxy(28, 17);
	cout << "＼";
	gotoxy(30, 18);
	cout << "|";
	gotoxy(30, 19);
	cout << "|";

	gotoxy(30, 20);
	cout << "*";
	gotoxy(29, 21);
	cout << "/";
	gotoxy(27, 22);
	cout << "*";
	gotoxy(28, 23);
	cout << "＼";
	gotoxy(30, 24);
	cout << "|";
	gotoxy(30, 25);
	cout << "|";
	gotoxy(30, 26);
	cout << "/";
	gotoxy(28, 27);
	cout << "*";

	for (i = 0; i < 10; i++) {
		gotoxy(18 + i, 27);
		cout << a << b[1];
	}
	//B 완성
	
	gotoxy(21, 18);
	cout << a << b[1];
	gotoxy(22, 18);
	cout << a << b[1];
	gotoxy(23, 18);
	cout << a << b[1];
	gotoxy(20, 19);
	cout << "|";
	gotoxy(21, 20);
	cout << a << b[1];
	gotoxy(22, 20);
	cout << a << b[1];
	gotoxy(23, 20);
	cout << a << b[1]; //21
	gotoxy(25, 19);
	cout << "|";

	gotoxy(21, 23);
	cout << a << b[1];
	gotoxy(22, 23);
	cout << a << b[1];
	gotoxy(23, 23);
	cout << a << b[1];
	gotoxy(20, 24);
	cout << "|";
	gotoxy(20, 25);
	cout << "|";
	gotoxy(21, 26);
	cout << a << b[1];
	gotoxy(22, 26);
	cout << a << b[1];
	gotoxy(23, 26);
	cout << a << b[1];
	gotoxy(25, 24);
	cout << "|";
	gotoxy(25, 25);
	cout << "|";
	//속 B완성
	Sleep(600);
	
	gotoxy(37, 18); //6->18, 29->35 (6)
	cout << "/";
	gotoxy(38, 17);
	cout << "＊" << a << b[1];
	gotoxy(39, 17);
	cout << a << b[1];
	gotoxy(40, 17);
	cout << a << b[1];
	gotoxy(41, 17);
	cout << a << b[1];
	gotoxy(42, 17);
	cout << a << b[1];
	gotoxy(43, 17);
	cout << a << b[1];
	gotoxy(44, 17);
	cout << a << b[1];
	gotoxy(45, 17);
	cout << a << b[1];
	gotoxy(46, 17);
	cout << a << b[1];
	gotoxy(49, 18);
	cout << "＼";
	gotoxy(50, 19);
	cout << "＊";


	for (i = 0; i < 4; i++) {
		gotoxy(36, 19+i);
		cout << "|";
		gotoxy(51, 20 + i);
		cout << "|";
	}

	gotoxy(50, 24);
	cout << "＊";
	gotoxy(50, 24);
	cout << "/";
	gotoxy(49, 25);
	cout << "/";
	gotoxy(48, 26);
	cout << "＊ ";
	gotoxy(47, 26);
	cout << a << b[1];
	gotoxy(46, 26);
	cout << a << b[1];
	gotoxy(45, 26);
	cout << a << b[1];
	gotoxy(46, 26);
	cout << a << b[1];
	gotoxy(45, 26);
	cout << a << b[1];
	gotoxy(39, 26);
	cout << "＊" << a << b[1] << a << b[1] << a << b[1];
	gotoxy(38, 25);
	cout << "＼";
	gotoxy(36, 23);
	cout << "|";
	gotoxy(36, 24);
	cout << "*";


	//30->40 (10), 8->21 (13)
	gotoxy(40, 21);
	cout << "/";
	gotoxy(42, 20);
	cout << a << b[1];
	gotoxy(43, 20);
	cout << "＊";
	gotoxy(45, 21);
	cout << "＼";
	gotoxy(46, 22);
	cout << "/";
	gotoxy(44, 23);
	cout << "＊";
	gotoxy(43, 23);
	cout << a << b[1];
	gotoxy(42, 23);
	cout << a << b[1];
	gotoxy(40, 22);
	cout << "＼";
	//속 O 완성

	Sleep(600);
	
	gotoxy(56, 17);
	cout << "*";
	for(i=0; i<3; i++){
		gotoxy(58 + (2 * i), 17 + i);
		cout << "＼";
		gotoxy(55+(2*i), 18+i);
		cout << "＼";
	}

	for (i = 0; i < 3; i++) {
		gotoxy(69 - i, 18 + i);
		cout << "/";
		gotoxy(66-i, 17 + i);
		cout << "/";
	}
	

	gotoxy(61, 21);
	cout << "*";
	gotoxy(66, 21);
	cout << "*";
	gotoxy(68, 17);
	cout << "*";

	for (i = 0; i < 3; i++) {
		gotoxy(67 + (2 * i), 22 + i);
		cout << "＼";
		gotoxy(64 + (2 * i), 23 + i);
		cout << "＼";
	}
	gotoxy(69, 25);
	cout << "*";
	gotoxy(70, 25);
	cout << "*";
	for (i = 0; i < 4; i++) {
		gotoxy(60 - i, 22 + i);
		cout << "/";
		gotoxy(63 - i, 23 + i);
		cout << "/";
	}
	gotoxy(58, 25);
	cout << "*";
	Sleep(600);
	//X 구현

	gotoxy(38, 31);
	cout << "~ Loading ~";
	gotoxy(36, 33);
	cout << "□□□□□□□";
	Sleep(300);

	gotoxy(38, 31);
	cout << "           ";
	Sleep(300);
	gotoxy(38, 31);
	cout << "~ Loading ~";
	gotoxy(36, 33);
	cout << "■";
	Sleep(500);

	gotoxy(38, 31);
	cout << "           ";
	gotoxy(36, 33);
	cout << "■■";
	Sleep(300);

	gotoxy(38, 31);
	cout << "~ Loading ~";
	gotoxy(36, 33);
	cout << "■■■";
	Sleep(500);

	gotoxy(38, 31);
	cout << "           ";
	gotoxy(36, 33);
	cout << "■■■■";
	Sleep(300);

	gotoxy(38, 31);
	cout << "~ Loading ~";
	gotoxy(36, 33);
	cout << "■■■■■";
	Sleep(500);

	gotoxy(36, 33);
	cout << "■■■■■■";
	Sleep(300);
	gotoxy(36, 33);
	cout << "■■■■■■■";

	Sleep(2000);

	system("cls");
}