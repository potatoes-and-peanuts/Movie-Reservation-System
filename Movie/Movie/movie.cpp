#include <iostream>
#include <string>
using namespace std;
#include "movie.h"


movie::movie()
{
}

movie::movie(string title, string theater1, string theater2)
{
	m_title = title;
	m_theater1 = theater1;
	m_theater2 = theater2;
}

/*movie::movie(string theater1, string theater2, string hour)
{
	m_hour = hour;
	m_theater1 = theater1;
	m_theater2 = theater2;
}*/

string movie::getTheater1()
{
	return this->m_theater1;
}

string movie::getTitle()
{
	return this->m_title;
}


movie::~movie()
{
}
