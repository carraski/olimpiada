#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int n;
    int a;
    string temp;
    vector<string> rachas;	
    vector<int> vl;
    cout <<"di cuantas rachas quieres que te analice";
    cin >> n;
    while (cin.peek()=='\n'){cin.ignore();};
    for (int i=0 ; i<n ; i++){
        getline (cin, temp); 
        rachas.push_back(temp);
    }
    for(int i=0 ; i<n ; i++){
        istringstream ss(rachas[i]);
        //esto convierte el string en un stram
        vl.clear();
        while(ss >> a){vl.push_back(a)}
        if(vl.size()>0){
            resultado=racha(vl, vl.size());
            cout << resultado <<" ";
        } else {cout << "0 ";}
    }
}

int racha(vector<int>)