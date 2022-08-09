#include <iostream>
using namespace std;
  class node  {
  public:
  int data;
  node *next;
  
  node( int data){
    this -> data = data;
    this -> next = NULL;
  };
  
  };
   void insertathead(node* &head , int d){

    // new node 
    node *temp = new node(d);
    // give temp next to head address
    temp -> next  = head;
    // chnage heade
    head = temp;

   };
   void printlinklist(node* &head){
        node *temp = head ;
        while (temp !=NULL)
        {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout <<endl;
        
   }

int main(){
    // created a new node
  node *ob1 = new node(20);
// cout<<ob1 -> data <<endl;
// cout<<ob1 -> next <<endl;
// innitial head to
 node* head = ob1;
cout << head << endl ;
insertathead(head , 12);
cout << head << endl ;
 
    cout << endl;
    cout << endl;
    return 0;
}
