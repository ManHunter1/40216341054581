#include<iostream>
int main()
{
    int i; for(i=1; i<10; i++)
    std::cout<<"*"<<std::endl;
    if(i%5==0) break;
    std::cout<<"end";
}
