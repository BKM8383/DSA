#include<iostream>
using namespace std;

int main(){
    int a[]={3,5,7,8,32,1,3,6,8};
    int n=9;
    //bubble sort
    // for (int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(a[i]>a[j]){
    //             swap(a[i],a[j]);
    //         }
    //     }
    // }

    //selection sort
    // for(int i=0;i<n;i++){
    //     int max=INT32_MAX;
    //     for(int j=i;j<n;j++){
    //         if(a[j]<a[max]){
    //             max=j;
    //         }
    //     }
    //     swap(a[i],a[max]);
    // }


    //merge 2  sorted array
    // int a[]={1,2,3,5,7,9,32};
    // int b[]={4,6,45,322,444};
    // int i=0,j=0,k=0;
    // int c[12];
    // while(i<7 && j<5){
    //     if(a[i]<=b[j]){
    //         c[k]=a[i];
    //         i++;
    //         k++;
    //     }
    //     else{
    //         c[k]=b[j];
    //         j++;
    //         k++;
    //     }
    // }

    // while(i<7){
    //     c[k]=a[i];
    //     i++;
    //     k++;
    // }
    // while(j<5){
    //     c[k]=b[j];
    //     j++;
    //     k++;
    // }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}