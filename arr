#include <iostream>
using namespace std;
int main()
{

   int arr[4]={2,4,5,6};
   int val=0;
   for(int i=0;i<4;i++){
       val = val+arr[i];
   }
   cout<<val/4;

    return 0;
}
