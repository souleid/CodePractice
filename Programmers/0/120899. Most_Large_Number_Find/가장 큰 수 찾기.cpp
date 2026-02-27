#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int maxIndex = 0;
    int maxValue = 0;
    for(int i = 0; i< array.size(); i++) {
        if(maxValue < array[i]) {
            maxValue = array[i];
            maxIndex = i;
        }
            
    }
    answer.push_back(maxValue);
    answer.push_back(maxIndex);
    return answer;
}