#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
//Учебная программа
int main()
{
	setlocale(LC_ALL, "rus");
	int a,b,x,y,v;
	cout<<"Enter number a:\n";
	cin>>a;
	cout<<"Enter number b:\n";
	cin>>b;
	x=a+b;
	cout<<"a+b="<<x<<"\n";
	y=a-b;
	cout<<"a-b=\n"<<y<<"\n";
	v=a/b;
	cout<<"a/b=\n"<<v<<"\n";
	return 0;
}