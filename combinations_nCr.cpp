/******************************************************************************
combinations :-nCr
using functions
            
*******************************************************************************/

#include <iostream>
#include <cmath>


int fact(int n){
    int sum=1;
    for(int i=1;i<=n;i++){
    
        sum=i*sum;    
    }
 
    return sum;

}

int main ()
{
  int n,r;
    std::cout << "factorial\n ";
  std::cout << "enter the  two number n and r ";
  std::cin >> n>>r;
int ans =(fact(n))/(fact(n-r) * fact(r));
std::cout<<ans;

       
  return 0;
}
