#include<iostream>
using namespace std;

int main()
{
    int arr[100];
   int n,count=0;
   int i, j,size;
     cout<<"Input the number of elements to be stored in the array :";
      cin>>n;
      cout<<"Input  elements in the array :"<<n;
      for(i=0;i<n;i++)
       {
              cout<<"element =: ";
              cin>>arr[i];
            }
           for(j=n-1;j>=0;j--){
            cout<<j;
           }
        return 0;    
}
