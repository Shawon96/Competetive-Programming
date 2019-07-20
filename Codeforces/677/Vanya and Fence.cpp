#include<iostream>
using namespace std;
int main(){
    int a,b,c[2000],max=0;
    cin>>a>>b;
for(int i=0;i<a;i++){
    cin>>c[i];
}
for(int i=0;i<a;i++){
        if(c[i]>b){
                max+=2;
        }
        else{
            max+=1;
        }
}
cout<<max;
return 0;
}
