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

Node* swapadjacent(Node* &head){

    // base case
    if(head==NULL || head->next == NULL){
        return head;
    }
    // recursive call  case

    Node* secondnode = head->next;  // 1-2 (save kiya)  firrr ageee -(recursive-4-3-6-5 )
    
    head->next  = swapadjacent(secondnode->next);
     secondnode->next = head; // reversing the link between 1st and 2nd node
    return secondnode; // becz new ll ka head hai 2-1-4-3-6-5
}
int main(){
    linklist ll;
    
    ll.insertattail(1);
    ll.insertattail(2);
    ll.insertattail(3);
    ll.insertattail(4);
    ll.insertattail(5);
    ll.insertattail(6);
   ll. display();

   ll.head = swapadjacent(ll.head);
   ll.display();
}