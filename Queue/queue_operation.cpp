#include<bits/stdc++.h>
using namespace std;

int main()
{
  queue<int>q;
  
  q.push(3);
   q.push(6);
  q.push(7);
  q.push(9);
  
  cout << "siz of queue is " << q.size();
  
  q.pop();
  q.pop();
  
  q.front() // gives the first element of queue
    q.rear() // gives the last element of queue
}
