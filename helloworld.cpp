#include <iostream>
using namespace std;

void max_heap(int *a, int m, int n)
{ 
    int j,item;
    item=a[m];
    j=m*2;
    
    while(j<=n){
        if(j<n && a[j]<a[j+1]){
            j++;
        }
        if(item>=a[j]){
            break;
        }
        a[j/2]=a[j];
        j=2*j;
    }
    a[j/2]=item;
}



void build_maxheap(int *a, int n) {
   int k;
   for(k = n/2; k >= 1; k--) {
      max_heap(a,k,n);
   }
}


int main() {
   int n, i;
   cin>>n;
  
   int a[n];
   for (i = 1; i <= n; i++) {
     cin>>a[i];
   }
   build_maxheap(a, n);
   for (i = 1; i <= n; i++) {
      cout<<a[i]<<" ";
   }
}