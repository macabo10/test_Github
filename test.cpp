#include <iostream>
#include<iomanip>
#include<string>
#include<sstream>
#include<fstream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    int total_sum = 0, current_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
    }
    for (int i = 0; i < n; i++) {
        int sum_left  = 0;
        for (int j = 0; j < i; j++) {
            sum_left += arr[j];
        }
        if (sum_left > total_sum/2) break;
        if (sum_left == total_sum - arr[i]) {
            
        }
        
    }
}

string balancedSums(vector<int> arr) {
    int n = arr.size();
    int total_sum = 0; 
    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
    }
    int right_sum = total_sum;
    for (int i = 0; i < n; i++) {
        right_sum -= arr[i];
        if ((total_sum - right_sum - arr[i]) > right_sum) break;
        if (right_sum == (total_sum - right_sum - arr[i])) {
            return "YES";
        }        
    }
    return "NO";
}