#include<iostream>
#include<iomanip>
using namespace std;
class student
{
public:
char name[20];
};
//////////////////////////////////////////////////
class sub:public student
{
public:
int chem,maths,phy;
};
////////////////////////////////////////////////////
class sports
{
public:
int mark;
};
////////////////////////////////////////////////////
class KTU:public sub,public sports
{
public:
int tot,avg;
public:
void total()
{
tot=chem+phy+maths+mark;
}
void setdata()
{
cout<<"Enter the name "<<endl;
cin.getline(name,20);
cout<<"Enter the chemistry mark "<<endl;
cin>>chem;
cout<<"Enter the physics mark"<<endl;
cin>>phy;
cout<<"Enter the maths mark"<<endl;
cin>>maths;
cout<<"Enter the mark in sports"<<endl;
cin>>mark;
}
void print()
{
cout<<"--------------------------------------"<<endl;
cout<<"|"<<setw(15)<<left<<"student Name"<<":"<<setw(20)<<left<<name<<"|"<<endl;
cout<<"|--------------MARK------------------|"<<endl;
cout<<"|"<<setw(15)<<left<<"PHYSICS"<<":"<<setw(20)<<left<<phy<<"|"<<endl;
cout<<"|"<<setw(15)<<left<<"CHEMISTRY"<<":"<<setw(20)<<left<<chem<<"|"<<endl;
cout<<"|"<<setw(15)<<left<<"MATHS"<<":"<<setw(20)<<left<<maths<<"|"<<endl;
cout<<"|"<<setw(15)<<left<<"SPORTS"<<":"<<setw(20)<<left<<mark<<"|"<<endl;
cout<<"|"<<setw(15)<<left<<"TOTAL MARKS"<<":"<<setw(20)<<left<<tot<<"|"<<endl;
cout<<"--------------------------------------"<<endl;
}
};
int main()
{
student s1;
sub s2;
sports s3;
KTU s4;
s4.setdata();
s4.total();
s4.print();
}

