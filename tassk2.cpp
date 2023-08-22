#include<iostream>
using namespace std;
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
		void mod()
		{
			length = 5;
			breadth = 6;
		}
		int rectangle()
		{
			return length*breadth;
		}
};
int main()
{
	Rectangle r1(2,3);
	r1.mod();
	cout<<r1.rectangle();
	return 0;
}
