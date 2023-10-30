#include<iostream>
using namespace std;
 

 class Node{
    public:

    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
        
 }

 };

 class linklist{
    public:

    Node*  head;

    linklist(){
        head = NULL;

    }

void insertattail(int value){
    Node* new_node = new Node(value);
    if (head == NULL){    // linklist empty toh new node banaya uppar
      head = new_node;
         // head ko hi new node se poinnt kara diya 
      return;
 
}                       // now hame last mai jana hai toh traverse krenegye 
    Node* temp = head;  // temp banya last tak jana h  temp _> next = null tk 
    while (temp->next!= NULL){  // tail mai add krna hai issi liye 
    temp = temp->next;
 }
    temp->next = new_node;
}
void display(){
     Node* temp = head;
     while (temp != NULL){ // yaha pura travverse krna hia 
     cout<<temp->val<< "->";
     temp = temp->next;

 }cout<<"NULL"<<endl;
}
 };
  
  bool checkequalLL(Node* head1, Node* head2){

  Node* ptr1 = head1;
  Node* ptr2 = head2;

  while (ptr1!=NULL&& ptr2!= NULL){
if(ptr1->val!= ptr2->val){
    return false;

}
ptr1 = ptr1->next;
ptr2 = ptr2->next;
 }
// NOW YAHA PE YA TOH PTR1=NULL YA PTR2=NULL YA DONO NULL ;
return (ptr1==NULL && ptr2==NULL);

  }

int getlength(Node* head){
   
     Node* temp = head ; 
      int length = 0;

      while (temp!=NULL){ // JAB TAK TEMP NULL NHI HOTA YE CHALEGA....
      head = head->next ;
      length ++;

      }
      return length;

}

Node* moveheadbyk(Node* head, int k){  // pointer return kiya jo head k agge kk step pe hoga 

Node* ptr = head;
while(k--){   // K steps k liye loop taki ptr aage baade .

    ptr = ptr->next;

}
return ptr;

}

Node* getintersection(Node* head1, Node* head2){
    Node* ptr1 = head1;
    Node* ptr2 = head2;

    // step1 calculate the length of ll1 ll2
   int l1 = getlength(head1);
   int l2 = getlength(head2);

   // step 2 subtract kiya bigger mai se smaller ko  difference nikala = k aur bigger wale ko k step aage bheja 

   if(l1 > l2){ // l1 is bigger 
   
   int k = l1-l2;
   ptr1 = moveheadbyk(head1,k);
   ptr2 = head2;
   }            

   else {  // L2 is bigger 

   int  k = l2-l1;
   ptr1 = head1;
   ptr2 = moveheadbyk(head2,k);  
   }

   // step 3 compare ptr1 and ptr2;
   while(ptr1){
    if (ptr1 == ptr2 ){
        return ptr1;

    }
    ptr1 = ptr1->next;
    ptr2 = ptr2->next;

   }
   return NULL;



}


int main()
{
linklist ll1;
ll1.insertattail(1);
ll1.insertattail(2);
ll1.insertattail(3);
ll1.insertattail(4);
ll1.insertattail(5);
ll1.insertattail(6);



linklist ll2;
ll2.insertattail(1);
ll2.insertattail(2);
ll2.insertattail(3);
// ll2.insertattail(1);  YE WALA CASE LIYA HIA NOT EQUAL HAI TOH 0 RETURN KAREGA YANI FALSE 

ll1.display();
ll2.display();
cout<<checkequalLL(ll1.head, ll2.head)<< endl;

 return 0;

}