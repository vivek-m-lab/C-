#include<iostream>
using namespace std;
class supermarket
{
	public:
		char name[20],item[20];
		int price;
};
class discount
{
	public:
		int discount;
};
class gst
{
	public:
		int cs,ss;
};
class coustomer:public supermarket,public discount,public gst
{
	public:
		int tot;
	public:
		void setdata()
		{
			cout<<"--------------------------------------"<<endl;
			cout<<"---------------D-MART-----------------"<<endl;
			cout<<"Enter the Name of coustomer :"<<endl;
			cin.getline(name,20);
			cout<<"Enter the Item :"<<endl;
			cin.getline(item,20);
			cout<<"Enter the Price of the item "<<endl;
			cin>>price;
			cout<<"Discount for the Item :"<<endl;
			cin>>discount;
			cout<<"GST of State :"<<endl;
			cin>>ss;
			cout<<"GST of Central :"<<endl;
			cin>>cs;
			cout<<"--------------------------------------"<<endl;

		}
		void total()
		{
			 tot=price+cs+ss-discount;
		}
		void print()
		{
			cout<<"-------------------------------------"<<endl;
			cout<<"~~~~~~~~~~~~~~D-MART~~~~~~~~~~~~~~~~~"<<endl;
			cout<<" NAME         :"<<name<<endl;
			cout<<" ITEM         :"<<item<<endl;
			cout<<" PRICE        :"<<price<<endl;
			cout<<" Central GST  :"<<cs<<endl;
			cout<<" State   GST  :"<<ss<<endl;
			cout<<" Discount     :"<<discount<<endl;
			cout<<" Total Amount :"<<tot<<endl;
			cout<<"~~~~~~~THANK YOU FOR SHOPPING~~~~~~~~"<<endl;
		}
};
int main()
{
coustomer c1;
supermarket s1;
discount d1;
gst g1;
c1.setdata();
c1.total();
c1.print();


}
