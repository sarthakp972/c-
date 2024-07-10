/******************************************************************************
check pythagorean triples 
only for c is big
*******************************************************************************/

#include <iostream>
#include <cmath>




int main ()
{
  int a, b, c;
  std::cout << "check pythagorean triples \n ";
  std::cout << "enter the  3 numbers ";
  std::cin >> a >> b >> c;

  if(c > a && c > b)
	{
	  int sum = c * c;

	  if (sum == ((a * a) + (b * b)))
		  {
		  std::cout << "it is pythagorean triples  ";
		      
		  }
		  else
		  {
		  std::cout << "it is not pythagorean triples  ";
		  }
}



		  return 0;
}
