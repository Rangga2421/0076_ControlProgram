#include <iostream>
using namespace std;

int main(){
    float nilBI,nilMT,rerata;
    string status;

    cout << "Masukkan nilai Bahasa Inggris = ";
    cin >> nilBI;
    cout << "Masukkan nilai Matematika = ";
    cin >> nilMT;

    rerata = (nilBI+nilMT)/2;

    if (rerata >= 60)
        status = "Lolos";
    else
        status = "Gagal";

    cout << "Status kelulusan = "<<status<<" ,dengan nilai rerata = "<<rerata<<endl;
}