#include <iostream>
#include <vector>
using namespace std;
int majority_element(vector <int> &vec){
    int n= vec.size();
    int ans;
    int freq=1;
    if(n==1){
        return vec[0];
    }
    for(int i=1; i<n; i++){ 
        if(vec[i]==vec[i-1]){
            freq++;
        }
        else{
            freq=1;
        }
        if(freq>n/2){
        ans=vec[i];
        return ans;
    }
    }
    return -1;
}
int main(){
    vector<int> nums= {1,1,2,2,3,3,3,3,3};
    cout << "Majority element: " << majority_element(nums);
    return 0;
}
