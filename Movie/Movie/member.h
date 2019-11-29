#pragma once

static int cnt=0, cnt2=0;

class member
{
public:
	member();
	member(int birth, int tel, int pw);


	void setArea(string area);
	void setTheater(string theater);
	void setMonth(int month);
	void setDate(int date);
	void setTitle(string name);
	void setHour(string hour);
	void setTicketCount(int teenager, int adult, int udae);
	void setTotalPrice(int price);
	void setSeat(char row);
	void setColnum(int col);
	void setP_Total(int p_total);

	string getArea();
	string getTheater();
	string getTitle();
	string getHour();
	char getSeat(int cnt);
	int getColnum(int cnt);
	int getTeenager();
	int getAdult();
	int getUdae();
	int getTotalPrice();
	int getP_Total();
	int getMonth();
	int getDate();
	int getBirth();
	int getTel();
	int getPw();

	virtual ~member();
private:
	int birth;
	int tel;
	int pw;

	string hour;
	int month;
	//미사용
	int date;

	/*
	int card_num;
	int expiry_date;
	int card_pw;
	int legal_birth;
	*/

	string area; //지역
	string theater; //극장

	string movie_name;

	char m_row[20];
	int m_col[20];

	int teenager, adult, udae;

	int p_total;
	int total_price;
	
};

