#include<iostream>
#include<vector>
#include<map>
using namespace std;

  int sequence(vector<int> nums){
    int n =  nums.size();
    int seq = 1;
    map<int,int> mp;
    map<int,int>:: iterator it;
    
    for(int i = 0;i<n;i++){
        mp[nums[i]] = nums[i];
    }
    int counter = 1;

    for(auto it = mp.begin();it != mp.end();++it){
        int num = it->first;
        cout<<it->first<<"--->"<<it->second<<endl;
        if(mp.find(num+1) != mp.end()){
            counter++;
        }else{
               if(counter > seq){
                   seq = counter;
               }
               
               counter = 1;
           }
        }
        return seq;
  }

int main(){
    vector<int> input = {3,8,5,7,6};
    vector<int> inp = {100, 200, 1, 3, 2, 4,5,7,8,9,10,11,12,13,14,15};
    int seq = sequence(inp);
    cout<<seq;
    return 0;
}