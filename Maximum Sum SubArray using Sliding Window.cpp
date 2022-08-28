// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int MaxSum(vector<int> v, int size);
int main() {
    // Write C++ code here
  
    int size = 3;
    int sizeOfVector;
    cin>>sizeOfVector;
    vector<int> v;
    for( int i = 0;i<sizeOfVector;i++)
    {int m;
    cin >> m;
        v.push_back(m);
    }
    int maximum = MaxSum(v,size);
    cout<<maximum<<endl;
    return 0;
}
int MaxSum(vector<int> v, int size)
{   int maxSum = 0;
    for(auto i = 0; i <= v.size()-size; i++){
        int windowSum = 0;
        for(auto j = i;j < i+size ;j++)
        {
            windowSum+=v[j];
        }
        maxSum = max(maxSum,windowSum);
    }
    return maxSum;
}
