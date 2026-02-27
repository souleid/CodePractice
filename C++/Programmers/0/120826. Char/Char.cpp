#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    string str = my_string;
    auto idx = str.find(letter);
    while(idx != string::npos) {
        string mix;
        mix = str.substr(0, idx);
        mix += str.substr(idx + 1);
        str = mix;
        idx = mix.find(letter);
    }

    answer = str;
    return answer;
}