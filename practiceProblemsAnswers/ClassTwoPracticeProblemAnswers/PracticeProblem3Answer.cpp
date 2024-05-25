#include <iostream>

using namespace std;

int main(){
    double num = 6.99;    // you can use any double -- just make sure it's 6.(something)

    int result = static_cast<int>(num);
    cout << result << endl;
}