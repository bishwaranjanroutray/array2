// Given an array of integers, change the value of all odd indexed elements to its second multiple
// and increment all even indexed values by 10.

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
    for(int i=0;i<n;i++){
        if(i%2==0) v[i]+=10;
        else v[i]*=2;
    }
    for(int i=0;i<n;i++){
       cout<<v[i]<<" ";
    }
}