#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
}*top=nullptr,*temp,*new1;

void push(int a){
    new1=new node;
    new1->data=a;
    new1->next=top;
    top=new1;
}

void print(){
    temp=top;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void deleteeven(){
    temp=top;
    node* t1;
    while(temp->next!=nullptr){
        if(temp->next->data%2==0){
            t1=temp->next;
            temp->next=t1->next;
            delete(t1);
        }
        temp=temp->next;
    }
}


int main(){
    int x,a;
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>a;
        push(a);
    }
    print();
    deleteeven();
    cout<<endl;
    print();
}