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
 
 Node* mergell(Node* head1, Node* head2){

Node* dummyhead = new Node(-1);

Node* ptr1 = head1;
Node* ptr2 = head2;
Node* ptr3 = dummyhead;

while (ptr1 && ptr2){     // JAB TAK DONO HOGA TAB TAK YE CHALEGA EK BHI NULL HUA TOH LOPP BREAK 
if (ptr1->val < ptr2->val){

ptr3->next = ptr1;
ptr1 = ptr1->next ;

}
else{

ptr3->next = ptr2 ;
ptr2 = ptr2->next;

}

ptr3 = ptr3->next;    // LOOP (IF ELSE)SE BAHARA AA K  PTR3 BHADYA BECAUSE YE TOH HAMESA BADHENGYE

}
// AGAR KOI EK PEHELE HI NULL  HO JAYE 
if(ptr1 == NULL){

    ptr3->next= ptr2;

}
else{
    ptr3->next = ptr1;
}
return dummyhead->next;

 }

 int main()
{
    linklist ll1;
    ll1.insertattail(1);
    ll1.insertattail(2);
    ll1.insertattail(7);
    ll1.insertattail(9);
      ll1.display();

    linklist ll2;
    ll2.insertattail(4);
    ll2.insertattail(8);
    ll2.display();

    linklist ll3;
    ll3.head = mergell(ll1.head, ll2.head);
    ll3.display();

 return 0;
}