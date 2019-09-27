#include "main.h"

void movie_theater() {

	string Area[10];

	int i, j;
	unsigned char a = 0xa6;
	unsigned char b[7];

	for (i = 1; i < 7; i++)
		b[i] = 0xa0 + i;

	cout << a << b[3];   //┌ 출력
	for (i = 0; i < 86; i++)
		cout << a << b[1];   // ─ 출력

	cout << a << b[4] << endl;   // ┐출력

	//빈 줄
	cout << a << b[2];
	for (j = 0; j < 43; j++)
		cout << "  ";
	cout << a << b[2] << endl; // | 출력

	//현재 상영작 글씨 있는 줄
	cout << a << b[2];
	for (j = 0; j < 17; j++)
		cout << "  ";
	cout << "☆영화관 선택☆ ";

	for (j = 0; j < 18; j++)
		cout << "  ";
	cout << a << b[2] << endl;

	//빈줄
	cout << a << b[2];
	for (j = 0; j < 23; j++)
		cout << "  ";
	for (j = 0; j < 20; j++)
		cout << "  ";
	cout << a << b[2] << endl;

	cout << a << b[6];   // └출력
	for (i = 0; i < 86; i++)    //─ 출력
		cout << a << b[1];
	cout << a << b[5] << endl;   // ┘출력

//////////////////////////////////////////////////////////////////////////////
	cout << a << b[3];   //┌ 출력
	for (i = 0; i < 86; i++)
		cout << a << b[1];   // ─ 출력

	cout << a << b[4] << endl;   // ┐출력

	for (i = 0; i < 25; i++) {
		//빈줄
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