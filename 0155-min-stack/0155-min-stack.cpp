class MinStack {
private:
    stack<int> s;
    stack<int> minSt;
public:
    MinStack() {}
    void push(int val) {
        s.push(val);
        if (minSt.empty()) {
            minSt.push(val);
        } else {
            minSt.push(min(val, minSt.top()));
        }
    }
    void pop() {
        s.pop();
        minSt.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return minSt.top();
    }
};