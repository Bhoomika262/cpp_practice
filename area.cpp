#include<iostream>
using namespace std;

int area(int,int);
float area(float);

int main()
{
    int l,b,A;
    float r,a;
    cout<<"Enter the length and breadth of rectangle: ";
    cin>>l>>b;
    A=area(l,b);
    cout<<"The area of rectangle is "<<A<<endl;
    cout<<"Enter the radius of circle: ";
    cin>>r;
    a=area(r);
    cout<<"The area of circle is "<<a;
}

int area(int x,int y)
{
    return (x*y);
}

float area(float z)
{
    return 3.14*z*z;
}