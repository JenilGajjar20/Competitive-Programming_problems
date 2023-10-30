#include<iostream>
using namespace std;

class Node {
    public:

 int val;
 Node* next;

  Node (int data){
    val = data;
    next = NULL;
  }
};
 
 class  linklist{
    public:
    Node  * head;
    linklist(){

   head = NULL;
    }

void insertattail(int value){
    Node* new_node = new Node(value);
    if (head == NULL){
        head = new_node;// head ko hi new node maan liya 
        return;
    }
    Node * temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
 } 
    temp->next= new_node;

    }
void display(){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;

    } cout<< "NULL"<<endl;
}

};
Node* reversell(Node* &head){

    Node* prev = NULL;
    Node * curr = head;

    // curr-> next = prev;
    // move all 3 ptr by one step ahead 
    while ( curr!=NULL){
        Node* nextptr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextptr;
        // nextptr  = next ->next;

    }
    // jab looop khatam higa tab prev ptr pointing last node which is pointing new head;. 
    
    Node * new_node = prev;
    
    return new_node; 
};
    Node* reversellrecursion(Node* &head) {
        // base case if empty ll
        if(head == NULL || head->next == NULL) {
            return head;
    }// RECURSION CASE 
       Node* new_head = reversellrecursion(head->next);
       head->next->next = head;
       head->next = NULL; // jo head tha woh abbb last node ban gya reversell ka
       return new_head;

    }
 
int main()
{
 

  linklist ll;
 
   ll.insertattail(1); 
   ll.insertattail(2);
   ll.insertattail(3);
   ll.insertattail(4);
   ll.insertattail(5);
   ll.insertattail(6);
   
   ll.display();
  ll.head = reversellrecursion   (ll.head);
   ll.display();

 return 0;
}