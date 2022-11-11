#include <iostream>

using namespace std;

int main(){
//Qui vanno definite le variabili
cout << "inserire valori di a,b,c" << endl;
int a;
int b;
int c;
cin >> a >> b >> c;

//Qui va scritto il codice per eseguire i calcoli richiesti
cout << "areatriangolo:" << endl;
cout << (a * b) / 2 << endl;
cout << "areaquadrato:" << endl;
cout << a * a << endl;
cout << "arearettangolo:" << endl;
cout << a * b << endl;
cout << "areatrapezio:" << endl;
cout << ((a + a ) * c) / 2 << endl;

}
