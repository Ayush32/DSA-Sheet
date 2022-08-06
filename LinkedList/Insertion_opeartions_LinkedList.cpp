class Node {
  int data;
  Node* next;
 
  Node(int data) {
    this->data = data;
    this->Next = NULL;
  }
};

// print the linked list 

void printLinkedList(Node* &head){
  Node* temp = head;
  
  while(temp != NULL)
  {
    cout << temp->data;
    temp = temp->next;
  }
}

// Insertion at the begining or head
void insertAtHead(Node* &head,int x){
  
//   create new node to with x data
  
  Node* temp = new Node(x);
  // make new node next as old node data address
  temp->next = head;
  head = temp;
}

int main() {
  Node* node1 = new Node(10);
  cout << node1 ->data;
  // head pointed to the node1
  Node *head = node1;
  
  
  insertAtHead(head,12);
}
