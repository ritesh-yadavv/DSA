#include <iostream>
#include<limits.h>
using namespace std;


int main(){
	 int arr[5] = {2,4,6,8,10};
   int target = 11;
   int n = 5;

   bool flag = 0;
//    0 -> not found;
//   1 -> found
  
   for(int i=0; i<n; i++) {
    if(arr[i] == target) {
      //found
      flag = 1;
      break;
    }
   }

   if(flag == 1) {
    cout << "target found";
   }
   else {
    cout << "target not found" << endl;
   }
  
    
  return 0;
}
