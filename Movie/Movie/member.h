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
	int date;

	string movie_name;
	string seat[20];
	int age;

};

