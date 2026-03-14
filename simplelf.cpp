#include <iostream>
using namespace std;

int main(){
    int x;

    srand(time(0));
    x = rand() % 10;

    cout << "Bilangan yang diberikan = " << x;
}