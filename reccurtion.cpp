#include<iostream>
using namespace std;

int rec(int a,int b){
    if(a==1 || b==1){
        return 1;
    }
    return rec(a-1,b)+rec(a,b-1);
}

int main(){
    int a=3;
    int b=3;
    cout<<rec(a,b);
}