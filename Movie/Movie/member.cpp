#include "main.h"
#include "member.h"

member::member()
{
}

member::member(string birth, string tel, string pw)
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

void member::setHour(string hour)
{
	this->hour = hour;
}

void member::setTicketCount(int teenager, int adult, int udae)
{
	this->teenager = teenager;
	this->adult = adult;
	this->udae = udae;
}

void member::setTotalPrice(int price)
{
	this->total_price = price;
}

void member::setSeat(char seat)
{
	this->m_row[cnt] = seat;
	cnt++;
}

void member::setColnum(int col)
{
	this->m_col[cnt2] = col;
	cnt2++;
}

void member::setP_Total(int p_total)
{
	this->p_total = p_total;
}

string member::getTitle()
{
	return this->movie_name;
}

string member::getHour()
{
	return this->hour;
}

char member::getSeat(int cnt)
{	
	return this->m_row[cnt];
}

int member::getColnum(int cnt)
{
	return this->m_col[cnt];
}

int member::getTeenager()
{
	return this->teenager;
}

int member::getAdult()
{
	return this->adult;
}

int member::getUdae()
{
	return this->udae;
}

int member::getTotalPrice()
{
	return this->total_price;
}

int member::getP_Total()
{
	return this->p_total;
}

int member::getMonth()
{
	return this->month;
}

int member::getDate()
{
	return this->date;
}

string member::getBirth()
{
	return this->birth;
}

string member::getTel()
{
	return this->tel;
}

string member::getPw()
{
	return this->pw;
}


member::~member()
{
}
