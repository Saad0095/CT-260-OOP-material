#include <bits/stdc++.h>
using namespace std;

template <typename T> class Stack;

template <typename T> T peek(Stack<T> &);

class StackException {
private:
  string msg;

public:
  StackException(string m) : msg(m) {}
  string what() { return msg; }
};

template <typename T> class Stack {
private:
  vector<T> stack;

public:
  void push(T elem) { stack.push_back(elem); }
  void pop() {
    if (stack.empty()) {
      throw StackException("Stack is empty!");
    }
    stack.pop_back();
  }
  friend T peek<T>(Stack<T> &s);
};

template <typename T> T peek(Stack<T> &s) {
  if (s.stack.empty()) {
    throw StackException("Stack is empty!");
  }
  return s.stack.back();
}

int main() {
  Stack<int> s;
  try {
    s.push(20);
    s.push(40);
    s.push(50);

    cout << "Peek " << peek(s) << endl;
    s.pop();
    cout << "Peek " << peek(s) << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

  } catch (StackException &e) {
    cout << e.what();
  }
  return 0;
}