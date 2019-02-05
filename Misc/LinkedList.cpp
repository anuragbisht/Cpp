#include <iostream>

struct Node{
    int data;
    struct Node *next;
};

class LinkedList
{
private:
    struct Node* head;
public:
    LinkedList(/* args */);
    ~LinkedList();
    insertNode (int data);
    display();
    // void insertNode (int data){

    // }

    // void display(){
       
    // }
};

LinkedList::LinkedList(/* args */)
{
    this->head = NULL;
}

LinkedList::~LinkedList()
{
    
}
LinkedList::insertNode(int data)
{

    std::cout<<"inserting data: " << data << std::endl;
    //insert a new node as head (in the beginning of the list)
    
    struct Node *node  = new Node;
    node->data = data;
    if (node != NULL){
        std::cout<<"node->data : "<<node->data<<std::endl;
    }
    

    std::cout<<"this is working";
   
    node->next = head;
     if(node->next == NULL){
         std::cout << "null" << std::endl; 
     }

      if(node == NULL){
         std::cout << "null node"<< std::endl; 
     }
    
    if (node != NULL){
        std::cout<<"node->next->data"<<node->next->data<<std::endl;

    }
    head = node;  
    if (head != NULL){
        std::cout<<"head->data : "<<head->data<<std::endl;
        std::cout<<"head->next->data : "<<head->next->data<<std::endl;
    }
    std::cout<<"head->data : "<<head->data<<std::endl;

}
LinkedList::display()
{
    struct Node* current = new Node;
    current = head;
    while (current->next != NULL ){
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