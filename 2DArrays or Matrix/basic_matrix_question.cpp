
#include <iostream>

using namespace std;

// row wise sum

void rowWiseSum(int arr[3][3]) {
    for(int row = 0;row < 3;row++){
            int sum = 0;

        for(int col = 0;col < 3;col++){
            sum += arr[row][col];
        }
        cout << sum <<endl;
    }
}

// Largest Row sum problem with row Index

void maxRowSum(int arr[3][3]) {
    int maximum = 0;
    int rowIndex = -1;
    for(int row = 0;row < 3;row++){
        int sum = 0;
        for(int col = 0;col < 3;col++){
            sum += arr[row][col];
        }
        maximum = max(sum,maximum);
        rowIndex = row;
    }
    cout << rowIndex << " the maximum row sum " << maximum;
}

int main()
{
         int arr[3][3] =   { { 1, 2, 3},
                            { 5, 6,7},
                            { 8,9,10}};
                            
       maxRowSum(arr);

    return 0;
}
