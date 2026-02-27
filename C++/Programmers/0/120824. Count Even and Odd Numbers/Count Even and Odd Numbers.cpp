#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int even = 0;
    int odds = 0;
    
    for(auto num : num_list) {
        if(num % 2 == 0) even++;
        else odds++;
    }
    answer.push_back(even);
    answer.push_back(odds);
    return answer;
}