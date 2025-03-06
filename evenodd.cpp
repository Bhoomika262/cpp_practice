#include<iostream>

int main()
{
    int a;
    std::cout<<"Enter a number: ";
    std::cin>>a;
    if(a==0)
    {
        std::cout<<"0 is neither odd nor even";
    }
    else if(a%2==0)
    {
        std::cout<<"This number is even";
    }
    else
    {
        std::cout<<"This number is odd";
    }
}