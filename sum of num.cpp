#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a num";
    cin>>a;

int last=0;
while(a>0)
{
    int b = a%10;
    last+=b;
    a/=10;
}
cout<<"b"<<endl;
return 0;


}