#include<iostream>
#include<string>
using namespace std;

bool isUniqueChars(string str) {
    int checker = 0;
    for (int i = 0; i < str.length(); ++i) {
        int val = str[i] - 'a';
        if ((checker & (1 << val)) > 0) return false;
        checker |= (1 << val);
    }
    return true;
}

int main(){
    string mystring = "abccdec";
    bool isunique = isUniqueChars(mystring);
    if (isunique){
        cout << mystring << " does not contain any duplicate character." << endl;
    }
    else{
        cout << mystring << " contains duplicate characters." << endl;
    }

    return 0;
}