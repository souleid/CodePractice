#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string, int> complete_list;
    for(string name : completion) {
        if(complete_list.find(name) != complete_list.end())
          complete_list[name]++;
        else
          complete_list[name] = 1;
    }
    
    for(string name : participant) {
        // 완주자명단에 없는 경우
        if(complete_list.find(name) == complete_list.end()) {
            answer = name;
            break;
        }
        else
        {
            complete_list[name]--;
        }
    }   
    
    for(auto iter = complete_list.begin(); iter != complete_list.end(); iter++) {
        int value = iter->second;
        if(value < 0) {
            answer = iter->first;
            break;
        }
    }
    
    
    return answer;
}