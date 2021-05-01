
#include <iostream>
#include <conio.h>
using namespace std;

class rectangle
{
	private:
		int a,b;
	public:
		void setdata (int x, int y)
		{
			a=x;
			b=y;
		}
		void area()
		{
			int ar=a*b;
			cout<<"\nArea of rectangle = "<<ar;
		}
		void perimeter()
		{
			int pm=2*(a+b);
			cout<<"\nArea of rectangle = "<<pm;
		}
};
int main()
{
	
	rectangle r1, r2; 
	
	r1.setdata(5,10); 
	r1.area();
	r1.perimeter();
	getch();
	return 0;
}
