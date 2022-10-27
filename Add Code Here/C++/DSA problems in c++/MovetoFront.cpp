#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};


    Node *moveToFront(Node *head){
        Node *cur = head;
        if(head->next == nullptr)
            return head;
        while(head->next->next !=  nullptr) {
            head = head->next; 
            }
        Node *temp = head->next;
        head->next = nullptr;
        temp->next = cur;
        return temp;    
        
    }  
    // Linkedlist Traversal
    void traverse(struct Node *ptr)
    {
      while (ptr != NULL)
      {
          cout << "Elements : " << ptr->data << endl;
          ptr = ptr->next;
      }
    } 
    

int main(){

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocated memory for Nodes in Linkedlist
    head = (struct Node *)malloc(sizeof(struct Node));
    second = new Node();
    third = new Node();
    fourth = new Node();

    // Link First and Secod Node
    head->data = 7;
    head->next = second;

    // Link Second and Third Node
    second->data = 23;
    second->next = third;

    // Link Third and Fourth Node
    third->data = 60;
    third->next = fourth;

    // Link fourth Node to Null
    fourth->data = 21;
    fourth->next = NULL;

    //Before moving 
    traverse(head);
    cout<<endl;
    //after moving last element to front
    head = moveToFront(head);
    traverse(head);

return 0;
}
