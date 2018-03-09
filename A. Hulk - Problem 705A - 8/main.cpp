#include <iostream>

using namespace std;

int main() {

    int a;
    string firstWord = "I hate ";
    string secondWord = "I love ";
    string stringResult = "";
    bool flag = true;

    cin >> a;

    for(int i=0; i < a; i++){


        if(i != a-1){
            if(flag){
                stringResult = stringResult + firstWord + "that ";
                flag = false;
            }else{
                stringResult = stringResult + secondWord + "that ";
                flag = true;
            }
        }else{
            if(flag){
                stringResult = stringResult + firstWord + "it ";
                flag = false;
            }else{
                stringResult = stringResult + secondWord + "it ";
                flag = true;
            }
        }
    }

    cout << stringResult << endl;

}