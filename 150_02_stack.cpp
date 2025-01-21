#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class Stack{
    private:
        int* arr;
        int top;
        int size;

    public:
        Stack(int size){
            arr = new int[size];
            this->size = size;
            top = -1;
        }

        // void push(int data){
        //     if(top >= size-1){
        //         cout<<"Stack Overflow"<<endl;
        //     }
        //     else{
        //         top++;
        //         arr[top] = data;
        //     }
        // }

        void push(int data){
            if(size-top > 1){
                top++;
                arr[top] = data;
            }
            else{
                cout<<"Stack Overflow"<<endl;
            }

        }

        void pop(){
            if(top == -1){
                cout<<"Stack Underflow"<<endl;
            }
            else{
                top--;
            }
        }

        int getTop(){
            if(top == -1){
                cout<<"There is no element in stack"<<endl;
            }
            else{
                return arr[top];
            }
        }

        int getSize(){
            return top+1;
            }

        bool isEmpty(){
            if(top == -1)
                return true;
            else
                return false;
        }
};

int main(){

    Stack st(5);

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(999);

    cout<<st.getTop()<<endl;
    cout<<st.getSize()<<endl;

    while(!st.isEmpty()){
        cout<<st.getTop()<<" ";
        st.pop();
    }

    cout<<endl<<endl;

    cout<<st.getTop()<<endl<<endl;

    cout<<st.getSize()<<endl;

    return 0;
}