// DSA Project 1: Guess & Win
#include<iostream>
using namespace std;
class Guesser{
    int guessnum;
    public:
    int TakeGuesserInput(){
        int x;
        cout<<"Enter The Number for The Guesser: ";
        cin>>x;
        guessnum = x;
        return guessnum;
    }
};
class Player{
    int playernum;
    public:
    int TakePlayerInput(){
        int x;
        cin>>x;
        playernum = x;
        return playernum;
    }
};
class Umpire{
    public:
    int g;
    void GetTheNumberFromGuesser(){
        Guesser g1;
        g = g1.TakeGuesserInput();
    }
    int p1num,p2num,p3num;
    void GetTheNumberFromPlayers(){
        Player p1,p2,p3;
        cout<<"Enter The Number for Player 1: ";
        p1num = p1.TakePlayerInput();
        cout<<"Enter The Number for Player 2: ";
        p2num = p2.TakePlayerInput();
        cout<<"Enter The Number for Player 3: ";
        p3num = p3.TakePlayerInput();
    }
    void PrintTheResult(){
        if(g == p1num){
            if(g == p2num){
                if(g == p3num){
                    cout<<"All The Players won the Game!"<<endl;
                }
                else{
                    cout<<"The Players 1 & 2 won the Game!"<<endl;
                }
            }
            else{
                if(g == p3num){
                    cout<<"The Players 1 & 3 won the Game!"<<endl;
                }
                else{
                    cout<<"The Player 1 won the Game!"<<endl;
                }
            }
        }
        else if(g == p2num){
            if(g == p3num){
                cout<<"The Players 2 & 3 won the Game!"<<endl;
            }
            else{
                cout<<"The Player 2 won the Game!"<<endl;
            }
        }
        else if(g == p3num){
            cout<<"The Player 3 won the Game!"<<endl;
        }
        else{
            cout<<"All The Players lost the Game!"<<endl;
        }
    }
};
int main(){
    cout<<"--------------------Let's start the Guess & Win Game--------------------\n";
    Umpire u;
    u.GetTheNumberFromGuesser();
    u.GetTheNumberFromPlayers();
    u.PrintTheResult();
    cout<<"--------------------End Game--------------------";
    return 0;
}