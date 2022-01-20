class MyCircularQueue {
private:
    vector<int> q;
    int head, tail;
public:
    MyCircularQueue(int k) {
        q.resize(k);
        head=-1;
        tail=-1;
    }
    
    bool isEmpty() {
        if(head == -1)
            return true;
        return false;
    }
    
    bool isFull() {
        if(tail == head-1 || (head==0 && tail == q.size()-1))
            return true;
        return false;
    }
    
    bool enQueue(int value) {
        if(isFull())
            return false;
        if(head == -1)
            head++;
        if(tail == q.size()-1)
            tail = 0;
        else
            tail++;
        q[tail] = value;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty())
            return false;
        if(head==tail){
            head = -1;
            tail = -1;
        }
        else if(head == q.size()-1)
            head=0;
        else
            head++;
        return true;
    }
    
    int Front() {
        if(isEmpty())
            return -1;
        return q[head];
    }
    
    int Rear() {
        if(isEmpty())
            return -1;
        return q[tail];
    }
    

};
