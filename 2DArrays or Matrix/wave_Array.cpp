// wave row 
 void waveRow(int arr[3][3]) {
     for(int col = 0;col < 3;col++){
         if(col & 1) {
             for(int row = 3-1;row >= 0;row--){
                 cout << arr[row][col] << " ";
             }
         }
     else {    
         for(int row = 0;row < 3;row++){
             cout << arr[row][col] << " ";
         }
     }
     }
 }

IP -  int arr[3][3] =   { { 1, 2, 3},
                            { 5, 6,7},
                            { 8,9,10}};
                            

1,5,8,9,6,2,3,7,10
