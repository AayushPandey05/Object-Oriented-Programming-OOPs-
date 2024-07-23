//!...Static Member....
#include<iostream>
using namespace std;

class Player {
    public:
        static int Count;
        Player(){  //!..When Player Joins the game the count increase.
            Count++;
        }
        ~Player(){  //!..When Player leaves the game the count decrease.
            Count --;
        }
};
int Player::Count=0;
int main(){
    Player p1;
    cout<<Player::Count<<endl;
    {
        Player p2;
        cout<<Player::Count<<endl;
    }
    cout<<Player::Count<<endl;
    return 0;
}
