#include "main.h"

int intro() { //시작화면
	system("cls");

	int i, j, x = 0;
	unsigned char a = 0xa6;
	unsigned char b[7];

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
	cout << "|" << endl;
	gotoxy(6, 5);
	cout << "＊" << a << b[1] << endl;
	gotoxy(11, 6);
	cout << "＼" << endl;
	gotoxy(13, 7);
	cout << a << b[1] << " ＊" << endl;
	gotoxy(5, 7);
	cout << "|" << endl;
	gotoxy(5, 8);
	cout << "|" << endl;
	gotoxy(5, 9);
	cout << "|" << endl;
	gotoxy(5, 10);
	cout << "|" << endl;
	gotoxy(5, 11);
	cout << "|" << endl;
	gotoxy(6, 12);
	cout << a << b[1] << "＊" << a << b[1] << endl;
	gotoxy(10, 9);
	cout << "＼" << endl;
	gotoxy(13, 10);
	cout << a << b[1] << " ＊" << endl;
	gotoxy(9, 10);
	cout << " ＊" << endl;//
	gotoxy(10, 11);
	cout << "|" << endl;
	gotoxy(17, 6);
	cout << "/" << endl;
	gotoxy(17, 9);
	cout << "/" << endl;
	gotoxy(19, 5);
	cout << a << b[1] << "  ＊" << endl;
	gotoxy(23, 6);
	cout << "|" << endl;
	gotoxy(23, 7);
	cout << "|" << endl;
	gotoxy(23, 8);
	cout << "|" << endl;
	gotoxy(23, 9);
	cout << "|" << endl;
	gotoxy(23, 10);
	cout << "|" << endl;
	gotoxy(23, 11);
	cout << "|" << endl;
	gotoxy(22, 12);
	cout << a << b[1] << endl;
	gotoxy(19, 12);
	cout << a << b[1] << "＊" << endl;
	gotoxy(18, 9);
	cout << "|" << endl;
	gotoxy(18, 10);
	cout << "|" << endl;
	gotoxy(18, 11);
	cout << "|" << endl;
	////////////////////// M 완성

	Sleep(700);

	gotoxy(28, 6);
	cout << "/" << endl;
	gotoxy(29, 5);
	cout << "＊" << a << b[1] << endl;
	gotoxy(31, 5);
	cout << a << b[1] << endl;
	gotoxy(32, 5);
	cout << a << b[1] << endl;
	gotoxy(33, 5);
	cout << a << b[1] << endl;
	gotoxy(34, 5);
	cout << a << b[1] << endl;
	gotoxy(35, 5);
	cout << a << b[1] << endl;
	gotoxy(38, 6);
	cout << "＼" << endl;
	gotoxy(39, 7);
	cout << "＊" << endl;
	gotoxy(40, 8);
	cout << "|" << endl;
	gotoxy(40, 9);
	cout << "|" << endl;
	gotoxy(39, 9);
	cout << "＊" << endl;
	gotoxy(39, 10);
	cout << "/" << endl;
	gotoxy(38, 11);
	cout << "/" << endl;
	gotoxy(37, 12);
	cout << "＊ " << endl;
	gotoxy(36, 12);
	cout << a << b[1] << endl;
	gotoxy(35, 12);
	cout << a << b[1] << endl;
	gotoxy(34, 12);
	cout << a << b[1] << endl;
	gotoxy(33, 12);
	cout << a << b[1] << endl;
	gotoxy(29, 12);
	cout << "＊" << a << b[1] << endl;
	gotoxy(28, 11);
	cout << "＼" << endl;
	gotoxy(27, 10);
	cout << "|" << endl;
	gotoxy(27, 9);
	cout << "|" << endl;
	gotoxy(27, 8);
	cout << "|" << endl;
	gotoxy(27, 7);
	cout << "＊" << endl;
	//겉
	Sleep(300);
	gotoxy(30, 8);
	cout << "/" << endl;
	gotoxy(32, 7);
	cout << a << b[1] << endl;
	gotoxy(33, 7);
	cout << "＊" << endl;
	gotoxy(35, 8);
	cout << "＼" << endl;
	gotoxy(36, 9);
	cout << "/" << endl;
	gotoxy(34, 10);
	cout << "＊" << endl;
	gotoxy(33, 10);
	cout << a << b[1] << endl;
	gotoxy(32, 10);
	cout << a << b[1] << endl;
	gotoxy(30, 9);
	cout << "＼" << endl;
	//속
	// O 완성
	Sleep(400);

	gotoxy(44, 5);
	cout << a << b[1] << endl;
	gotoxy(45, 5);
	cout << a << b[1] << endl;
	gotoxy(47, 6);
	cout << "＼" << endl;
	gotoxy(49, 7);
	cout << "＼" << endl;
	gotoxy(51, 8);
	cout << "＊" << endl;
	gotoxy(53, 7);
	cout << "/" << endl;
	gotoxy(54, 6);
	cout << "/" << endl;
	gotoxy(56, 5);
	cout << a << b[1] << endl;
	gotoxy(57, 5);
	cout << a << b[1] << " ＊" << endl;
	gotoxy(60, 6);
	cout << "|" << endl;
	gotoxy(59, 7);
	cout << "＊" << endl;
	gotoxy(59, 8);
	cout << "/" << endl;
	gotoxy(58, 9);
	cout << "/" << endl;
	gotoxy(57, 10);
	cout << "/" << endl;
	gotoxy(56, 11);
	cout << "/" << endl;
	gotoxy(55, 12);
	cout << "＊" << endl;
	gotoxy(52, 12);
	cout << a << b[1] << endl;
	gotoxy(49, 12);
	cout << "＊ " << a << b[1] << endl;
	gotoxy(48, 11);
	cout << "＼" << endl;
	gotoxy(46, 10);
	cout << "＼" << endl;
	gotoxy(44, 9);
	cout << "＼" << endl;
	gotoxy(43, 6);
	cout << "|" << endl;
	gotoxy(43, 7);
	cout << "|" << endl;
	gotoxy(42, 8);
	cout << " ＊" << endl;
	// V완성
	Sleep(700);

	gotoxy(64, 5);
	cout << a << b[1] << endl;
	gotoxy(65, 5);
	cout << a << b[1] << endl;
	gotoxy(66, 5);
	cout << "＊" << endl;
	gotoxy(67, 6);
	cout << "|" << endl;
	gotoxy(67, 7);
	cout << "|" << endl;
	gotoxy(67, 8);
	cout << "|" << endl;
	gotoxy(67, 9);
	cout << "|" << endl;
	gotoxy(67, 10);
	cout << "|" << endl;
	gotoxy(67, 11);
	cout << "|" << endl;
	gotoxy(66, 12);
	cout << "＊" << endl;
	gotoxy(65, 12);
	cout << a << b[1] << endl;
	gotoxy(64, 12);
	cout << a << b[1] << endl;
	gotoxy(63, 6);
	cout << "|" << endl;
	gotoxy(63, 7);
	cout << "|" << endl;
	gotoxy(63, 8);
	cout << "|" << endl;
	gotoxy(63, 9);
	cout << "|" << endl;
	gotoxy(63, 10);
	cout << "|" << endl;
	gotoxy(63, 11);
	cout << "|" << endl;
	//I 완성
	Sleep(700);

	gotoxy(72, 5);
	cout << a << b[1] << endl;
	gotoxy(73, 5);
	cout << a << b[1] << endl;
	gotoxy(74, 5);
	cout << a << b[1] << endl;
	gotoxy(75, 5);
	cout << a << b[1] << endl;
	gotoxy(76, 5);
	cout << a << b[1] << endl;
	gotoxy(77, 5);
	cout << a << b[1] << endl;
	gotoxy(78, 5);
	cout << a << b[1] << " ＊" << endl;
	gotoxy(81, 6);
	cout << "|" << endl;
	gotoxy(79, 6);
	cout << a << b[1] << endl;
	gotoxy(77, 6);
	cout << a << b[1] << endl;
	gotoxy(75, 6);
	cout << a << b[1] << endl;
	gotoxy(73, 6);
	cout << "＊" << a << b[1] << endl;
	gotoxy(74, 7);
	cout << "|" << endl;
	gotoxy(75, 8);
	cout << a << b[1] << endl;
	gotoxy(76, 8);
	cout << a << b[1] << endl;
	gotoxy(77, 8);
	cout << a << b[1] << endl;
	gotoxy(78, 8);
	cout << a << b[1] << endl;
	gotoxy(79, 8);
	cout << a << b[1] << endl;
	gotoxy(80, 8);
	cout << "＊" << endl;
	gotoxy(81, 9);
	cout << "|" << endl;
	gotoxy(79, 9);
	cout << a << b[1] << endl;
	gotoxy(77, 9);
	cout << a << b[1] << endl;
	gotoxy(75, 9);
	cout << a << b[1] << endl;
	gotoxy(73, 9);
	cout << "＊" << endl;
	gotoxy(74, 10);
	cout << "|" << endl;
	gotoxy(75, 11);
	cout << a << b[1] << endl;
	gotoxy(77, 11);
	cout << a << b[1] << endl;
	gotoxy(79, 11);
	cout << a << b[1] << endl;
	gotoxy(80, 11);
	cout << "＊" << endl;
	gotoxy(81, 12);
	cout << "|" << endl;
	gotoxy(80, 12);
	cout << a << b[1] << endl;
	gotoxy(79, 12);
	cout << a << b[1] << endl;
	gotoxy(78, 12);
	cout << a << b[1] << endl;
	gotoxy(77, 12);
	cout << a << b[1] << endl;
	gotoxy(76, 12);
	cout << a << b[1] << endl;
	gotoxy(75, 12);
	cout << a << b[1] << endl;
	gotoxy(74, 12);
	cout << a << b[1] << endl;
	gotoxy(73, 12);
	cout << a << b[1] << endl;
	gotoxy(72, 12);
	cout << a << b[1] << endl;
	gotoxy(71, 5);
	cout << "＊" << endl;
	gotoxy(71, 6);
	cout << "|" << endl;
	gotoxy(71, 7);
	cout << "|" << endl;
	gotoxy(71, 8);
	cout << "|" << endl;
	gotoxy(71, 9);
	cout << "|" << endl;
	gotoxy(71, 10);
	cout << "|" << endl;
	gotoxy(71, 11);
	cout << "|" << endl;
	gotoxy(71, 12);
	cout << "＊" << endl;
	//E완성
	Sleep(2000);

	system("cls");

	return 0;
}