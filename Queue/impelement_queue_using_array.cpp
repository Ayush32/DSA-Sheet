void MyQueue :: push(int x)
{
        // Your Code
        arr[rear] = x;
        rear++;
        
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
        // Your Code   
        if(front == rear){
            return -1;
        }
        else {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if(front  == rear){
                rear = 0;
                front = 0;
                
            }
            return ans;
        }
}
void MyQueue :: push(int x)
{
        // Your Code
        arr[rear] = x;
        rear++;
        
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
        // Your Code   
        if(front == rear){
            return -1;
        }
        else {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if(front  == rear){
                rear = 0;
                front = 0;
                
            }
            return ans;
        }
}
