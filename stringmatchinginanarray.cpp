// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include<vector>
using namespace std;
     vector<string> stringMatching(vector<string>& words) {
        vector<string> res;
        unordered_set<string> seen;
    for (int i = 0; i < words.size(); i++) {
        for (int j = 0; j < words.size(); j++) {
           
            if(i != j){
                if(words[j].find(words[i]) != string::npos ){
                    seen.insert(words[i]);
                }
            }
            
        }
    }
    res.assign(seen.begin(),seen.end());
    return res;
    }
    }

int main() {
    // Write C++ code here
    vector<string> res = {"mass","as","hero","superhero"};
    vector<string> re = stringMatching(res);
    
    for(int i = 0;i<re.size();i++){
        cout<<re[i];
    }

    return 0;
}