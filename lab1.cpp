//wap to duplicate ele in __ARRAY_OPERATOR
#include<iostream>
using namespace std;

int main()
{
    int arr[100];
   int n,count=0;
   int i, j;
     cout<<"Input the number of elements to be stored in the array :";
      cin>>n;
      cout<<"Input  elements in the array :"<<n;
      for(i=0;i<n;i++)
       {
              cout<<"element =: ";
              cin>>arr[i];
            }
          for (i = 0; i < n; i++) {
      for (j = i+1 ; j < n; j++) {
        cout<<"duplicate elements are\n"<<j; 
       if (arr[i] == arr[j]) {
         count++;
         break;
   }

   }
 }
 cout<<"Total number of duplicate elements found in the array: "<<count;
 return 0;
}