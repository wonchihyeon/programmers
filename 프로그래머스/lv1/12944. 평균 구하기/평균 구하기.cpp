#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double sum = 0;
    double average = 0;
    for(int i=0; i<arr.size(); i++) {
        sum += arr[i];
    }
    return sum/arr.size();
}