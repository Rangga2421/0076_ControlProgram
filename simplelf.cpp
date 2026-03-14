#include <iostream>
using namespace std;

int main(){
    int x;

    srand(time(0));
    x = rand();

    cout << "Bilangan yang diberikan = " << x;
}