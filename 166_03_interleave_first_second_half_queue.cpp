//! Interleave the First Half of the Queue with Second Half

#include<iostream>
#include<vector>
#include<string.h>
#include<queue>
#include<stack>
using namespace std;

void interleaveQueue(queue<int> &q){

    int totalSize = q.size();

    if(q.empty())
        return;

    queue<int> firstHalf;
    int firstHalfSize = totalSize/2;

    //todo Step 1: Seprate both halves
    while(firstHalfSize--){
        firstHalf.push(q.front());
        q.pop();
    }

    //todo Step 2: interleaving start kardo
    while(!firstHalf.empty() && !q.empty()){
        int firstElement = firstHalf.front();
        firstHalf.pop();
        q.push(firstElement);

        int secondElement = q.front();
        q.pop();
        q.push(secondElement);
    }

    //todo Step 3: odd size wala case
    if(totalSize & 1){
        q.push(q.front());
        q.pop();
    }
}

int main(){

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    // q.push(70);

    interleaveQueue(q);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}