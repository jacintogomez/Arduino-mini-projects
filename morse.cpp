#include <iostream>
#include <vector>
using namespace std;

vector<char> bank(char d){
    vector<char> r;
    if(d=='a'){r={'.','-'};}
    return r;
}

vector<vector<char>> tomorse(string ph){
    vector<vector<char>> collect;
    for(char d:ph){
        collect.push_back(bank(d));
    }
    return collect;
}

void blink(vector<vector<char>> in){
    for(vector<char> i:in){
        for(char j:i){
            cout<<j;
        }
        cout<<endl;
    }
}

int main(){
    string phrase;
    cout<<"Enter sentence: "<<endl;
    cin>>phrase;
    vector<vector<char>> morse=tomorse(phrase);
    blink(morse);
    return 0;
}