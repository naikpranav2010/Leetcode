class MinStack {
public:
    vector<int> arr;
    
    MinStack() {
        arr = vector<int>();    
    }
    
    void push(int val) {
        arr.push_back(val);
    }
    
    void pop() {
        arr.pop_back();
    }
    
    int top() {
        return arr.back();
    }
    
    int getMin() {
        // int min = INT_MAX;
        // for (int i : arr)
        //     if (i < min)
        //         min = i;
        
        return *min_element(arr.begin(), arr.end());
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */