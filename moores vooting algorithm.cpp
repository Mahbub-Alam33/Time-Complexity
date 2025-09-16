#include<iostream>
#include<vector>
using namespace std;

int majority(vector<int> &nums)
{
    int n = nums.size();

    int frequency = 0, ans = 0;
    for(int i=0; i<n; i++)
    {
        if(frequency == 0) ans = nums[i];
        if(ans == nums[i-1]) frequency++;
        else frequency--;
    }

    int Count = 0;
    for(int val : nums)
    {
        if(val == ans)
        {
            Count++;
        }
    }

    if(Count > n/2) return ans;
    else return -1;
}

int main()
{
    vector<int> arr = {1,2,3,4,4,4,5,3,4,4,4,4};
    cout << majority(arr) << endl;
    return 0;
}
