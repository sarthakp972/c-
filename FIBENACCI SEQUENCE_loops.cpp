/******************************************************************************
FIBENACCI SEQUENCE
using loops
            
*******************************************************************************/

#include <iostream>
#include <cmath>



int main ()
{
  int b, a,n,c;
    std::cout << "FIBENACCI SEQUENCE\n ";
  std::cout << "enter the   number ";
  std::cin >> n;

        b=1;
        a=0;
         std::cout<<a<<"\n"<<b<<"\n";
  for (int i = 0; i < n-2; i++)
	{
	  c=a+b;
	  	  std::cout<<c<<"\n";
	  a=b; b=c;


	}
  return 0;
}
