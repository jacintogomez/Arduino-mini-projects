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
    if(d=='i'){r={'.','-'};}
    if(d=='j'){r={'-','.','.','.'};}
    if(d=='k'){r={'-','.','-','.'};}
    if(d=='m'){r={'-','.','.'};}
    if(d=='n'){r={'.'};}
    if(d=='o'){r={'.','.','-','.'};}
    if(d=='p'){r={'-','-','.'};}
    if(d=='q'){r={'.','.','.','.'};}
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