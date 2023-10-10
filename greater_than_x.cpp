// Count the number of elements strictly greater than x.

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
    cout<<endl;
    cout<<"enter the element:";
    int s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(v[i]>s) {
            cout<<v[i];
            cout<<" ";
        }
    }
}