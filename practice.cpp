// // binary search
// #include<iostream>
// using namespace std;
// int main(){
//   int a[]={1,2,3,4,5,6,7};
//   int x=7/2;
//   int c=3;
//   int i=-1;
//   while (x>=0 && x<6)
//   {
//     if (a[x]==c)
//     {
//       i=x;
//       break;
//     }
//     if (a[x]>c)
//     {
//       x=x/2;
//     }
//     if (a[x]<c)
//     {
//       x=x+(7-x)/2;
//     }
//   }
//   if (i!=-1)
//   {
//     cout<<i;
//   }
//   else{
// cout<<"nahi mila";
//   }
  
  
  
// }




// // bubble sort
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cin>>x;
//     int a[x];
//     for(int i=0;i<x;i++){
//         cin>>a[i];
//     }
//     int c=0,i=0;
    // while (i < x - 1)
    //     {
    //         if (a[i] > a[i + 1])
    //         {
    //             c = a[i];
    //             a[i] = a[i + 1];
    //             a[i + 1] = c;
    //             i = 0;
    //         }
    //         else
    //         {
    //             i++;
    //         }
    //     }
    
//     for (int i = 0; i < x; i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }



// <<--selection sort..>
// #include <iostream>
// #include <math.h>
// using namespace std;

// int main()
// {

//     int a[] = {5,4,7,3,32,22,2,1};
// //     int s = 8;
//     for (int i = 0; i < s - 1; i++)
//     {
//         int min = i;
//         for (int j = i + 1; j < s; j++)
//         {
//             if (a[j] < a[min])
//             {
//                 min = j;
//             }
//         }
//         if (min != i)
//         {
//             swap(a[i], a[min]);
//         }
    // }

//     for (int i = 0; i < s; i++)
//     {
//         cout << a[i] << " ";
//     }

//     return 0;
// }




// insertion sort
// #include<iostream>
// using namespace std;
// int main(){
//     int a[]={1,2,4,3,2,4,6,7};
//     for (int i = 1; i < 8; i++) {
//     int x = a[i];
//     int j = i - 1;
//     while (x < a[j] && j >= 0) {
//       a[j + 1] = a[j];
//       --j;
//     }
//     a[j + 1] = x;
//   }
//   for (int i = 0; i < 8; i++)
//   {
//     cout<<a[i]<<" ";
//   }
// }
    





// linked list

// #include<stdio.h>
// #include<stdlib.h>


// struct node {
//     int data;
//     struct node* next;
// };



// int main(){
//     int a;
//     scanf("%d",&a);
//     struct node *head=NULL;
//     struct node *new1 , *temp ;
//     for(int i=0;i<a;i++){
//         new1=(struct node*)malloc(sizeof(struct node));
//         scanf("%d",&new1->data);
//         new1->next=NULL;
//         if(head==NULL){
//             head=new1;
//     }
//     else{
//         temp=head;
//         while(temp->next != NULL){
//             temp=temp->next;
//         }
//         temp->next=new1;
//     }
//     }
//     if(head==NULL){
//         printf("The list is empty.");
//     }
//     else{
//         struct node *temp=head;
//         while(temp!=NULL){
//             printf("%d ",temp->data);
//             temp=temp->next;
//         }
//         printf("\n");
//     }
// }








// stack using ll

// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// class Stack {
// private:
//     Node* top;

// public:
//     Stack() {
//         top = nullptr;
//     }

//     void push(int data) {
//         Node* newNode = new Node();
//         newNode->data = data;
//         newNode->next = top;
//         top = newNode;
//     }

//     void pop() {
//         if (top != nullptr) {
//             Node* temp = top;
//             top = top->next;
//             delete temp;
//         }
//     }

//     void deleteEven() {
//         Node* current = top;
//         Node* prev = nullptr;
//         while (current != nullptr) {
//             if (current->data % 2 == 0) {
//                 if (prev == nullptr) {
//                     pop();
//                     current = top;
//                 } else {
//                     prev->next = current->next;
//                     delete current;
//                     current = prev->next;
//                 }
//             } else {
//                 prev = current;
//                 current = current->next;
//             }
//         }
//     }
//     void printStack() {
//         Node* current = top;
//         while (current != nullptr) {
//             cout << current->data << " ";
//             current = current->next;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     int n;
//     cin >> n;

//     Stack stack;

//     for (int i = 0; i < n; i++) {
//         int element;
//         cin >> element;
//         stack.push(element);
//     }

//     stack.printStack();

//     stack.deleteEven();

//     stack.printStack();

//     return 0;
// }





//merge sort



// You are using GCC
// #include <stdio.h>

void merge(int arr[], int l, int m, int r) {
    int n1=m-l+1;
    int n2=r-m;
    
    int a[n1];
    int b[n2];
    
    for(int i=0;i<n1;i++)
    a[i]=arr[l+i];
    
    for(int i=0;i<n2;i++)
    b[i]=arr[m+1+i];
    
    int i=0,j=0,k=l;
    
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;
            i++;
        }
        else{
            arr[k]=b[j];
            k++;
            j++;
        }
    }
    
    while(i<n1){
        arr[k]=a[i];
        i++;k++;
    }
    while(j<n2){
        arr[k]=b[j];
        j++;k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if(l>=r){
        return;
    }
    int m=(l+r)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}

// int main() {
//     int size;
//     scanf("%d", &size);

//     int array[size];
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &array[i]);
//     }

//     for (int i = 0; i < size; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");

//     mergeSort(array, 0, size - 1);

//     for (int i = 0; i < size; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");

//     return 0;
// }











// //quick sort
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int partition(float arr[],int l,int r){
//     float pivot=arr[r];
//     int i=l-1;
//     for(int j=l;j<r;j++){
//         if(arr[j]>pivot){
//             i++;
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[i+1],arr[r]);
//     return i+1;
// }

// void quickSort(float arr[], int l, int r) {

//     if(l<r){
//         int pi=partition(arr,l,r);
//         quickSort(arr,l,pi-1);
//         quickSort(arr,pi+1,r);
//     }    
    
// }

// int main() {
//     int numStudents;

//     std::cin >> numStudents;

//     float* gpa = new float[numStudents];

//     for (int i = 0; i < numStudents; i++) {
//         std::cin >> gpa[i];
//     }

//     quickSort(gpa, 0, numStudents - 1);

//     for (int i = 0; i < numStudents; i++) {
//         std::cout << std::fixed << std::setprecision(1) << gpa[i] << " ";
//     }

//     delete[] gpa; 

//     return 0;
// }





//binary tree
// You are using GCC
// #include <iostream>
// #include<unordered_set>
// using namespace std;

// // Define the structure for a binary tree node
// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };

// // Function to count the number of nodes in the binary tree
// int nodeCount(Node* root) {
//     if (root == nullptr) {
//         return 0;
//     }
//     return 1 + nodeCount(root->left) + nodeCount(root->right);
// }

// // Function to create a new binary tree node
// Node* createNode(int data) {
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->left = newNode->right = nullptr;
//     return newNode;
// }

// Function to build a binary tree
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

// // Function to check if a binary tree has duplicate values
// bool hasDuplicateValues(Node* root,unordered_set<int> &val) {
//     if(root==nullptr){
//         return false;
//     }
    
//     if(val.end() != val.find(root->data)){
//         return true;
//     }
    
//     val.insert(root->data);
//     return hasDuplicateValues(root->left,val) ||  hasDuplicateValues(root->right,val);
// }

// int main() {
//     Node* root = nullptr;

//     root = buildBinaryTree();
//     unordered_set<int> val;

//     if (hasDuplicateValues(root,val)) {
//         std::cout << "Yes" << std::endl;
//     } else {
//         std::cout << "No" << std::endl;
//     }

//     return 0;
// }

// #include <iostream>

// // Define the structure for a binary tree node
// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };

// // Function to create a new binary tree node
// Node* createNode(int data) {
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->left = newNode->right = nullptr;
//     return newNode;
// }

// // Function to perform an inorder traversal
// void inorderTraversal(Node* root) {
//     if (root == nullptr) {
//         return;
//     }

//     // Traverse the left subtree
//     inorderTraversal(root->left);

//     // Visit the current node
//     std::cout << root->data << " ";

//     // Traverse the right subtree
//     inorderTraversal(root->right);
// }

// int main() {
//     // Create a binary search tree
//     Node* root = createNode(4);
//     root->left = createNode(2);
//     root->right = createNode(6);
//     root->left->left = createNode(1);
//     root->left->right = createNode(3);
//     root->right->left = createNode(5);
//     root->right->right = createNode(7);

//     std::cout << "Inorder traversal of the BST: ";
//     inorderTraversal(root);
//     std::cout << std::endl;

//     return 0;
// }









// heap tree 
// 1)usinf struct

// #include <stdio.h>
// #include <stdlib.h>

// struct Process {
//     int data;
// };

// void swap(struct Process* a, struct Process* b) {
//     struct Process temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void insertProcess(struct Process heap[], int* heapSize, struct Process newProcess) {
    // int i=*heapSize;
    // (*heapSize)++;
    // heap[i].data=newProcess.data;
    
    // while(i>0 && heap[(i-1)/2].data>heap[i].data){
    //     swap(&heap[(i-1)/2],&heap[i]);
    //     i=(i-1)/2;
    // }
// }

// void printHeap(struct Process heap[],int size){
//     for(int i=0;i<size;i++){
//         printf("%d ",heap[i]);
//     }
// }

// int main() {
//     struct Process minHeap[100];
//     int heapSize = 0;

//     while (1) {
//         struct Process newProcess;
//         if (scanf("%d", &newProcess.data) != 1) {
//             break;
//         }

//         insertProcess(minHeap, &heapSize, newProcess);
//     }
//     printHeap(minHeap, heapSize);

//     return 0;
// }






// 2)using array
// #include <iostream>
// using namespace std;
// void max_heap(int *a, int m, int n)
// { 
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


// void build_maxheap(int *a, int n) {
//    int k;
//    for(k = n/2; k >= 1; k--) {
//       max_heap(a,k,n);
//    }
// }


// int main() {
//    int n, i;
//    cin>>n;
  
//    int a[n];
//    for (i = 1; i <= n; i++) {
//      cin>>a[i];
//    }
//    build_maxheap(a, n);
//    for (i = 1; i <= n; i++) {
//       cout<<a[i]<<" ";
//    }
// }