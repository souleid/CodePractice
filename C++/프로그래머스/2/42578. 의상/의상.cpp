#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    map<string, vector<string>> items;
    
    for(int i = 0; i< clothes.size(); i++) {
        vector<string> parts = clothes[i];
        string offset = parts[1];
        string name = parts[0];
        
        items[offset].push_back(name);
    }
    
    answer = 1;
    for(auto parts : items) {
        int size = parts.second.size();
        answer *= (size + 1);
    }
    answer--;
    return answer;
}