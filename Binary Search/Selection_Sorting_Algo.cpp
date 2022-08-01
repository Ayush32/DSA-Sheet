 void selectionSort(int arr[], int n)
    {
       //code here
       for(int i = 0;i<n;i++){
             int minIndex = i;

         for(int j = i + 1;j < size;j++){
           if(arr[min] > arr[j])
            {
                min = j;
            }
         }
         swap(arr[i],arr[minIndex]);
        }
        return arr;
       
    }
