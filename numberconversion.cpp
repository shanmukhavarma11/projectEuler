#include<iostream>
using namespace std;
int main()
{
char a[10];
int i,j=0,count=0;
cout<<" enter some number to convert decimal to human readable(<1000)"<<endl;
cout<<"number from above 200 are pending to get perfect output pls enter no less than 200 "<<endl;
cin>>a;
for(i=0;a[i]!='\0';i++)
{
    count++;j++;
    cout<<"hello"<<count<<endl;
}
//i--;
cout<<"length of given character is"<<count<<endl;
while(i>=0){if(count==0){break;}
if((count==1)){
if(a[i]=='0'){cout<<"";break;}
    else if(a[i]=='1'){cout<<"one";count--;}
    else if(a[i]=='2'){cout<<"two";count--;}
    else if(a[i]=='3'){cout<<"three";count--;}
    else if(a[i]=='4'){cout<<"four";count--;}
    else if(a[i]=='5'){cout<<"five";count--;}
    else if(a[i]=='6'){cout<<"six";count--;}
    else if(a[i]=='7'){cout<<"seven";count--;}
    else if(a[i]=='8'){cout<<"eight";count--;}
    else if(a[i]=='9'){cout<<"nine";count--;}
   // else if(a[i]=='10'){cout<<"ten";}
    i--;
}
if(count==2){i--;if(a[i]=='0' && a[i-1]=='0'){break;}
else if(a[i]=='0' && a[i-1]=='1' && j!=3 ){cout<<"ten";}
else if((a[i]=='0') && (a[i-1]=='1') && j==3 ){if(count==2 && a[i]=='1' && a[i+1]=='0' ){cout<<"ten";}count--;}
else if(a[i]=='1' && a[i-1]=='1' ){if(a[i]=='1' && a[i+1]=='1'){cout<<"eleven"<<endl;}else if(a[i]=='1' && a[i+1]=='0'){cout<<"ten";}}
else if(a[i]=='2' && a[i-1]=='1' && j!=3){cout<<"twelve"<<endl;}
else if(a[i]=='1' && a[i+2]=='2' && j==3){if(a[i+2]=='2'){cout<<"twelve";}}
else if(a[i]=='3' && a[i-1]=='1' && j!=3){cout<<"thrteen"<<endl;}
else if(a[i]=='1' && a[i+2]=='3' && j==3){cout<<"thrteen"<<endl;}
else if(a[i]=='4' && a[i-1]=='1' && j!=3){cout<<"fourtheen"<<endl;}
else if(a[i]=='1' && a[i+2]=='4' && j==3){cout<<"fourtheen"<<endl;}
else if(a[i]=='5' && a[i-1]=='1' && j!=3){cout<<"fifteen"<<endl;}
else if(a[i]=='1' && a[i+2]=='5' && j==3){cout<<"fifteen"<<endl;}
else if(a[i]=='6' && a[i-1]=='1' && j!=3){cout<<"sixteen"<<endl;}
else if(a[i]=='1' && a[i+2]=='6' && j==3){cout<<"sixteen"<<endl;}
else if(a[i]=='7' && a[i-1]=='1' && j!=3){cout<<"seventeen"<<endl;}
else if(a[i]=='1' && a[i+2]=='7' && j==3){cout<<"seventeen"<<endl;}
else if(a[i]=='8' && a[i-1]=='1' && j!=3){cout<<"eighteen"<<endl;}
else if(a[i]=='1' && a[i+2]=='8' && j==3){cout<<"eighteen"<<endl;}
else if(a[i]=='9' && a[i-1]=='1' && j!=3){cout<<"nineteen"<<endl;}
else if(a[i]=='1' && a[i+2]=='9' && j==3){cout<<"nineteen"<<endl;}
else if((a[i]=='0' && a[i-1]=='2' && j!=3)){cout<<"twenty";}
else if(a[i]>='1' && a[i-1]=='2' && j!=3){cout<<"twenty";count--;}
else if(a[i]=='2' && a[i+1]>='1' && j==3){cout<<"twenty";count--;}
else if((a[i]>='0' && a[i-1]=='9' && j!=3)){cout<<"ninthy";count--;}
else if((a[i]=='9' && a[i+1]>='0' && j==3)){cout<<"ninthy";count--;}
else if((a[i]>='0' && a[i-1]=='8' && j!=3)){cout<<"eighty";count--;}
else if((a[i]=='8' && a[i+1]>='0' && j==3)){cout<<"eighty";count--;}
else if((a[i]>='0' && a[i-1]=='7' && j!=3)){cout<<"seventy";count--;}
else if((a[i]=='7' && a[i-1]>='0' && j==3)){cout<<"seventy";count--;}
else if((a[i]>='0' && a[i-1]=='6' && j!=3)){cout<<"sixty";count--;}
else if((a[i]=='6' && a[i-1]>='0' && j==3)){cout<<"sixty";count--;}
else if((a[i]>='0' && a[i-1]=='5' && j!=3)){cout<<"fifty";count--;}
else if((a[i]=='5' && a[i+1]>='0' && j==3)){cout<<"fifty";count--;}
else if((a[i]>='0' && a[i-1]=='4' && j!=3)){cout<<"forty";count--;}
else if((a[i]=='4' && a[i+1]>='0' && j==3)){cout<<"forty";count--;}
else if((a[i]>='0' && a[i-1]=='3' && j!=3)){cout<<"thirty";count--;}
else if((a[i]=='3' && a[i+1]>='0' && j==3)){cout<<"thirty";count--;}
if(count==1){i++;}
}
if(count==3){
    i--;

       if((a[i]>='0') &&(a[i-1]>='0') && (a[i-2]=='1')){cout<<"one hundered and";count--;}
    else if(a[i]>='0' && a[i-1]>='0' && a[i-2]=='2'){cout<<"two hundered and";count--;}
    else if(a[i]>='0' && a[i-1]>='0' && a[i-2]=='3'){cout<<"three hundered and";count--;}
    else if(a[i]=='4'){cout<<"four hundered and";count--;}
    else if(a[i]=='5'){cout<<"five hundered and";count--;}
    else if(a[i]=='6'){cout<<"six hundered and";count--;}
    else if(a[i]=='7'){cout<<"seven hundered and";count--;}
    else if(a[i]=='8'){cout<<"eight hundered and";count--;}
    else if(a[i]=='9'){cout<<"nine hundered and";count--;}
   //if(a[j]=='0'){i++;}
}
}
}

