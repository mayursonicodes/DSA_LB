#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class Queue{
    public:
        int size;
        int *arr;
        int front;
        int rear;
    
        Queue(int size){
            this->size = size;
            arr = new int[size];
            front = 0;
            rear = 0;
        }
        
        void push(int val){
            if(rear == size)
                cout<<"Queue is full"<<endl;
            else{
                arr[rear] = val;
                rear++;
            }
        }
        
        void pop(){
            if(front == rear)
                cout<<"Queue is empty"<<endl;
            else{
                arr[front] = -1;
                front++;
                
                if(front == rear){
                	front = 0;
                    rear = 0;
                }
            }
        }
        
        int queueSize(){
            return rear - front;
        }
        
        bool isEmpty(){
        	if(front == rear) return true;
            else return false;
        }
        
        int getFront(){
            if(rear == front)
                return -999999999;
            else
                return arr[front];
        }
        
        void displayQueue(){
            if(rear == front){
                cout<<"Queue is empty, can't display element"<<endl;
                return;
            }
            for(int i = front; i<rear; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

int main(){

    Queue q(10);
    
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    // q.push(50);
    
    cout<<"Size of queue is "<<q.queueSize()<<endl;
    
    q.displayQueue();
    
    q.pop();
    q.pop();
    q.pop();
    cout<<"Size of queue is "<<q.queueSize()<<endl;
    q.displayQueue();
    
    cout<<"Front element of Queue is "<<q.getFront()<<endl;
    q.displayQueue();
    
    cout<<"Is queue is empty "<<q.isEmpty();
    
    return 0;
}