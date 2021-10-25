class MinStack {

    private Stack<Integer> s;
    private Stack<Integer> min;
    
    public MinStack() {
        s = new Stack<Integer>();
        min = new Stack<Integer>();
    }
    
    public void push(int val) {
        if (s.empty() || val <= min.peek())
            min.push(val);
        s.push(val);
    }
    
    public void pop() {
        if (s.peek().equals(min.peek()))
            min.pop();
        s.pop();
    }
    
    public int top() { return s.peek(); }
    
    public int getMin() { return min.peek(); }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */