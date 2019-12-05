#include <iostream>
#include <string>
using namespace std;
#include "movie.h"

movie::movie()
{
}

movie::movie(string title, string theater1, string theater2, string hour)
{
	m_title = title;
	m_theater1 = theater1;
	m_theater2 = theater2;
	m_hour = hour;
}

string movie::getTheater1()
{
	return this->m_theater1;
}

string movie::getTheater2()
{
	return this->m_theater2;
}

string movie::getTitle()
{
	return this->m_title;
}

string movie::getHour()
{
	return this->m_hour;
}

movie::~movie()
{
}