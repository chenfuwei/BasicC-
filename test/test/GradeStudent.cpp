#include "StdAfx.h"
#include "GradeStudent.h"

GradeStudent::GradeStudent(int nValue) : Student(nValue + 1)
{
	value = nValue;
}

GradeStudent::~GradeStudent(void)
{
}

int GradeStudent::getValue(void)
{
	return value;
}

Student& GradeStudent::getStudent(){
	return static_cast<Student>(*this);
}

Student& GradeStudent::getStudent1(){
	return *static_cast<Student*>(this);
}
