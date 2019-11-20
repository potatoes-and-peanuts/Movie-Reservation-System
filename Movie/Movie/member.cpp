#include <iostream>
#include <string>
using namespace std;
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
