#include "StdAfx.h"
#include "Student.h"
#include "iostream"

using namespace std;

int Student::sum = 0;
Student::Student(int nScore)
{
	score = nScore;
	++sum;
}

Student::~Student(void)
{
}

Student operator+(const Student& s1, const Student& s2){
	Student student(-1);
	student.score = s1.score + s2.score;
	return student;
}

void Student::print(){
	cout<<"score="<<score<<" num="<<sum<<endl;
}

int Student::getScore()
{
	return score;
}
