public class MinStack {

    private Stack<int> s;
    private Stack<int> min;
    
    public MinStack() {
        s = new Stack<int>();
        min = new Stack<int>();
    }
    
    public void Push(int val) {
        if (s.Count == 0 || val <= min.Peek())
            min.Push(val);
        s.Push(val);
    }
    
    public void Pop() {
        if (s.Peek() == min.Peek())
            min.Pop();
        s.Pop();
    }
    
    public int Top() { return s.Peek(); }
    
    public int GetMin() { return min.Peek(); }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.Push(val);
 * obj.Pop();
 * int param_3 = obj.Top();
 * int param_4 = obj.GetMin();
 */
