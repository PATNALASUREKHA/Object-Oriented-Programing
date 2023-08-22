#include<iostream>
using namespace std;
//22A91A05F3
class Student{
	public:
		string name;
		string rollnumber;
		int marks;
		double per;
		Student(string n,string r,int m,double p)
		{
			this->name = n;
			this->rollnumber = r;
			this->marks = m;
			this->per = p;
		}
		void display();
		
};
void Student::display(){
	cout<<name<<" "<<rollnumber<<" ";
	cout<<marks<<" "<<per;
	cout<<endl;
}
int main()
{
	Student s1("Aruna","22A21",56,76.20);
	s1.display();
	Student s2("Padma","22A12",46,88.23);
	s2.display();
	return 0;
	
}
