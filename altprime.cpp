#include<iostream>
using namespace std;
int main()
{
int i,j,a=0,count,b=0,c=0;
for(i=2;i<=10000;i++)
{count=0;
for(j=1;j<=i;j++)
{
    if(i%j==0)
{
count++;
}}
if((count==2)&&(a==0))
{
   // cout<<i<<endl;
    a=1;
    b=i;
}
else if((count==2)&&(a==1))
{
    a=0;
    c=i;
    int s=c-b;
    if(s==1)
        {
            cout<<b<<"\t"<<c<<endl;
    }
}
}
return 0;
}


