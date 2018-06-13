#pragma once

class Student
{
	static int sum;
	int score;
public:
	Student(int);
	~Student(void);

	void print();
	friend Student operator+(const Student& s1, const Student& s2);
	int getScore();
};
