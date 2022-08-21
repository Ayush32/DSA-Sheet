void twoStacks :: push1(int x)
{
    if(top2-top1 > 1){
        top1++;
        arr[top1] = x;
    }
    else {
        return;
    }

}
   
//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
    if(top2-top1 > 1){
        top2--;
        arr[top2] = x;
    }
    else{
        return;
    }

}
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
    if(top1 == -1){
    return -1;
    }
    else {
        int poppedData = arr[top1];
        top1--;
        return poppedData;
    }
    

}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2()
{

    if(top2 == size){
    return -1;
    }
    else {
        int poppedData = arr[top2];
        top2++;
        return poppedData;
    }
    
}
