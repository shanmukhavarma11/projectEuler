#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
long n,small,count,big,i,m;
for(i=837799;i<=837799;i++)
{
    count=0;
n=i;
while(1)
{
if(n%2==0)
{
 n=n/2;
 count++;
}
else if(n%2==1){
n=3*n+1;
count++;//cout<<"n"<<n<<endl;
}
if(n==1){
        cout<<count;
        exit(0);
}
}
}
return 0;
}
