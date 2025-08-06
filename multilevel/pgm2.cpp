#include<iostream>
using namespace std;
class A
{
	public:
		int x;
	protected:
		int y;
	private:
		int z;
	public:
		void setdata()
		{
			cout<<"Enter the numbers x,y,z"<<endl;
			cin>>x>>y>>z;
		}
	protected:
		void print()
		{
			cout<<"x= "<<x<<endl;
			cout<<"y= "<<y<<endl;
			cout<<"z= "<<z<<endl;
		}
		friend int main();//because of print is protected we use main as friend function
				  //to call the print function in main function
};
class B:public A
{

};
int main()
{
B d1;
d1.setdata();
d1.print();

}
