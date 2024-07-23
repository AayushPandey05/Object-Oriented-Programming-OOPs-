//!>....Static Member Function...
#include<iostream>
using namespace std;

class Player{

    private:
        static int Count;
    public:
        Player(){
            Count++ ;
        }
        ~Player(){
            Count-- ;
        }
        static int getCount(){
            return Count ;
        }
};
int Player::Count=0;
int main() {
    Player p1,p2;
    cout<< Player::getCount();
    return 0;
}