#include "main.h"
#include "movie.h"

int CtheaterObject() {
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
		for (int j=0; j < 25; j++) {
			if (j % 5 == 0&&j!=0) {
				cnt++;
			}
			blackmoney[i][j] = new movie(local1[i], local2[i][cnt]);
		}
	}
	//movie(string month, string day, string hour, string theater1, string theater2);
	//movie(string theater1, string theater2);
}