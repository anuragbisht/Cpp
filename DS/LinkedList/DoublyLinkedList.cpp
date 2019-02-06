#include <iostream>

struct Node{
	int data;
	Node* prev;
	Node* next;
};

class DoublyLinkedList{
private:
	Node* head;
public:
	DoublyLinkedList();
	~DoublyLinkedList();
	void addNode(int data);
	void display();
	void displayInReverse();
};
/*Constructor*/
DoublyLinkedList::DoublyLinkedList(){
	this->head = NULL;
}

/*Destructor*/
DoublyLinkedList::~DoublyLinkedList(){

}

/*add the new node at the beginning */
void DoublyLinkedList::addNode(int data){
	Node* node  = new Node;
	node->data = data;
	node->next = head;
	node->prev = NULL;
	if (head){
		head->prev = node;
	}
	head = node;

}

void DoublyLinkedList::display(){
	Node* current;
	current = head;
	while (current != NULL){
		std::cout<<current->data<< " ";
		current = current->next;
	}

}

// void DoublyLinkedList::displayInReverse(){
// 	Node* last; 
// 	Node* current;
// 	Node* temp;//to reach the last
// 	temp  = head;
// 	while(last != NULL){
// 		last = temp;		
// 		temp = temp->next;
// 	}
// 	current = last;
// 	std::cout<<"last->data : "<<last->data;
// 	while(current != NULL){
// 		std::cout<<current->data<< " ";
// 		current = last->prev;
// 	}
// } 


int main(){
	DoublyLinkedList* list = new DoublyLinkedList;
	list->addNode(2);
	list->addNode(38);
	list->addNode(67);
	list->addNode(87);
	list->display();
	return 0 ;
}