#include <iostream>
using namespace std;

int main(){
    string str = "hello there! my name is mikolaj and i am a terrible programmer! lol";
    unsigned first = str.find("there!");
    unsigned last = str.find_last_of("!");
    string strBetween = str.substr(first, last-first);
    cout << strBetween;
    return 0;
}