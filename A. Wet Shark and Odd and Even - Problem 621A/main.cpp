#include <iostream>
#include <vector>
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {

    long long int a;
    long long int imparMenor = 0;
    long long int flag = 0;
    long long int sumaTotal = 0;
    vector<long long int> numeros;
    vector<long long int> numerosOrdenados;

    for (int i = 0; i < 2; i++) {
        string str;
        if(getline(cin,str)){
            istringstream sstr(str);
            int n;
            while(sstr >> n){
                if(flag == 1){
                    numeros.push_back(n);
                }
                if(flag == 0){
                    a = n;
                    flag++;
                }
            }
        }
    }

    for(auto numero:numeros){
        sumaTotal = sumaTotal + numero;
    }

    if(sumaTotal%2==0){
        cout << sumaTotal << endl;
    }else{

        numerosOrdenados = numeros;
        sort(numerosOrdenados.begin(),numerosOrdenados.end());

        for(auto numero:numerosOrdenados){
            if(numero%2!=0){
                imparMenor = numero;
                break;
            }
        }

        sumaTotal = sumaTotal - imparMenor;

        cout << sumaTotal << endl;
    }
}