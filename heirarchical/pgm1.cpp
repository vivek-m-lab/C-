#include<iostream>
using namespace std;
class A
{
	public:
		int x=10;
	public:
		void print()
		{
			cout<<"Class A"<<endl;
			cout<<"X= "<<x<<endl;
		}
};
class B:public A
{
	public:
		int y=3,s;
	public:
		void add()
		{
			x=100;
			s=x+y;
		}
		void print()
		{
			cout<<"Class B"<<endl;
			cout<<"X= "<<x<<endl;
			cout<<"sum= "<<s<<endl;
		}
};
class C:public A
{
	public:
		int z;
	public:
		void print()
		{
			cout<<"Class C"<<endl;
			cout<<"X= "<<x<<endl;
		}
};
class D:public A
{
	public:
		int y;
	public:
		void print()
		{
			cout<<"Class D"<<endl;
			cout<<"X= "<<x<<endl;
		}
};
int main()
{
	A a1;
	a1.print();
	B b1;
	b1.add();
	b1.print();
	C c1;
	c1.print();
	D d1;
	d1.print();
}
