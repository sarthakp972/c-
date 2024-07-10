/******************************************************************************
sum of n natural numbers 
*******************************************************************************/

#include <iostream>
#include <cmath>




int main ()
{
  int ans,n;
    std::cout << "sum of n natural numbers \n ";
  std::cout << "enter the  two number n ";
  std::cin >>n;
ans=0;
for(int i=0; i<=n;i++){
    
    ans=i+ans;
    std::cout<<ans<<"\n";
}


       
  return 0;
}
