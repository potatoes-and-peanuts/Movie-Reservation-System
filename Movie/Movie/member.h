#pragma once
class member
{
public:
	member();
	member(int birth, int tel, int pw);

<<<<<<< HEAD
=======
	void setArea(string area);
	string getArea();
	void setTheater(string theater);
	string getTheater();
	void setMonth(int month);
	void setDate(int date);
	void setTitle(string name);
	string getTitle();

	

>>>>>>> 4a4a6b6129ba76ab89f43c840c4de3679860bcc8
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

<<<<<<< HEAD
	/*
	int card_num;
	int expiry_date;
	int card_pw;
	int legal_birth;
	*/

=======
	string area; //����
	string theater; //����
>>>>>>> 4a4a6b6129ba76ab89f43c840c4de3679860bcc8
	string movie_name;

	
	int seat[9][13];

	char ShowRows[8];
	int ShowCols[14];

	char row[20];
	int col;

	int teenager, adult, udae;

	int p_total;
	
};

