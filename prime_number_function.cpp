/******************************************************************************
prime number with range and using function
            
*******************************************************************************/

#include <iostream>
#include <cmath>

bool isprime (int num)
{
for(int i=2;i<=sqrt(num); i++){
    if(num%i==0){
        return false;
    }
}
return true;

}

int
main ()
{
  int n, m;
  std::cout << "enter the two  number";
  std::cin >> n >> m;

  for (int i = n; i <= m; i++)
	{
	  if (isprime (i))
		{
		  std::cout <<"prime number :- "<< i << "\n";
		}

	}
  return 0;
}
