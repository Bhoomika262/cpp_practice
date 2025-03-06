#include<iostream>

int main()
{
    int a,i;
    std::cout<<"Enter a number: ";
    std::cin>>a;
    for(i=1;i<=10;i++)
    {
       std::cout<<a<<"*"<<i<<"="<<a*i<<std::endl;
    }
}