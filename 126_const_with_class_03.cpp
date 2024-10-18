//! if the function of a class is constant, then we cannot change the value of any varible in that function of that class

//todo more in video (mutable, initialization list)

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class abc{
    int x;
    int *y;

    public:
        abc(){
            x = 0;
            y = new int(0);
        }

        int getX() const{
            // x = 10; //! give error as this function is constant
            return x;
        }

        void setX(int val){
            x = val;
        }

        int getY(){
            return *y;
        }

        void setY(int val){
            *y = val;
        }

};

int main(){

    

    return 0;
}