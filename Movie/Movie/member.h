#pragma once
class member
{
public:
	member();
	member(int birth, int tel, int pw);
	void setArea(string area);
	string getArea();
	void setTheater(string theater);
	string getTheater();
	void setMonth(int month);
	void setDate(int date);
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
	int date;

	string area; //Áö¿ª
	string theater; //±ØÀå
	string movie_name;
	string seat[20];
	int age;

};

