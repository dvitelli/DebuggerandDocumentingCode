#include <iostream>

int main() {

    bool inputtingNumbers = true;
    std::string entry;
    double testScores[100];
    int counter = 0;
    double runningTotal;

    while (inputtingNumbers == true) {

        std::cout << "Enter a test score(enter 0 to exit): " << std::endl;
        std::cin >> entry;

        double input = atof(entry.c_str());

        if (input == 0){

            inputtingNumbers = false;

        }

        else {

            testScores[counter] = input;
            ++counter;

        }

    }

    for(int i = 0; i < counter; i ++){

        std::cout << testScores[i] << std::endl;
        runningTotal += testScores[i];

    }

    std::cout <<"Test Average is: " << (runningTotal/counter);

}
