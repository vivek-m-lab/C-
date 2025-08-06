#include<iostream>
using namespace std;
class A
{
public:
int x=10;
};
class B:virtual public A
{
public:
int y;
};
class C:virtual public A
{public:
int z;
};
class D:public B,public C
{
public:
int m;
public:
void print()
{
cout<<"X= "<<x<<endl;
}
};
int main()
{
D d1;
d1.print();
}
