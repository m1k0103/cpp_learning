#include <iostream>
#include <fstream>
using namespace std;


int main(){
    // create and open file
    ofstream textFile("textFile.txt");

    // write to file
    textFile << "This is a very cool file. Just dont use a file to file me down!!!!! Just sayin...";

    //close to file
    textFile.close();
    
    return 0;
}