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
int y;
};
class C:public A
{
public:
int z;
};
class D:public B,public C
{
public:
int m;
public:
void print()
{
//cout<<"x= "<<x<<endl;  //ambiguous error
//cout<<"A::x = "<<A::x<<endl;  //ambiguous error because D is not inheriting A
cout<<"B::x = "<<B::x<<endl;
cout<<"C::x = "<<C::x<<endl;
}
};
int main()
{
D d1;
d1.print();
}
