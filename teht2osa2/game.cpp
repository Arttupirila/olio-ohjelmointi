#include <iostream>
#include <cstdlib>
#include <ctime>
#include "game.h"

using namespace std;



Game::Game(int max):maxNumber(max),numOfGuesses(0){
    cin>>maxNumber;
    srand(time(nullptr));
    randomNumber = rand() % maxNumber + 1;

    cout<<"GAME CONSTRUCTOR: object initialized with "<<maxNumber<<" as a maximum value"<<endl<<"Give your guess between 1-"<<maxNumber<<endl;

}

Game::~Game() {
    cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<endl;
}

void Game::play() {


    do {
        cin >> playerGuess;
        numOfGuesses++;


        if (playerGuess > randomNumber) {
            cout <<"Your guess is too big"<<endl<<"Give your guess between 1-"<<maxNumber<<endl;
        } else if (playerGuess < randomNumber) {
            cout <<"Your guess is too small"<<endl<<"Give your guess between 1-"<<maxNumber<<endl;
        }

    } while (playerGuess != randomNumber);

    cout << "Your guess is right = "<<playerGuess << endl;
    printGameResult();
}

void Game::printGameResult() {
    cout << "You guessed the right answer = "<<playerGuess<<" with "<<numOfGuesses<<" guesses"<<endl;
}

