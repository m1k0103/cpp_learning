#include <iostream>
#include <ctime>
using namespace std;


int main(){

    //get current timestamp for current date & time
    time_t timestamp;
    time(&timestamp);

    // display date and time derrived from timestamp
    cout << ctime(&timestamp);

    // does same thing, but just no pointer when passing in NULL
    cout << time(NULL);

    time_t timestamp = time(&timestamp);
    struct tm datetime = *localtime(&timestamp);

    cout << datetime.tm_hour;

}