#include <iostream>

using namespace std;

int main()
{
 string Nama;
 string Nim;
 int usia;

 cout << "Masukan Nama :";
 cin >> Nama;
 cout << "Masukan Usia :";
 cin>> usia;

int i =0;
   do {
    cout <<Nama <<endl;
    i++;
   }while ( i<usia);


    return 0;
}
