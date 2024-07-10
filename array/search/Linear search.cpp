/******************************************************************************

Linear search

*******************************************************************************/

#include <iostream>

int main()
{
    int n,key;
    bool flag=false;
    std::cout<<"Number of elements";
     std::cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
       std::cin>>arr[i];
    }
      for(int i=0; i<n; i++){
     std::cout<<"index ["<<i<<"] ="<<arr[i];
     std::cout<<"\n";
    }
    
 std::cout<<"Enter key value";
 std::cin>>key;
     for(int i=0; i<n; i++){
    if(arr[i]==key){
         std::cout<<"Element is exist in this array \n"; 
         std::cout<<"index ["<<i<<"] ="<<arr[i];
       flag=true;
    }
     std::cout<<"\n";
    }
    if(flag==false){
         std::cout<<"Element is not exist in this array \n"; 
    }

    return 0;
}