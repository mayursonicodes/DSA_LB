// ! Vector --> Dynamic array

// Always do double its size if overflow

// vector <int> arr; --> vector of size 0
// vector <int> arr(5); --> vector of size 5 with each element 0
// vector <int> arr(5, 2); --> vector of size 5 with each element 2
// vector <int> arr{10, 20, 30}; --> vector of size 3 with element 10,20,30

// arr.push_back(12);
// arr.pop_back();
// sizeof() and size() are different
// arr.size(); --> Total number of elements currently stored in vector
// arr.capacity(); --> Total number of elements that can be store in vector
// arr.empty();

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr(5);
    arr.push_back(2);
    cout<<arr.capacity()<<endl;

    return 0;
}