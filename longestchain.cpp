#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
long n,count,big,i,m;
for(i=1;i<=900000;i++)
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
        if(i==900000)
            {
                cout<<"big value is"<<m;
                exit(0);
            }
            else if(i==1){
                    big=count;
            }
            else
            {
                   if(count>big){
                        big=count;
                        m=i;cout<<m<<endl;
                    }

            }
            break;
}
}
}
return 0;
}
