//
// Created by Nathan Steitz on 10/3/23.
//

#include <iostream>
#include <memory>
#include <vector>
#include <fstream>
#include <cassert>
#include <iomanip>
#include <string>

using namespace std;
#include "Crack_Monster.h"

Crack_Monster::Crack_Monster() : Lava_Monster(), engulfed(false){
}

Crack_Monster::Crack_Monster(int npb) : Lava_Monster(npb), engulfed(false){
};

bool Crack_Monster::person_swallowed() {
    if(engulfed){
        return false;
    }else{
        engulfed = true;
        return true;
    }
}

string Crack_Monster::scare(){

    //creating a vector of quotes and reading in from a file
    //variables to keep track of quote
    int harryCount = 0;
    int hermioneCount = 0;
    int snapeCount = 0;
    string answer;

    vector<string> quotes;
    srand(time(NULL));
    int randNum = rand() % 10;
    if(randNum < 4) {
        //harry potter
        harryCount++;
        answer = "P";
        //vector<string> potter;
        ifstream fPotter;
        fPotter.open("../potter.txt");
        if (!fPotter.is_open())
            cout << "FILE NOT OPEN harry";
        string line;
        while (fPotter && fPotter.peek() != EOF) {
            getline(fPotter, line);
            quotes.push_back(line);
        }
        fPotter.close();
    }

    if(randNum >= 4 && randNum <= 6) {
        //snape
        snapeCount++;
        answer = "S";
        //vector<string> snape;
        ifstream fSnape;
        fSnape.open("../snape.txt");
        if (!fSnape.is_open())
            cout << "FILE NOT OPEN Snape";
        string line2;
        while (fSnape && fSnape.peek() != EOF) {
            getline(fSnape, line2);
            quotes.push_back(line2);
        }
        fSnape.close();
    }

    //herminoe
    if(randNum >= 7) {
        hermioneCount++;
        //vector<string> hermione;
        answer = "H";
        ifstream fHermione;
        fHermione.open("../hermione.txt");
        if (!fHermione.is_open())
            cout << "FILE NOT OPEN Hermione";
        string line3;
        while (fHermione && fHermione.peek() != EOF) {
            getline(fHermione, line3);
            quotes.push_back(line3);
        }
        fHermione.close();
    }

    //cout<<"You're going to have to quess a Harry Potter quote"<<endl;
    cout<<"Enter S if you think it's Professor Snape, P for Harry Potter, and H for Hermione"<<endl;
    cout<<""<<endl;

    int randomNum2 = (rand() % 4);
    if(harryCount == 1)
        cout<<quotes[randomNum2]<<endl;

    if(snapeCount == 1)
        cout<<quotes[randomNum2]<<endl;

    if(hermioneCount == 1)
        cout<<quotes[randomNum2]<<endl;

    string choice;
    cout<<"Answer: ";
    getline(cin,choice);
    while (choice != "H" && choice != "S" && choice != "P") {
        cout << "Invalid, please type P, H, or S (must be capital)";
        cin.clear();
        getline(cin, choice);
    }

    string win;
    if(answer == choice) {
        win = "YES";
        cout << "NICE GUESS YOU SURVIVE THIS TIME"<<endl;
    }else{
        cout << "OOH wrong choice I'd be careful if i were you"<<endl;
        win = "NO";
    }


    return win;
}



