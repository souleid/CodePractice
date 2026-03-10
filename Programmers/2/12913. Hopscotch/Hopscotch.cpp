#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> land)
{
    vector<int> prev = land[0]; 
    vector<int> curr(4, 0);

    for (int i = 1; i < land.size(); i++) {
        curr[0] = land[i][0] + max({prev[1], prev[2], prev[3]});
        curr[1] = land[i][1] + max({prev[0], prev[2], prev[3]});
        curr[2] = land[i][2] + max({prev[0], prev[1], prev[3]});
        curr[3] = land[i][3] + max({prev[0], prev[1], prev[2]});
    
        prev = curr;
    }

    return *max_element(prev.begin(), prev.end());
}