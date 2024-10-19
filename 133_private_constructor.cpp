//? LECTURE LEFT
//! Yes, constructor can be made private
//! we can use private constructor using another class (In lecture)

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class Box{
    int width;
    Box(int w) : width(w){};

    public:
        int getWidth() const{
            return width;
        }

        void setwidth(int val){
            width = val;
        }
};

int main(){

    Box b(5);
    cout<<b.getWidth()<<endl;

    return 0;
}