// test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
#include "Student.h"
#include "common.h"

using namespace std;

typedef void (*FN)(int) ;  //����ָ������


int* testIntPointer(int&); //ָ�뺯��
void testFn(int);  //��������������ΪInt
void testFN(FN);   //��������������ΪFN���ͺ���ָ��

Student test1();  //����ֵ����
Student& test2(); //������������


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
	//������ʱ��������������ʱ����������һ����ʱ����
	Student student(1);
	cout<<"test1 address = "<<&student<<endl;
	return student;
}

Student& test2(){
	//������ʱ���������ã���ʱ�����ٺ�������ʱ����ʧЧ�ˣ�ȡ����ֵ�ǷǷ���
	Student student(2);
	cout<<"test2 address = "<<&student<<endl;
	return student;
}




