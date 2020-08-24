//****Practice 3****//
//Prgram for calulating salary. let's suppose that a company offers salesman $50 and 12% of salesman earned through sales.
//For example, if A sells $100, the salary for a month should be 62 ($50+ $100 * 0.12 = $62)
//* Enter -1 when you quit
#include <iostream>
int main(void)
{
int mon;
int cal=0;
std::cout<<"How much did you sell? ";
std::cin>>mon;

//Calculation//
cal=50+(mon*0.12);
std::cout<<"salary for this money will be $"<<cal<<std::ends;
return 0;
}
