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

	//�̻��
	int date;

	string area; //����
	string theater; //����
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

