#include <iostream>
#include <vector>
using namespace std;

vector<char> bank(char d){
    vector<char> r;
    if(d=='a'){r={'.','-'};}
    if(d=='b'){r={'-','.','.','.'};}
    if(d=='c'){r={'-','.','-','.'};}
    if(d=='d'){r={'-','.','.'};}
    if(d=='e'){r={'.'};}
    if(d=='f'){r={'.','.','-','.'};}
    if(d=='g'){r={'-','-','.'};}
    if(d=='h'){r={'.','.','.','.'};}
    if(d=='i'){r={'.','.'};}
    if(d=='j'){r={'.','-','-','-'};}
    if(d=='k'){r={'-','.','-'};}
    if(d=='m'){r={'-','-'};}
    if(d=='n'){r={'-','.'};}
    if(d=='o'){r={'-','-','-'};}
    if(d=='p'){r={'.','-','-','.'};}
    if(d=='q'){r={'-','-','.','-'};}
    if(d=='r'){r={'.','-','.'};}
    if(d=='s'){r={'.','.','.'};}
    if(d=='t'){r={'-'};}
    if(d=='u'){r={'.','.','-'};}
    if(d=='v'){r={'.','.','.','-'};}
    if(d=='w'){r={'.','-','-'};}
    if(d=='x'){r={'-','.','.','-'};}
    if(d=='y'){r={'-','.','-','-'};}
    if(d=='z'){r={'-','-','.','.'};}
    if(d==' '){r={'.','.','.','.','.','.'};}
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
            cout<<j<<' ';
        }
        cout<<' ';
    }
}

int main(){
    string phrase;
    cout<<"Enter sentence: "<<endl;
    getline(cin,phrase);
    vector<vector<char>> morse=tomorse(phrase);
    blink(morse);
    return 0;
}