/******************************************************************************

Binary search

*******************************************************************************/

#include <iostream>

int main()
{
    int n,key,left,right;
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
  left=0;
  right=n-1;
  int mid;
  while(left<=right){
      mid=(left+right)/2;
      
      if(arr[mid]==key){
           std::cout << "Element found at index " << mid << "\n";
           break;
      }
      else if(arr[mid]>key){
          right=mid-1;
      }
      else{
          left=mid+1;
      }
  }

    return 0;
}