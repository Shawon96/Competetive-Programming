#include<iostream>
using namespace std;
int main(){
int L,b,max1=0,max2=0;
cin>>L>>b;
for(int i=0;i<10;i++){
    if(L<=b){
        L+=3*L;
        b+=2*b;
        max1+=1;
    }
    else if(b<L){
        break;
    }
  }
  cout<<max1;
return 0;
}
