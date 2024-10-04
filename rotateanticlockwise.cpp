#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> anti(vector<vector<int>> nums) {
    int n = nums.size();
    vector<vector<int>> res(n, vector<int>(n)); 
    int ind = n - 1;
/*for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res[i][j] = nums[j][ind]; 
        }
        ind--;  
    }*/


    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int temp = nums[i][j];
            nums[i][j] = nums[j][i];
            nums[j][i] = temp;
        }
         {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    }
       
       for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << nums[i][j] << " ";
    }
    cout << endl;
  }

    return res;
}

int main() {
    vector<vector<int>> input = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    anti(input);

    return 0;
}
