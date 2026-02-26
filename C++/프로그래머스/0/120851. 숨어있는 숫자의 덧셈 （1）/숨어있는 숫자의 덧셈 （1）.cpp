#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for (char c : my_string)
    {
        if(48 <= c && c <= 57){ 
            int num = (int)(c - 48);
            answer += num;
        }
    }
    return answer;
}