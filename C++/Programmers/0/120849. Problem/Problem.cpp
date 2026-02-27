#include <string>
#include <vector>

using namespace std;

bool isVowel(const char c) {
    if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' )
        return true;
    return false;
}

string solution(string my_string) {
    string answer = "";
    
    for(const auto str : my_string) {
        if(isVowel(str) == false) answer.push_back(str); 
    }
    return answer;
}