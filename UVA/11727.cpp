#include<iostream>
using namespace std;

int a[15];
int b[15];
int c[15];

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    for(int i=1;i<=n;i++){
        if((b[i]<a[i]&&a[i]<c[i])||(b[i]>a[i]&&a[i]>c[i])){
            cout<<"Case "<<i<<":"<<a[i]<<endl;
        }

        else if((a[i]<b[i]&&b[i]<c[i])||(a[i]>b[i]&&b[i]>c[i])){
            cout<<"Case "<<i<<":"<<b[i]<<endl;
        }

        else if((b[i]<c[i]&&c[i]<a[i])||(b[i]>c[i]&&c[i]>a[i])){
            cout<<"Case "<<i<<":"<<c[i]<<endl;
        }

    }
  return 0;
}
