/******************************************************************************

 inverted pattern
 1234
 123
 12
 1

*******************************************************************************/

#include <iostream>

int
main ()
{
  int c,n, i, j;
  std::cout << "enter the number of row";
  std::cin >> n;
  //std::cout << "enter the number of coloum";
  //std::cin >> x2;

for(i=0; i<n;i++){
    c=1;
    for(j=i;j<n;j++){
         std::cout <<c;
         c++;
    }
      std::cout << "\n";
}
  return 0;
}
