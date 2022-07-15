

#include <iostream>

using namespace std;

//Pair struct is used to return to value from minmax

struct Pair {
    int  min;
    int max;
};

Pair getMinMax(int arr[],int n) {
    struct Pair minmax;
    int i;
    // if there is single element
    if(n == 1)
      {
          minmax.max = arr[0];
          minmax.min = arr[0];
      }
    //   if there are more than two element or equal to 2 element
     if(arr[0] > arr[1]){
         minmax.max = arr[0];
         minmax.min = arr[1];
     }
     else {
         minmax.max = arr[1];
         minmax.min = arr[0];
     }
     
     for(i = 2 ; i< n;i++){
         if(arr[i] > minmax.max){
             minmax.max = arr[i];
         }
         else if (arr[i] < minmax.min) {
             minmax.min = arr[i];
         }
     }
     return minmax;
}

int main()
{
     int arr[] = { 100, 11, 45,
                  10, 30, 30 };
    int arr_size = 6;
     
    struct Pair minmax = getMinMax(arr, arr_size);
     
    cout << "Minimum element is "
         << minmax.min << endl;
    cout << "Maximum element is "
         << minmax.max;
          
    return 0;
}
