#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,3,4,5,7};
    int n=7;
    int x=0;
    for(int i=0;i<n-1;i++){
        x=x^a[i];
        x=x^i+1;
    }
    x=x^n;
    cout<<x;
}
