#pragma once
class member
{
public:
	member();
	member(int birth, int tel, int pw);
<<<<<<< HEAD
	void setArea(string area);
	string getArea();
	void setTheater(string theater);
	string getTheater();
	void setMonth(int month);
	void setDate(int date);
=======

	
>>>>>>> 1f651d981dd5b11eec6d86a4ea614aee5bc550e3
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

	//미사용
	int date;

	string area; //지역
	string theater; //극장
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

