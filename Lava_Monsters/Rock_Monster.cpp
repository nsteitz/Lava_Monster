//
// Created by Nathan Steitz on 10/2/23.
//
#include <iostream>
#include <memory>
#include <vector>
#include <ctime>

using namespace std;
#include "Rock_Monster.h"

Rock_Monster::Rock_Monster(): Lava_Monster(), hit(false){
}

Rock_Monster::Rock_Monster(int npb) : Lava_Monster(npb), hit(false){
};


bool Rock_Monster::person_hit(){
    if(hit){
        return false;
    }else{
        hit = true;
        return true;
    }
}


string Rock_Monster::scare(){
    //print the rock monster awakening
    cout<<"OH NO LOOK OUT, be ready to dodge"<<endl;
    cout<<"TYPE D to duck or J to jump"<<endl;
    //create while loop to keep the game going until the user fails
    //make the loop stop when the user dodges three rock
    bool keepGoing = true;
    int count = 0;
    while(keepGoing && count != 3) {
        string choice;
        //string junk;
        //input validation
        getline(cin, choice);
        while (choice != "D" && choice  != "d" && choice != "J" && choice != "j") {
            cout << "Invalid, please type J or D (case insensitive)";
            cin.clear();
            getline(cin, choice);
        }
        //make teh move either jump or duck
        vector<string> move;
        //random number
        //push back different moves
        srand(time(NULL));
        if (rand() % 2) {
            move.push_back("D");
            move.push_back("d");
        } else {
            move.push_back("J");
            move.push_back("j");
        }
        //see if user choice is the correct move
        for (int i = 0; i < move.size(); i++) {
            //cout<<move[i];
            if (move[i] == choice) {
                keepGoing = true;
                if(i == 1) {
                    cout << "NICE DODGE" << endl;
                    cout<<"TYPE D to duck or J to jump"<<endl;
                    count++;
                }
            }
            else{
                if(i == 1)
                    cout<<"NOOOO YOU'VE BEEN HIT !! It's merely a flesh wound"<<endl;
                keepGoing = false;
                hit = true;
            }
        }
        //clear the vector for next round
        move.clear();
    }
    //if you win or loose
    string win;
    if(count == 3){
        win = "YES";
        cout<<"NICE WIN"<<endl;
    }else{
        win = "NO";
    }

    return win;
}
