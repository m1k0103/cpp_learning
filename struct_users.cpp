#include <iostream>
#include <vector>
#include <string>
using namespace std;


// creating user structure with properties of the user
struct user{
    string username;
    string email;
    string name;
    string surname;
};


// creating vector containing the pointers to where the users are stored in memory
vector<user> allUsers[];


//the functions that will be used in the main function
void create_new_user(){
    user newUser;
    string username,email,name,surname;

    // gets inputs for all the new values
    cout << "\nUsername of new user: ";
    cin >> username;
    cout << "\nEmail of the new user: ";
    cin >> email;
    cout << "\nName of user: ";
    cin >> name;
    cout << "\nSurname of user: ";
    cin >> surname;

    // adds the values to the newUser
    newUser.username = username;
    newUser.email = email;
    newUser.name = name;
    newUser.surname = surname;

    // creates a pointer, stores in vector
    user usr = newUser;
    allUsers->push_back(usr);

};


void delete_user(){

};


void edit_user(){
};


void display_users(){
    for (int i=0; i < allUsers->size(); i++){
        cout << allUsers[i] << "\n";
    }
}


// main function
int main(){
    int i=0;
    while (i != 0){
        int choice;
        cout << "\n1) create new user\n2) delete a user\n3) edit a user's data\n4) display users\n5) quit\n\nWhat do you choose? ";
        cin >> choice;
        switch (choice){
            case 1:
                create_new_user();
            case 2:
                delete_user();
            case 3:
                edit_user();
            case 4:
                display_users();
            case 5:
                return 0;
        }
    
    }
}
