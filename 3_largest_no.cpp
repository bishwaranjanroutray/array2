// WAP to find the largest three elements in the array.

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
    int a,b,c;
    a=b=c=0;
    for(int i=0;i<n;i++){
        if(v[i]>a){
            c=b;
            b=a;
            a=v[i];
        }
        else if(v[i]>b){
            c=b;
            b=v[i];
        }
        else if(v[i]>c){
            c=v[i];
        }
    }
    cout<<a<<" "<<b<<" "<<c;

}