// Find the difference between the sum of elements at even indices to the sum of elements at odd
// indices.

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
    int o=0,e=0;
    for(int i=0;i<n;i++){
        if(i%2==0) e+=v[i];
        else o+=v[i];
    }
    cout<<"difference="<<e-o;
}