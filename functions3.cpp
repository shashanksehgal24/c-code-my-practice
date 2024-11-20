#include<iostream>
using namespace std;

int add(int a , int b)
{
   
    int sum;
    sum=a+b;
    return sum;
}
int sub(int a , int b,int c)
{
    int subb;
    subb=a-b-c;
    return subb;
}
int multi(float j,float i)
{
    int mul;
    mul=i*j;
    return mul;
}

int main()
{
    int a,b,c;
    float i,j;
    cout<<"enter a , b ,c ,i ,j";
    cin>>a>>b>>c;
    cin>>i>>j;
    cout<<add(a,b);
    cout<<"\n";
    cout<<sub(a,b,c);
        cout<<"\n";
        cout<<multi(i,j);
    return 0;
}

