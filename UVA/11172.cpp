#include<iostream>
using namespace std;

int a[15];
int b[15];

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
     for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            cout<<">"<<endl;
        }
        else if(a[i]<b[i]){
            cout<<"<"<<endl;
        }
        else if(a[i]==b[i]){
            cout<<"="<<endl;
        }
    }
return 0;
}
