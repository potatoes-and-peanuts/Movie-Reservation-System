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

	string movie_name;

	/*
	int seat[9][13];

	char ShowRows[8];
	int ShowCols[14];

	char row[20];
	int col;

	int teenager, adult, udae;

	int p_total;
	*/
};

