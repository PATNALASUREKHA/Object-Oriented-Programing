#include<iostream>
using namespace std;
//22A91A05F3
class Rectangle{
	private:
		int length;
	public:
		int breadth;
		Rectangle(int l,int b)
		{
			this->length = l;
			this->breadth = b;
		}
		void display();
};
void Rectangle::display(){
	cout<<length*breadth<<endl;
}
int main()
{
	Rectangle r1(2,3);
	r1.display();
	return 0;
}
