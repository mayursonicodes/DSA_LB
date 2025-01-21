#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class Stack{
    private:
        int* arr;
        int size;
        int top1;
        int top2;

    public:
        Stack(int size){
            arr = new int[size];
            this->size = size;
            top1 = -1;
            top2 = size;
        }

        //! Initialized all values of array to 0
        void allZero(){
            for(int i=0; i<size; i++){
                arr[i] = 0;
            }
        }

        void push1(int data){
            if(top2 - top1 == 1)
                cout<<"Stack1 Overflow"<<endl;
            else{
                top1++;
                arr[top1] = data;
            }
        }

        void pop1(){
            if(top1 == -1)
                cout<<"Stack1 Underflow"<<endl;
            else
                arr[top1] = 0;
                top1--;
        }

        void push2(int data){
            if(top2 - top1 == 1)
                cout<<"Stack2 Overflow"<<endl;
            else{
                top2--;
                arr[top2] = data;
            }
        }

        void pop2(){
            if(top2 == size)
                cout<<"Stack2 Underflow"<<endl;
            else
                arr[top2] = 0;
                top2++;

        }

        void print(){
            cout<<"Top1: "<<top1<<endl;
            cout<<"Top2: "<<top2<<endl;
            for(int i=0; i<size; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl<<endl;
        }
};

int main(){

    Stack st(10);
    st.allZero();
    st.print();

    st.push1(10);
    st.push1(20);
    st.push1(30);
    st.push1(40);
    st.push1(50);
    st.print();


    st.push2(100);
    st.push2(200);
    st.push2(300);
    st.push2(400);
    st.push2(500);
    st.print();

    st.pop1();
    st.print();

    return 0;
}