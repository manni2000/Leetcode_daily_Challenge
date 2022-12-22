#include<bits/stdc++.h>
using namespace std;

class MyQueue {
    private:
      stack<int> s1,s2;
public:
    MyQueue() {
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
       int ans = peek();
       s2.pop();
       return ans;
    }
    
    int peek() {
       if(s2.empty()){
           while(!s1.empty()){
               s2.push(s1.top());
               s1.pop();
           }
       }
       int ans = s2.top();
       return ans;
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};