#pragma once

static int cnt=0, cnt2=0;

class member
{
public:
	member();
	member(string birth, string tel, string pw);


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
	string getBirth();
	string getTel();
	string getPw();

	virtual ~member();
private:
	string birth;
	string tel;
	string pw;

	string hour;
	int month;
	int date;

	string area; //Áö¿ª
	string theater; //±ØÀå

	string movie_name;

	char m_row[20];
	int m_col[20];

	int teenager, adult, udae;

	int p_total;
	int total_price;
	
};

