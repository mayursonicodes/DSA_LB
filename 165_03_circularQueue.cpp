#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class CQueue{
    public:

        int size;
        int *arr;
        int front;
        int rear;

        CQueue(int size){
            this->size = size;
            arr = new int[size];
            front = -1;
            rear = -1;
        }

        void push(int data){

            //! Queue is full
            //todo We can also use this condition
            // if(rear == (front-1) % (size-1))
            if((front == 0 && rear == size-1) || (rear == front-1))
                cout<<"Q is full, cannot insert"<<endl;
            
            //! single element case -> first element
            else if(front == -1){
                front = rear = 0;
                arr[rear] = data;
            }

            //! circular nature
            else if(rear == size-1 && front != 0){
                rear = 0;
                arr[rear] = data;
            }

            //! normal flow
            else{
                rear++;
                arr[rear] = data;
            }
        }

        void pop(){

            //! Queue is empty
            if(front == -1)
                cout<<"Q is empty, cannot pop"<<endl;

            //! single element case
            else if(front == rear){
                arr[front] = -1;
                front = -1;
                rear = -1;
            }

            //! circular nature
            else if(front == size-1)
                front = 0;

            //! normal flow
            else
                front++;
        }
};

int main(){    

    return 0;
}