#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(auto c : my_string) {
        if('a' <= c && c <= 'z') c -= 32;
        else if('A' <= c && c <= 'Z') c += 32;
        
        answer.push_back(c);
    }
    return answer;
}