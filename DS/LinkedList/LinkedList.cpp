#include <iostream>

struct Node{
    int data;
    Node *next;
};

class LinkedList
{
private:
  	Node* head;
public:
    LinkedList(/* args */);
    ~LinkedList();
    void insertNode (int data);
    void display();
    // void insertNode (int data){

    // }

    // void display(){
       
    // }
};

LinkedList::LinkedList(/* args */)
{
    this->head = NULL;
    //std::cout<<head;
}

LinkedList::~LinkedList()
{
    
}

/*insert a new node as head (in the beginning of the list)*/
void LinkedList::insertNode(int data)
{
    Node *node  = new Node;
    node->data = data;
    node->next = head;
   	head = node; 
}

void LinkedList::display()
{
    Node* current;
    current = head;
    while (current != NULL ){
        std::cout<<current->data<<" ";
        current = current->next;
    }
}

int main(){
    LinkedList *list = new LinkedList();
    list->insertNode(2);
    list->insertNode(3);
    list->insertNode(24);
    list->insertNode(25);
    list->insertNode(28);
    list->insertNode(223);
    list->display();
    return 0;
}