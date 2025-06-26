#include <iostream>
#include <stack>
#include <climits>
using namespace std;


class MinStack {
  stack < long long > st;
  long long mini;
  public:
    /** initialize your data structure here. */
    MinStack() {
      while (st.empty() == false) st.pop();
      mini = INT_MAX;
    }

  void push(int value) {
    long long val = value;
    if (st.empty()) {
      mini = val;
      st.push(val);
    } else {
      if (val < mini) {
        st.push(2 *val*1LL - mini);
        mini = val;
      } else {
        st.push(val);
      }
    }
  }

  void pop() {
    if (st.empty()) return;
    long long el = st.top();
    st.pop();

    if (el < mini) {
      mini = 2 * mini - el;
    }
  }

  int top() {
    if (st.empty()) return -1;

    long long el = st.top();
    if (el < mini) return mini;
    return el;
  }

  int getMin() {
    return mini;
  }
};

int main(){
    MinStack *obj = new MinStack();
    obj->push(5);
    obj->push(2);
    obj->push(1);
    cout << "Minimum element: " << obj->getMin() << endl; // Should print 1
    cout << "Top element: " << obj->top() << endl; // Should print 1
    obj->pop();
    cout << "Top element after pop: " << obj->top() << endl; // Should print 2
    cout << "Minimum element after pop: " << obj->getMin() << endl; // Should print 2
    return 0;
}