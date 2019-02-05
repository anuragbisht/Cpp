#include <iostream>

class TreeNode{
    public:

    int data;
    TreeNode* left;
    TreeNode* right;
}



class Tree(){
    public:

    TreeNode root;
    tree(){
        root.data = 0;
    }

    void addNodeToLeft(TreeNode* node){
        root.left = node;
    }

    void addNodeToRight(TreeNode* node){
        root.right = node
    }

    void BFS(){
        ///implement BFS using queue
    }
    void DFSQueue(){
        //implement DFS using queue
    }
    void DFSStack(){
        //implement DFS using stack
    }

}

class Queue(){
    public:


}

class ListNode{
    public:

    int data;
    ListNode* prev;
    ListNode* next;

    ListNode(int data){
        this->data = data;
        
    }
    
    void printNodeData(){
        std::cout<<"data of the node is "<<data;
    }
}

class LinkedList(){
    public:
    ListNode head;

    void addNodeToList(ListNode* node){
        head.next = node
    }

    void printList(){
        ListNode* current = head;
        while(&current != NULL){
            cout<<&current.data;
            current  = head.next;
        }
    }

}