#include<iostream>
#include<queue>
using namespace std;

int index=-1;

struct node{
    int data;
    node* left;
    node* right;

    node(int d) : data(d) {this->left=nullptr;this->right=nullptr;}
};

struct Node* insertNode(struct Node* root, int data) {
  if (root == nullptr) {
    return createNode(data);
  } 
  else if (data <= root->data) {
    root->left = insertNode(root->left, data);
  }
  else {
    root->right = insertNode(root->right, data);
  }
  return root;
}

node* createtree(int a[]){
    index++;
    if (a[index]==-1)
    {
        return nullptr;
    }
    node *newnode=new node(a[index]);
    newnode->left=createtree(a);
    newnode->right=createtree(a);
    return newnode;
}

void levelorderprint(node* temp){
    queue<node*> data;
    data.push(temp);
    data.push(nullptr);

    while (!data.empty())
    {
        node* current = data.front();
        data.pop();
        if (current==nullptr)
        {
            cout<<endl;
            if (data.empty())
            {
                break;
            }
            else{
                data.push(nullptr);
            }
            
        }
        else{
            cout<<current->data<<" ";
            if (current->left!=nullptr)
            {
            data.push(current->left);
            }
            
            if (current->right!=nullptr)
            {
            data.push(current->right);
            }
        }
        
    }

//level sort using recurtion
    // struct Node* insertLevelOrder(int arr[], struct Node* root, int i, int n) {
    // if (i < n) {
    //     struct Node* temp = newNode(arr[i]);
    //     root = temp;

    //     // Insert left child
    //     root->left = insertLevelOrder(arr, root->left, 2 * i + 1, n);

    //     // Insert right child
    //     root->right = insertLevelOrder(arr, root->right, 2 * i + 2, n);
    // }
    // return root;
}
    
}
void postorderprint(node* temp){
    if (temp==nullptr)
    {
        return; 
    }
    postorderprint(temp->left);
    postorderprint(temp->right);
    cout<<temp->data<<" ";
}
void inorderprint(node* temp){
    if (temp==nullptr)
    {
        return; 
    }
    inorderprint(temp->left);
    cout<<temp->data<<" ";
    inorderprint(temp->right);
}

void preorderprint(node* temp){
    if (temp==nullptr)
    {
        cout<<"-1 ";
        return; 
    }
    cout<<temp->data<<" ";
    preorderprint(temp->left);
    preorderprint(temp->right);
}

int count(node*temp){
    if (temp==nullptr)
    {
        return 0;
    }
    
    if (temp->left==nullptr && temp->right==nullptr)
    {
        return 1;
    }
    return count(temp->left)+count(temp->right)+1;
    
}

int sum(node* temp){
    if (temp==nullptr)
    {
        return 0;
    }
    return temp->data +sum(temp->left)+sum(temp->right);
    
}

int height(node* temp){
    if (temp==nullptr)
    {
        return 0;
    }
    int left=height(temp->left);
    int right=height(temp->right);
    if (left>right)
    {
        return left+1;
    }
    else{
        return right+1;
    }
    
}

int main(){
    int a[]={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    node *root=createtree(a);
   cout<<height(root);

}




//insert into bst without recuttion
// void create(int input) {
// struct Node* newnode = createNode(input);
//     if (root == NULL) {
//         root = newnode;
//         return;
//     }

//     struct Node* current = root;
//     while (current) {
//         if (input < current->data) {
//             if (current->left == NULL) {
//                 current->left = newnode;
//                 break;
//             }
//             current = current->left;
//         } else {
//             if (current->right == NULL) {
//                 current->right = newnode;
//                 break;
//             }
//             current = current->right;
//         }
//     }


//insert usinng recurtion in bst
// struct Node* insertNode(struct Node* root, int data) {
//   if (root == nullptr) {
//     return createNode(data);
//   } 
//   else if (data <= root->data) {
//     root->left = insertNode(root->left, data);
//   }
//   else {
//     root->right = insertNode(root->right, data);
//   }
//   return root;
// }

