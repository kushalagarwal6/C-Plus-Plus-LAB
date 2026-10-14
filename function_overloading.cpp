#include<iostream>
using namespace std;
class shape
{
	public:
		void AREA(float r)
		{
			cout<<"Area of circle="<<3.14*r*r<<endl;
			
		}
		void AREA(float l,float b)
		{
			cout<<"area of rectangle="<<1*b<<endl;
		}
		void AREA(float base,float height, int x)
		{
			cout<<"area of triangle="<<0.5*base*height<<endl;
		}
};
int main()
{
	float r,l,b,base,height;
	cout<<"enter the radius of circle";
	cin>>r;
	cout<<"enter length and breadth of rectangle";
	cin>>l>>b;
	cout<<"enter the base and height of triangle";
	cin>>base>>height;
	shape s;
	s.AREA(r);
	s.AREA(l,b);
	s.AREA(base,height,1);
	
	return 0;
}


