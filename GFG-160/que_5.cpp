//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int point=-1;
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]>arr[i-1]){
                point=i-1;
                break;
            }
        }
        if(point==-1){
            reverse(arr.begin(),arr.end());
        }else{
            for(int i=arr.size()-1;i>0;i--){
                if(arr[i]>arr[point]){
                    swap(arr[i],arr[point]);
                    reverse(arr.begin()+point+1,arr.end());
                    break;
                }
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int n = arr.size();
        ob.nextPermutation(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends