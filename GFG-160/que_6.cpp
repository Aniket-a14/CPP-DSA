//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        vector<int> ans;
        int candidate1=-1;
        int candidate2=-1;
        int count1=0;
        int count2=0;
        
        for (int i=0;i<arr.size();i++) {
            if (arr[i] == candidate1) {
                count1++;
            } else if (arr[i] == candidate2) {
                count2++;
            } else if (count1 == 0) {
                candidate1 = arr[i];
                count1++;
            } else if (count2 == 0) {
                candidate2 = arr[i];
                count2++;
            } else {
                count1--;
                count2--;
            }
        }
        count1=count2=0;
        for(int i=0;i<arr.size();i++){
            if(candidate1==arr[i])
            count1++;
            else if(candidate2==arr[i])
            count2++;
        }
        
        if(count1>arr.size()/3)
        ans.push_back(candidate1);
        
        if(count2>arr.size()/3 && candidate1!=candidate2)
        ans.push_back(candidate2);
        
        
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto &i : ans)
                cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends