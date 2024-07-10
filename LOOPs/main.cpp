
/*Conditional Statement , Programming Exercises:-

 Write a C program to calculate the root of a quadratic equation.
Test Data : 1 5 7
Expected Output :
Root are imaginary;
No solution.

*/

//prime number or not

#include <iostream>


int
main ()
{
 int i,n;
 std::cout<<"enter the number ";
 std::cin>>n;
 for(i=2;i<n;i++){
     
     if(n%i==0){
          std::cout<<" The number is not prime";
          break;
     }
 }
  if(n==i){
        std::cout<<" The number is prime";
  }
	

  return 0;
}
