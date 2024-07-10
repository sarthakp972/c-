
/*Conditional Statement , Programming Exercises:-

4. Write a C program to find whether a given year is a leap year or not.
Test Data : 2016
Expected Output : 2016 is a leap year.

*/

#include <iostream>

int
main ()
{
  int a, b;

  std::cout << "Enter the a number";
  std::cin >> a;

 
  if ((a%400)==0)
	{
	  std::cout <<a<<"is a leap year";
	}
  else if(a%100==0)
	{
	  std::cout <<a<<" is not  a leap year ";
	}
	else if(a%4==0){
	    	  std::cout <<a<<"is a leap year";
	}
	else{
	   std::cout <<a<<" is not  a leap year "; 
	}

  return 0;
}
