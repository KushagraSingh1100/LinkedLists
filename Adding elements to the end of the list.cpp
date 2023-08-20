#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

struct node* A;
struct node* B;
void insert(int a){
    node* temp = new node();
    temp->data = a;
    if(A == NULL){
        temp->next = A;
        A = temp;
        B = temp;
    }
    else{
        temp->next = NULL;
        A->next = temp;
        A = temp;
    }
    

}
void print(){
    node* temp1 = B;
    while(temp1 != NULL){
        cout<<"here is the data of the list"<<temp1->data<<endl;
        temp1 = temp1->next;
    }
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
