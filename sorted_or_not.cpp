#include<iostream>
using namespace std;

int main(){
    cout<<"how many elements you want to enter:"<<endl;
    int n;
    cin>>n;
    cout<<"enter the elements:";
    int v[n];
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        v[i]=j;
    }
    int f=1;
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            cout<<"NO it is not sorted";
            f=0;
            break;
        }
    }
    if(f==1) cout<<"YES it is sorted";
}