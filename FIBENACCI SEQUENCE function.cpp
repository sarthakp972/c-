/******************************************************************************
FIBENACCI SEQUENCE
using functions
            
*******************************************************************************/

#include <iostream>
#include <cmath>

int fibbo(int n){
        int  b=1;
        int a=0;
         std::cout<<a<<"\n"<<b<<"\n";
  for (int i = 0; i < n-2; i++)
	{
	 int c=a+b;
	  	  std::cout<<c<<"\n";
	  a=b; b=c;


	}
	return 0;
}



int main ()
{
  int n,c;
    std::cout << "FIBENACCI SEQUENCE\n ";
  std::cout << "enter the   number ";
  std::cin >> n;
  fibbo(n);

       
  return 0;
}
