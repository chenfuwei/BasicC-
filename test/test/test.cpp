// test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#include "Student.h"
#include "common.h"
#include "GradeStudent.h"

using namespace std;

typedef void (*FN)(int) ;  //函数指针类型


int* testIntPointer(int&); //指针函数
void testFn(int);  //函数声明，参数为Int
void testFN(FN);   //函数声明，类型为FN类型函数指针

Student test1();  //返回值类型
Student& test2(); //返回引用类型


int _tmain(int argc, _TCHAR* argv[])
{
	cout << "kkkk"<<endl;

	Student s1(10);
	Student s2(20);

	Student d = s1 + s2;
	d.print();


	Teacher teacher;
	teacher.age = 100;

	cout<<"teacher age = "<<teacher.age<<endl;

	DATA value = TWO;

	cout<<"DATA value = "<<value<<endl;

	testFN(testFn);

	int b = -2;
	int *pointer = testIntPointer(b);
	cout<<"pointer value = "<<(*pointer)<<" address="<<pointer<<endl;

	Student& test = test1();
	cout<<"kk test1="<<&test<<" score = "<<test.getScore()<<endl;

	Student& testa = test2();
	cout<<"kk test2="<<&testa<<" score = "<<testa.getScore()<<endl;

	GradeStudent gs(3000);
	cout<<"kk gs="<<gs.getValue()<<" score = "<<gs.getScore()<<endl;

	//Student* s = &gs;
	//cout<<"kk s="<<s->getValue()<<" score = "<<s->getScore()<<endl;//getValue 不是student的成员

	Student* s = static_cast<Student*>(&gs);
	cout<<"kk s="<<s<<" score = "<<&gs<<endl;

	Student& ss = gs.getStudent();
	Student& ss1 = gs.getStudent1();

	cout<<"kk ss="<<&ss<<" ss1 = "<<&ss1<<" gs = "<<&gs<<endl;
	
	return 0;
}

void testFn(int a)
{
	cout<<"testFn a = "<<a<<endl;
}

void testFN(FN fn)
{
	fn(10000);
}

int* testIntPointer(int& a)
{
	cout<<"testIntPointer address = "<<&a<<endl;
	return reinterpret_cast<int*>(&a);
}


Student test1(){
	//返回临时变量，函数返回时会重新生成一个临时变量
	Student student(1);
	cout<<"test1 address = "<<&student<<endl;
	return student;
}

Student& test2(){
	//返回临时变量的引用，临时变量再函数返回时，就失效了，取出的值是非法的
	Student student(2);
	cout<<"test2 address = "<<&student<<endl;
	return student;
}




