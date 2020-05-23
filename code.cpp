#include<iostream>
#include<string.h>
using namespace std;
struct school{
	int roll_no;
	int marks;

};
struct detail{
	string name;
	string father_name;
	string mother_name;
	school sch;
};
int main()
{    system("color 0E");
	detail details;
	cout<<"Hello"<<"\nplease Enter given details";
	cout<<"\nName-:";
	cin>>details.name;
	cout<<"\nfather name:";
	cin>>details.father_name;
	cout<<"\n mother name:";
	cin>>details.mother_name;
	cout<<"\n roll no.:";
	cin>>details.sch.roll_no;
	cout<<"\n marks:";
	cin>>details.sch.marks;
	cout<<details.name<<endl<<details.father_name<<endl<<details.mother_name<<endl<<details.sch.roll_no<<endl<<details.sch.marks;	

}
