

#include "student.h"
class GradeStudent :
	public Student
{
	int value;
public:
	GradeStudent(int);
	~GradeStudent(void);
public:
	int getValue();

	Student& getStudent();
	Student& getStudent1();
};
