#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 2;
    int num = sqrt(n);
    if(num * num == n) answer = 1;
    return answer;
}