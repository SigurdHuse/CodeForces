#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    string word;
    cin >> word;
    int low = 0, up = 0;
    for(char c: word){
        if(isupper(c)) up++;
        else low++;
    }
    if(up > low){
        for(int i = 0; i <word.size(); i++) word[i] = toupper(word[i]);
    }
    else for(int i = 0; i <word.size(); i++) word[i] = tolower(word[i]); 
    cout << word << endl;
}