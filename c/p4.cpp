//program to emulate the caesar cipher, a simple encryption technique that involves shifting the letters of the alphabet, k positions to the right (or left).
//consider all characters to be lower case only
// eg: s = "abc", k = 2, direction = "encode" => "cde"

#include <iostream>
#include <string>
using namespace std;

string caesar(string s, int k, string direction){
    string ans = "";
    for(int i=0;i<s.length();i++){
        if(direction == "encode"){
            ans += s[i] + k;
        }
        else if(direction == "decode"){
            ans += s[i] - k;
        }
    }
    return ans;
}

int main(){
    string s, direction;
    int k;
    cin >> s >> k >> direction;
    cout<<caesar(s,k,direction)<<endl;
    return 0;
}
