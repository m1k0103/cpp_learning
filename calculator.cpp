#include <iostream>
using namespace std;

void make_calc(char choice){
    switch(tolower(choice)){
        double n1, n2;
        case 'a':
            cout << "1st number to add: ";
            cin >> n1;

            cout << "2nd number to add: ";
            cin >> n2;

            cout << "\nResult: " << n1+n2 << "\n\n";
            break;
        
        case 's':
            cout << "1st number to subtract: ";
            cin >> n1;

            cout << "2nd number to subtract: ";
            cin >> n2;

            cout << "\nResult: " << n1-n2  << "\n\n";
            break;
        case 'm':
            cout << "1st number to multiply: ";
            cin >> n1;

            cout << "2nd number to multiply: ";
            cin >> n2;

            cout << "\nResult: " << n1*n2 << "\n\n";
            break;
        case 'd':
            cout << "1st number to divide: ";
            cin >> n1;

            cout << "2nd number to divide: ";
            cin >> n2;

            cout << "\nResult: " << n1/n2 << "\n\n";
            break;
        default:
            cout << "Sorry but you entered an incorrect option. Try again.";
            break;
    }
}


int main(){
    int i = 1;
    char choice;
    while (i){
        cout << "Welcome to calculator! \n(A)dd, (S)ubtract, (M)ultiply, (D)ivide?\n\nWhat do you want to do: ";
        cin >> choice;
        make_calc(choice);
    }


}