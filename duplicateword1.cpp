#include<iostream>
using namespace std;
int main()
{
char a[100];
int i,j,k,l;
cout<<"enter your word"<<endl;
cin>>a;
int ks;
for(ks=0;a[ks]!='\0';ks++){}ks--;
for(i=0;a[i]!='\0';i++)
{
if((a[i]==a[i+1]))
{
k=i;l=i;
for(j=i;a[j]!='\0';j++)
{
if(a[j]!=a[j+1]){
j=j;
for(l=i;l<=ks;l++){
    a[l]=a[j+1];
    j++;
}
break;
}
}i--;
}
}
for(i=0;a[i]!='\0';i++){
    cout<<a[i];
}
return 0;
}

