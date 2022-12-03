//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        if(arr[0]==0&&n!=1) return -1;
        if(n==1) return 0;
        // Your code here
        int count=0;
        int pos=0;
        int jump=0;
        int des = 0;
        for(int i=0;i<n-1;i++){
            int j=i;
            if(i>des||i==des && arr[i]==0) return -1;
            
            des = max(des, arr[i]+i);
            if(i == pos){
                pos = des;
                jump++;
            }
            
        }
        return jump;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
