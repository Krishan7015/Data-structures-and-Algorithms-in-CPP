#include <iostream>
#include <climits>
using namespace std;
int max_sum(int a[], int n){
    int currentsum=0, maxsum=INT_MIN;
    for(int i =0; i<n; i++){
        currentsum+=a[i];
        maxsum=max(currentsum, maxsum);
        if(currentsum<0){
            currentsum=0;
        }
    }
    return maxsum;
}
int main(){
    int arr[]={-6,5,-1,4,8,-2,9,-5};
    int size=8;
    cout << "Max subarray sum: " << max_sum(arr, size);
    return 0;
}