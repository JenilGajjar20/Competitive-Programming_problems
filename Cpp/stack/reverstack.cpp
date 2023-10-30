#include<iostream>
#include<stack>
using namespace std;


void insertAtBottom(stack<int>&s,int target){
    //base case
    if(s.empty()){
        s.push(target);
        return ;
    }

    int topEle=s.top();
    s.pop();
    //recursive call
    insertAtBottom(s,target);
    //bactracking
    s.push(topEle);

}

void reverseStack(stack<int>&s){
    //base case
    if(s.empty()){
        return ;
    }
    
    //ab nhi pata

    int target=s.top();
    s.pop();

    //reverse stack
    reverseStack(s);
    
    //insert at bottom target ko
    insertAtBottom(s,target);
}

int main(){
    stack<int>s;
    s.push(10);
    s.push(1);
    s.push(4);
    s.push(9);
    s.push(2);

    // cout<<"Print stack"<<endl;
    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }

    reverseStack(s);

    cout<<"Print stack after reverse"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}