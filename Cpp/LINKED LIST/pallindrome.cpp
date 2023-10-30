#include<iostream>
using namespace std;

class Node{
    public:

  int val;
  Node* next;

  Node( int data){

    val =  data;
    next = NULL;

  }
};

class linklist{
    public:

    Node* head;

    linklist(){
        head = NULL;

    }
  
 void  insertattail(int value){
   
   Node* new_node = new Node (value);
 if(head==NULL){
    head = new_node;
 }
Node* temp = head;
while(temp->next != NULL){
    temp = temp->next;

}
temp->next = new_node;
 new_node->next= NULL;


 }

 void display(){
    Node* temp = head;
    while (temp!= NULL){
cout<<temp->val<< "->";
temp = temp->next;

    }
    cout << "NULL"<< endl;
}
};

bool pallindrome(Node* &head){
//1. find middle 

Node* slow = head;
Node* fast = head;

while (fast && fast->next){
    slow = slow->next;
    fast = fast->next->next;
}
    // now slow is pointing the middle node
    //2. BREAK FROM THE MIDDLE 
    Node* curr = slow->next;
    Node* prev = slow  ;
    slow->next = NULL;
   
    //3. REVERSE THE 2ND PART 
while (curr){ 
    Node* nextNode = curr->next;
    curr->next = prev;
    prev  = curr;
    curr  = nextNode;

}// LL IS BREAK IN 2 PArt 1st is straight(head1)      and 2nd is reverse(head2 = prev);

// 4. CHECK THE VALUE OF LL


Node* head1 = head;
Node* head2 = prev;
while(head2){
if (head1->val!= head2->val){
    return false;
}
head1 = head1->next;
head2 = head2->next;



return true;
}
};

 
 
int main(){

 linklist ll;
    ll.insertattail(1);
    ll.insertattail(2);
    ll.insertattail(3);
    ll.insertattail(3);
    ll.insertattail(2);
    ll.insertattail(1);

    ll.display();
cout<<pallindrome(ll.head)<<endl;
}






