#include <bits/stdc++.h>
using namespace std;
int main()
{
  stack<int> s;
  //two O(1) functions-push and pop and only top is accessible
  s.push(3);
  s.push(2);
  cout<<s.top() <<endl;
  s.pop();
  cout<<s.top() <<endl;
  //--------------------------
  queue<int> q;
  //two O(1) functions-push[rear] and pop[front], front rear accessible
  q.push(3);
  q.push(2)
  q.push(5);
  cout<<q.front()<<',' <<q.rear() <<endl;
  q.pop();
  cout<<q.front()<<',' <<q.rear() <<endl;
}
