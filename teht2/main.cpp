#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Game {
public:
    Game(int max);
    ~Game();
    void play();

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
    void printGameResult();
};

Game::Game(int max) : maxNumber(max), numOfGuesses(0) {
    srand(time(nullptr));
    randomNumber = rand() % maxNumber + 1;
}

Game::~Game() {

}

void Game::play() {
    cout << "Arvaa satunnaisesti valittu luku valilla 1-" << maxNumber << endl;

    do {
        cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess > randomNumber) {
            cout << "Arvauksesi on liian suuri. Yrita uudelleen." << endl;
        } else if (playerGuess < randomNumber) {
            cout << "Arvauksesi on liian pieni. Yrita uudelleen." << endl;
        }

    } while (playerGuess != randomNumber);

    cout << "Arvauksesi on oikein!" << endl;
    printGameResult();
}

void Game::printGameResult() {
    cout << "Arvausten maara: " << numOfGuesses << endl;
}

int main() {
    int maxNumber;
    cout << "Valitse korkein etsittava luku:" << endl;
    cin >> maxNumber;

    Game game(maxNumber);
    game.play();

    return 0;
}
