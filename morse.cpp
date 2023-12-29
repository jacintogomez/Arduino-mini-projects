#include <iostream>
#include <vector>
using namespace std;

vector<char> tomorse(string ph){


int main(){
    string phrase;
    cout<<"Enter sentence: "<<endl;
    cin>>phrase;
    vector<char> morse=tomorse(phrase);

    return 0;
}