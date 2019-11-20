#pragma once
class movie {
public:
	movie();
<<<<<<< HEAD
	movie(string title, string theater1, string theater2);
	movie(string theater1, string theater2, string hour);
=======
	movie(string title,string theater1, string theater2);
	//movie(string theater1, string theater2,string hour);
>>>>>>> 3a985fd67e939ecec138f5e1507d9afdc722fe62
	string getTheater1();
	string getTitle();
	virtual ~movie();
private:
	string m_title;
	string m_hour;
	string m_theater1;
	string m_theater2;
};

