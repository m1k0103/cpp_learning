#include <iostream>
using namespace std;

int factorial(int num){
    if (num > 1){
        return num * factorial(num-1);
    }
    else{
        return num;
    }
}



int main(){
    int start_num;
    cin >> start_num;
    int total = factorial(start_num);

    cout << total << "\n";
    return 0;
}