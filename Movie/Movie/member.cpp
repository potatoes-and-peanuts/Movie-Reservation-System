#include "main.h"
#include "member.h"

member::member()
{
}

member::member(int birth, int tel, int pw)
{
	this->birth = birth;
	this->tel = tel;
	this->pw = pw;
}

void member::setArea(string area)
{
	this->area = area;
}

string member::getArea()
{
	return this->area;
}

void member::setTheater(string theater)
{
	this->theater = theater;
}

string member::getTheater()
{
	return this->theater;
}

void member::setMonth(int month)
{
	this->month = month;
}

void member::setDate(int date)
{
	this->date = date;
}

void member::setTitle(string name)
{
	this->movie_name = name;
}

string member::getTitle()
{
	return this->movie_name;
}

int member::getBirth()
{
	return this->birth;
}

int member::getTel()
{
	return this->tel;
}

int member::getPw()
{
	return this->pw;
}


member::~member()
{
}
