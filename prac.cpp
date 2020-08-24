//****1 Practice****//

//Sum the numbers between two integers//

#include <iostream>
int main(void)
{
//Create num integer variable
int num;
std::cout<<"Enter first integer ";
std::cin>>num;

//Create num2 integer variable
int num2;
std::cout<<"Enter second integer";
std::cin>>num2;

//Create result integer variable
int result=0;

//Use if statement with for loop in order to find the numbers between two integers
if(num<num2)
{
    for(int i=num+1; i<num2; i++)
result+=i;
}
else
{
    for(int i=num2+1; i<num; i++)
    result+=i;
}

std::cout<<"The sum of between two integers are:  "<<result;
return 0;
}