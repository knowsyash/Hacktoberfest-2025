class MyQueue {
public:
    int arr[110];
    int front = 0;
    int rear = 0;
    MyQueue() {
        arr[110];
        front = 0;
        rear = 0;
    }
    
    void push(int x) {
        arr[rear++]=x;
    }
    
    int pop() {
        return arr[front++];
    }
    
    int peek() {
        return arr[front];
    }
    
    bool empty() {
        if(front==rear)
        {
            return true;
        }
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
