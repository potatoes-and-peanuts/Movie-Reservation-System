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
	string movie_name;
	string hour;
	string month;
	string date;
	string seat[20];
	int age;

};

