class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
      int arr[26] = {0};
      
      for(int i = 0;i<str.length();i++)
      {
          char ch = str[i];
          int index =  ch  - 'a';
          
          arr[index]++;
          
      }
      
      int maximum = -1;
      int ans = 0;
      
      for(int i = 0;i< 26;i++){
          if(maximum < arr[i]){
              ans = i;
              maximum = arr[i];
          }
      }
      
      char a = 'a' + ans;
      return a;
}
