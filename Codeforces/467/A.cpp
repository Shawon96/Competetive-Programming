#include<iostream>
using namespace std;
int main(){
int n,a[100],b[100],max1=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i]>>b[i];
}
for(int i=0;i<n;i++){
    if((a[i]+1)<b[i]){
        max1+=1;
    }
}
cout<<max1;
return 0;
}
