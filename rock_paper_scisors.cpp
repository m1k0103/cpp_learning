#include <iostream>
using namespace std;

// gets a random choice between rock, paper and scissors.
char get_random_choice(){
    srand(time(0));
    int random_num;
    random_num = (rand() % 3) + 1;
    cout << random_num;
    switch (random_num){
        case(1):
            return 'R';
        case(2):
            return 'P';
        case(3):
            return 'S';
    }

}


int main(){
    //menu
    cout << "Rock Paper Scissors" << "\n\n";
    cout << "What do you choose? (R)ock, (P)aper or (S)cissors?";

    // get choice
    char choice;
    cin >> choice;
    
    //if not empty
    if (choice != ' ' || NULL){
        char computer_choice = get_random_choice();
        // if the same, do a draw
        if (toupper(choice) == computer_choice){

            // do a draw
            cout << "Draw";

        }else if ((choice || computer_choice == 'R') && (choice || computer_choice == 'S')){
            // whoever has rock wins
            cout << "rock winds" << endl;
        } else if ((choice || computer_choice == 'R') && (choice || computer_choice == 'P')){
            // whoever has paper wins
             cout << "paper wins" << endl;
        }else if ((choice || computer_choice == 'P') && (choice || computer_choice == 'S')){
            // whoever has scissors wins
            cout << "scissors win" << endl;
        }


    }else{ //if empty
        cout << "Invalid response. It is empty.";
    }

    return 0;
}