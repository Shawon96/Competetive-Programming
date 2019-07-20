#include<iostream>
using namespace std;
int main(){
int n,Anton=0,Danik=0;
char b[100002];
cin>>n;
for (int i=0;i<n;i++){
    cin>>b[i];
}
for (int i=0;i<n;i++){
        if(b[i]=='A'||b[i]=='a'){
            Anton+=1;
        }
        else if(b[i]=='D'||b[i]=='d'){
            Danik+=1;
        }
}
if(Anton>Danik){
    cout<<"Anton";
}
else if(Anton<Danik){
    cout<<"Danik";
}
else if(Anton==Danik){
    cout<<"Friendship";
}
return 0;
}