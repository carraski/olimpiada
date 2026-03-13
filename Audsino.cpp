#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int racha(vector<int> &a, int largo);
void PideRachas(int N, vector<string> &v);

int main(){
    int a;
    int N;
    int resultado;
    string temp;
    vector<string> rachas;	
    vector<int> vl;
    cout <<"di cuantas rachas quieres que te analice";
    cin >> N;
    PideRachas(N, rachas);

    for(int i=0 ; i<N ; i++){
        istringstream ss(rachas[i]);
        //esto convierte el string en un stram
        vl.clear();
        while(ss >> a){vl.push_back(a);}
        if(vl.size()>0){
            resultado = racha(vl, vl.size());
            cout << resultado <<" ";
        } else {cout << "0 ";}
    }
}

int racha(vector<int> &a, int largo){
    if (largo<1) {return 0;};
    int MejorRacha = a[0];
    int suma = a[0];
    for(int i=1; i<largo; i++){
        if(suma + a[i]<a[i]){
            suma=a[i];
        }else{
            suma+=a[i];
        }
        if(suma>MejorRacha){MejorRacha=suma;}
    }
    return MejorRacha;
}

void PideRachas(int N, vector<string> &v){
    string R;
    while(cin.peek()=='\n'){cin.ignore();}
    for(int k=0;k<N;k++){
        getline(cin, R);
            v.push_back(R);
    }
}
//tengo que hacer un if racha=0 entonces decir si y si no pues no
//por tanto tengo que quitar lo de que no cuente las restas y demás
//lo tiene que contar todo vaya