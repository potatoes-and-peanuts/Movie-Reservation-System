#pragma once
class movie
{
public:
	movie();

	movie(string title,string theater1, string theater2, string hour);
	//movie(string theater1, string theater2,string hour);

	string getTheater1();
	string getTheater2();
	string getTitle();
	string getHour();
	virtual ~movie();
private:
	string m_title;
	string m_hour;
	string m_theater1;
	string m_theater2;
	
};

