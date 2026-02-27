#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    
    map<string, int> phone_map;
    for (auto number : phone_book) {
        phone_map[number]++;
    }
    
    for (auto number : phone_book) {
        string prefix = "";
        for (size_t i = 0; i < number.length() - 1; i++) {
            prefix += number[i];
            if (phone_map.find(prefix) != phone_map.end()) {
                return false;
            }
        }
    }
    return answer;
}