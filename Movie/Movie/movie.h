#pragma once
class movie
{
public:
	movie();

	movie(string title,string theater1, string theater2);
	//movie(string theater1, string theater2,string hour);

	string getTheater1();
	string getTitle();
	virtual ~movie();
private:
	string m_title;
	string m_hour;
	string m_theater1;
	string m_theater2;
};

