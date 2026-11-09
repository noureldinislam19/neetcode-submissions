class MinStack {
    vector<int>st; 
    int mn = INT_MAX;
public:
    MinStack() {
    }
    
    void push(int val) {
        st.push_back(val);
        mn = min(mn , val);
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {        
        return *min_element(st.begin(),st.end());
    }
};
