//****Program about multiplecation table****//

#include <iostream>
int main(void)
{

int num;
std::cout<<"Enter the specific number for multiplication table ";
std::cin>>num;

for(int i=0;i<10;i++)
std::cout<<num<<" X "<<i<<"= "<<num*i<<std::endl;
return 0;
}