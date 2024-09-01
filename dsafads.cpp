// // create node for binary tree
// Node* create(int data){
//     Node* newnode=new Node;
//     node->left=nullptr;
//     node->right=nullptr;
//     return newnode;
// }

// //insert node in binary tree
// Node* insert(Node* root,int data){
//     if (root==nullptr)
//         return create(data);
//     else if(data<=root->data)
//         root->left=insert(root->left,data);
//     else
//         root->right=insert(root->right,data);
//     return root;
// }

// //order(pre=first cout,in=btw cout,post=last cout ,just change the position of cout )
// void print(Node* temp){
//     if (temp==nullptr)
//         return ;
//     cout<<temp->data;
//     print(temp->left);
//     print(temp->right);
// }

// //merger sort

// void mergesort(int a[],int l,int r){
//     if (l<r)
//     {
//         int m=(l+r)/2;
//         mergesort(a,l,m);
//         mergesort(a,m+1,r;
//         merge(a,l,m,r));
//     }
    
// }

// void merge(int a[],intl,int m,int r){
//      int n1=m-l+1;
//     int n2=r-m;
    
//     int a[n1];
//     int b[n2];
    
//     for(int i=0;i<n1;i++)
//     a[i]=arr[l+i];
    
//     for(int i=0;i<n2;i++)
//     b[i]=arr[m+1+i];
    
//     int i=0,j=0,k=l;
    
//     while(i<n1 && j<n2){
//         if(a[i]<b[j]){
//             arr[k]=a[i];
//             k++;
//             i++;
//         }
//         else{
//             arr[k]=b[j];
//             k++;
//             j++;
//         }
//     }
    
//     while(i<n1){
//         arr[k]=a[i];
//         i++;k++;
//     }
//     while(j<n2){
//         arr[k]=b[j];
//         j++;k++;
//     }
// }


// //quick sort
// void quicksort(int a[],int l,int r){
//     if (l<r)
//     {
//         int pi=partition(a,l,r);
//         quicksort(a,l,pi-1);
//         quicksort(a,pi+1,r);
//     }
    
// }

// void partition(float arr[],int l,int r){
//     int pivot=arr[r];
//     int i=l-1;
//     for (int j = l; j < r; j++)
//     {
//         if (arr[j]>pivot)
//         {
//             i++;
//             swap(arr[i,arr[j]]);
//         }
//     }
//     swap(arr[i+1],arr[r]);
//     return i+1;
// }

// // Function to build a binary tree
// Node* buildBinaryTree() {
//     int data;
//     std::cin >> data;

//     if (data == -1) {
//         return nullptr; 
//     }
//     Node* root = createNode(data);
//     root->left = buildBinaryTree();
//     root->right = buildBinaryTree();
//     return root;
// }


// //max or min heap tree

// void insertProcess(struct Process heap[], int* heapSize, struct Process newProcess) {
//     int i=*heapSize;
//     (*heapSize)++;
//     heap[i].data=newProcess.data;
    
//     while(i>0 && heap[(i-1)/2].data>heap[i].data){
//         swap(&heap[(i-1)/2],&heap[i]);
//         i=(i-1)/2;
//     }
// }

// void printHeap(struct Process heap[],int size){
//     for(int i=0;i<size;i++){
//         printf("%d ",heap[i]);
//     }
// }



// //heap sort
//  void max_heap(int *a, int m, int n){ 
//     int j,item;
//     item=a[m];
//     j=m*2;
    
//     while(j<=n){
//         if(j<n && a[j]<a[j+1]){
//             j++;
//         }
//         if(item>=a[j]){
//             break;
//         }
//         a[j/2]=a[j];
//         j=2*j;
//     }
//     a[j/2]=item;
// }

// void build_maxheap(int *a, int n) {
//    int k;
//    for(k = n/2; k >= 1; k--) {
//       max_heap(a,k,n);
//    }
// }


// //heap delete
// void deleteMax(int arr[], int* n) {
//     if (*n <= 0) {
//         printf("Heap is empty\n");
//         return;
//     }
//    int temp = arr[0];
//     arr[0] = arr[(*n) - 1];
//     arr[(*n) - 1] = temp;
//     (*n)--;
//     heapify(arr, *n, 0);
// }



// //tower of hanoi
// void towerOfHanoi(int n, char a, char c, char b) 
// { 
// 	if (n == 0) return; 
	 
// 	towerOfHanoi(n - 1, a, b, c); 
// 	cout << "Move disk " << n << " from rod " << a << " to rod " << c << endl; 
// 	towerOfHanoi(n - 1, b, c , a); 
// } 

// towerOfHanoi(N, 'A', 'C', 'B'); 


#include<iostream>
using namespace std;

class a{
    public:
        virtual void fxn(){
            cout<<"hhhh";
        }
};

class c: virtual public a{
    public:
};

int main(){
    c c1;
    c1.fxn()   ;
}