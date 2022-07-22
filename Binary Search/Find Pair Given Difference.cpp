Given an array Arr[] of size L and a number N, you need to write a program to find if there exists a pair of elements in the array whose difference is N.

Example 1:

Input:
L = 6, N = 78
arr[] = {5, 20, 3, 2, 5, 80}
Output: 1
Explanation: (2, 80) have difference of 78.


bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
    
    int l = 0;
    int r = 1;
    
    while(l < size && r < size){
        if(arr[r] - arr[l] == n && l != r){
            return true;
        }
       else  if(arr[r] - arr[l] < n){
            r++;
       }
        else{
            l++;
        }
    }
    return false;
    
}
