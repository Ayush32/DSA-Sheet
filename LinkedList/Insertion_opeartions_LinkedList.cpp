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

void insertAtMiddle(Node* &head, Node* tail, int posiiton, int x){
  
//   create new node to with x data
  
  Node* temp = head;
//   Node* tailtemp = tail
  Node* newNode = new Node(x);
  int count = 1;
  
//   if the position is 1st or head 
  if(position == 1)
  {
    newNode ->next = head;
    head  = newNode;
    return;
  }
  while(count < positiom - 1){
    temp = temp->next;
    count++;
    
//     if the position is last or tail position 
    if(temp - > next == NULL){
      tail->next = newNode;
      tail = newNode;
      return ;
    }
  // insert at middle or any psoition
    newNode -> next = temp;
    temp->next = newNode;
    
    
}
// Insertion at the end or tail

void insertAtTail(Node* &tail,int x){
  
//   create new node to with x data
  
  Node* temp = new Node(x);
  // make new node next as old node data address
  tail->next = temp;
  head = temp;
}

int main() {
  Node* node1 = new Node(10);
  cout << node1 ->data;
  // head pointed to the node1
  Node *head = node1;
  Node * tail = node1;
  insertAtHead(head,12);
  insertAtEnd(tail,15);
  
  
  
  insertAtHead(head,12);
}
