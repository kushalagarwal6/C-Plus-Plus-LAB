#include<iostream>
using namespace std;
class Student
{
	protected:
		int roll;
		char name[30];
	public:
		void getStudent()
		{
			cout<<"enter roll no";
			cin>>roll;
			cout<<"enter name:";
			cin>>name; 
		}
};
class Exam: public Student
{
	protected:
		int m1,m2,m3,m4,m5,m6;
	public:
		void getMarks()
		{
			cout<<"enter marks of 6 subjects:";
			cin>>m1>>m2>>m3>>m4>>m5>>m6;
		}
};
class Result: public Exam
{
	int total;
	public:
		void calculate()
		{
			total=m1+m2+m3+m4+m5+m6;
		}
		void display()
		{
			cout<<"\nROll No:"<<roll;
			cout<<"\nName:"<<name;
			cout<<"\nTotal Marks:"<<total<<endl;
		}
};
int main()
{
    Result r;
	r.getStudent();
	r.getMarks();
	r.calculate();
	r.display();
}
