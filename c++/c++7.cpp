#include<iostream>
int main()
{
    int i;
    for (i=1; i<10; i++)
    if(i%4==0) continue;
    std::cout<<i<<",";
    std::cout<<"end";

}
