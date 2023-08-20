#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};
struct node* A;

void insert(int x){
    node* temp = new node();
    temp->data = x;
    temp->next = A;
    A = temp;
}

void print(){
    node* temp1 = A;
    while(temp1 != NULL){
        cout<<"the data of the linked list is: "<<temp1->data<<endl;
        temp1 = temp1->next;
    };
}

int main(){
    A = NULL;
    int a,b;
    cout << "enter the numer of digits you want to enter in the linked list"<<endl;
    cin>>b;
    for(int i =0; i<b; i++){
        cout<<"enter the number: ";
        cin>>a;
        insert(a);
    }
    print();
    return(0);
}