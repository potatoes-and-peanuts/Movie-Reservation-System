#pragma once
class member
{
public:
	member();
	member(int birth, int tel, int pw);

	int getBirth();
	int getTel();
	int getPw();

	virtual ~member();
private:
	int birth;
	int tel;
	int pw;

	int hour;
	int month;
	//¹Ì»ç¿ë
	int date;

	/*
	int card_num;
	int expiry_date;
	int card_pw;
	int legal_birth;
	*/

	string movie_name;

	
	int seat[9][13];

	char ShowRows[8];
	int ShowCols[14];

	char row[20];
	int col;

	int teenager, adult, udae;

	int p_total;
	
};

