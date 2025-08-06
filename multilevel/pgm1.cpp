#include<iostream>
using namespace std;
class A
{
	public:
		int x=10;
};
class B:public A
{
	public:
		int y=20;
};
class C:public B
{
	public:
		int z=30;
	public:
		void print()
		{
			cout<<"x= "<<x<<endl;
			cout<<"y= "<<y<<endl;
			cout<<"z= "<<z<<endl;
		}
};
int main()
{
	A b1;
	B d1;
	C d2;
	d1.x=40;
	d1.y=50;
	d2.z=60;
	d2.print();
}

