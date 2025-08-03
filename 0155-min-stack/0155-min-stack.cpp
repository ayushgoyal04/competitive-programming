#include <stack>
#include <climits>
using namespace std;

class MinStack {
public:
    stack<long long> st;  // use long long to avoid overflow
    long long mini = LLONG_MAX;

    MinStack() {}

    void push(int val) {
        long long x = val;
        if (st.empty()) {
            mini = x;
            st.push(x);
        } else {
            if (x >= mini) {
                st.push(x);
            } else {
                st.push(2LL * x - mini);  // store modified value
                mini = x;
            }
        }
    }

    void pop() {
        if (st.empty()) return;

        long long topVal = st.top();
        st.pop();

        if (topVal < mini) {
            mini = 2LL * mini - topVal;  // recover previous min
        }
    }

    int top() {
        long long topVal = st.top();
        if (topVal >= mini) {
            return topVal;
        } else {
            return mini;  // real top was encoded, return current min
        }
    }

    int getMin() {
        return mini;
    }
};
