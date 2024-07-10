/******************************************************************************
factorial
using functions
            
*******************************************************************************/

#include <iostream>
#include <cmath>


int fact(int n){
    int sum=1;
    for(int i=1;i<=n;i++){
    
        sum=i*sum;    
    }
    std::cout<<sum;
    return 0;

}

int main ()
{
  int n,c;
    std::cout << "factorial\n ";
  std::cout << "enter the   number ";
  std::cin >> n;
fact(n);

       
  return 0;
}
