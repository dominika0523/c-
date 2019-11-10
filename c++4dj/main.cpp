#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include "time.h"

using namespace std;



enum work_days{
    poniedzialek,wtorek,sroda,czwartek,piatek
};
enum months{
    STYCZEN = 1,LUTY,MARZEC,KWIECIEN,MAJ,CZERIWEC,LIPIEC,SIERPIEN,WRZESIEN,PAZDZIERNIK,LISTOPAD,GRUDZIEN
};
void enumTest(){
    work_days today = piatek;
    work_days nextDay = wtorek;
//    work_days strangeDay = sobota;
    cout << "Dzis jest " << today << " musze isc do szkoly :-(" << endl;
    cout << "Jutro jest " << nextDay << " rowniez musze isc do szkoly :-(" << endl;

    cout << "Index: " << today << " wartosc: " << work_days::poniedzialek << endl;
    if(work_days::piatek == today){
        cout << "jest piatek! " << endl;
    } else {
        cout << "jeszcze nie ma piatku " << endl;
    }
}
void classifyMonths(){
    months wiosna [] = {MARZEC,KWIECIEN,MAJ,CZERIWEC};
    months lato [] = {CZERIWEC,LIPIEC,SIERPIEN,WRZESIEN};
    months jesien [] = {WRZESIEN,PAZDZIERNIK,LISTOPAD,GRUDZIEN};
    months zima [] = {GRUDZIEN,STYCZEN,LUTY,MARZEC};

    months pory_roku [4][4] =   {
                            {MARZEC,KWIECIEN,MAJ,CZERIWEC},
                            {CZERIWEC,LIPIEC,SIERPIEN,WRZESIEN},
                            {WRZESIEN,PAZDZIERNIK,LISTOPAD,GRUDZIEN},
                            {GRUDZIEN,STYCZEN,LUTY,MARZEC}
                                };
}

void stringTest(){
    string name1 = "Ala";
    string name2 = "ala";

cout << name1 << "zawiera" << name1.length() << "znaki" << endl;
cout << name2 << "zawiera" << name2.length() << "znaki" << endl;

cout << "dodaje Ala do ala: " << (name1 +" "+ name2) << endl;
cout << "dodaje Ala do ala: " << (name1 +"\n"+ name2) << endl;

cout << "dodaje Ala do ala: " << (name1 +"\t "+ name2) << endl;


if (name1 == name2){
    cout << "TAK " << endl;
}else{
    cout << "NIE" << endl;
}

string newName = name1.insert(2,"xxx");
cout << newName << endl;
name1.replace(2,3,"");
cout << name1 << endl;

string sentence = "Ala ma kota";
string kot = sentence.substr(7,3);
cout << kot << endl;
cout << sentence << endl;



//zaabierz ali kota i wyswietl zd
sentence.replace(7,4,"");
cout << sentence << endl;
//zamien ali kota na gitare
sentence = sentence + "gitare";
cout << sentence << endl;
//
cout << sentence.find("a") << endl;
cout << sentence.find("kot") << endl;

cout << sentence.find("gitar") << endl;


}

void ex20(){
    string name;
    cout << "Podaj imie: " << endl;
    getline(cin, name);

    if((name[name.length()-1] == 'a') || (name[name.length()-1] == 'A')){
        cout << "Szanowna Pani " + name.replace(name.length()-1,1,"o") << endl;
    } else {
        cout << "Szanowny Panie "+name + "ie" << endl;
    }

}
void ex21(){
    cout << "Wpisz zdanie" << endl;
    string sentence;
    getline(cin,sentence);

    // petle zmieniaj¹ca wszystkie znaki w zdaniu na ma³e
    for (int i = 0; i < sentence.length() ; i++) {
        sentence[i] = tolower(sentence[i]);
    }
    // zmiana pierwszego znaku na wielk¹ literê
    sentence[0] = toupper(sentence[0]);
    // sprawdzenie czy jest kropka -> jeœli nie to dodanie . do zdania
    if(sentence[sentence.length()-1] != '.'){
       sentence += ".";
    }
    cout << "Twoje zdanie: " << sentence << endl;

string words[100];
string word;
int index = 0;
for (int i = 0; i < sentence.length(); i++){
    if (sentence[i] == ' '){
        words [index] = word;
        index++;
        word = "";
    }else{
word += sentence[i];
    }
}
words[index] = word;

for (int j = 0; j<= index; j++){
    cout << words[j] << endl;
}

}
// funkcja przyjmuje dwa argumenty i zwraca wynik dzia³ania
double addNumbers(double num1, double num2){
    double result = num1 + num2;
    return result;
}
string naZdrowie(bool czyKtosKichnal){
    if(czyKtosKichnal){
        return "Na zdrowie!";
    } else {
        return "Nikt nie kichnal";
    }
}
bool generatorKichania(){
    srand(time(NULL));
    return rand() % 2;
}
int sumAllElements(int tab[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + tab[i];
    }
    return sum;
}
double getAvg(int sum, int size){
    return (double)sum/size;
}


int factorial(int n ){
int result = 1;
while (n > 1){
    result = result * n;

    n--;
}
return result;
}
int
factorialRec(int n){
    if(n==1){
            return 1;
    }
    return factorialRec(n-1);
}


int getFibonacciSum(int n ){
    int fib[100];
    int sum = 0;
    for (int i = 0; i < n; ++i){
        if (i == 0 || i == 1){
        fib[i] = 1;
      }  else {
      fib[i] = fib[i-1] + fib[i-2];
      }
      sum += fib[i];
}
return sum;
}


double calcDistance(int x1, int y1, int x2, int y2 ){
    return sqrt(pow(x2-x1,2)+ (pow(y2-y1,2)));

}

double calcDistance3d(int x1, int y1, int x2, int y2, int z1, int z2   ){
    return sqrt(pow(x2-x1,2)+ (pow(y2-y1,2))+ (pow(z2-z1,2)));
}

string colour = "white";

string returnDifferentValues(){
    if (colour == "white"){
       colour == "black";
        }else{
        }colour ="white";

}
return colour;
}


int main() {
   cout << returnDifferentValues ()<< endl;
    cout << returnDifferentValues ()<< endl;
     cout << returnDifferentValues ()<< endl;
      cout << returnDifferentValues ()<< endl;
       cout << returnDifferentValues ()<< endl;
   return 0;
}


...c
