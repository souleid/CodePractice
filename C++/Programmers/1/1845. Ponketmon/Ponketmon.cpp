#include <vector>
#include <map>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    map<int, int> mons;
    
    for(int num : nums) {
        mons[num]++;
    }
    
    answer = min(mons.size(), nums.size() / 2); 
    return answer;
}