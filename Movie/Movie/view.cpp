#include "main.h"

void view() {
	int i, j;
	unsigned char a = 0xa6;
	unsigned char b[7];

	for (i = 1; i < 7; i++)
		b[i] = 0xa0 + i;

	cout << a << b[3];   //�� ���
	for (i = 0; i < 86; i++)
		cout << a << b[1];   // �� ���

	cout << a << b[4] << endl;   // �����

	//�� ��
	cout << a << b[2];
	for (j = 0; j < 43; j++)
		cout << "  ";
	cout << a << b[2] << endl; // | ���

	//���� ���� �۾� �ִ� ��
	cout << a << b[2];
	for (j = 0; j < 18; j++)
		cout << "  ";
	cout << "���� ���� ";

	for (j = 0; j < 19; j++)
		cout << "  ";
	cout << a << b[2] << endl;

	//����
	cout << a << b[2];
	for (j = 0; j < 43; j++)
		cout << "  ";
	cout << a << b[2] << endl;

	cout << a << b[6];   // �����
	for (i = 0; i < 86; i++)    //�� ���
		cout << a << b[1];
	cout << a << b[5] << endl;   // �����

//////////////////////////////////////////////////////////////////////////////
	cout << a << b[3];   //�� ���
	for (i = 0; i < 86; i++)
		cout << a << b[1];   // �� ���

	cout << a << b[4] << endl;   // �����

	for (i = 0; i < 25; i++) {
		//����
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