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
	void setTitle(string name);
	string getTitle();

	

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

