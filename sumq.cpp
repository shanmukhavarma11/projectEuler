#include<iostream>
using namespace std;
#include<stdlib.h>
#include<math.h>
int main()
{
int n,i,k=0;
cout<<"enter last element"<<endl;
cin>>n;
for(i=1;i<=n;i++)
{
if(i%2==1||i%2==0.5)
{
k=pow(i,2)+k;
cout<<i<<"^2";
}
if(i%2==0 && i<n)
{
    cout<<"+";
}
}
cout<<endl<<k;
return 0;
}
