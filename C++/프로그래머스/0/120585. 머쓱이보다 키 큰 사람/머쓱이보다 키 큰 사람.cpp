#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    for (int student_height : array)
    {
        if(student_height > height)
            answer++;
    }
    return answer;
}