#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main(){
	int x=30,y=20;
	cout<<gcd(x,y);
}
