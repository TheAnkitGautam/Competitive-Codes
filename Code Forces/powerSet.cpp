#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    // Base Case
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // exclude
    solve(nums, output, index + 1, ans);

    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;

    vector<int> output;
    int index = 0;
    solve(nums, output, index, ans);

    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    vector<vector<int>> print = subsets(nums);

    for (int i = 0; i < print.size(); i++)
    {
        for (int j = 0; j < print[i].size(); j++)
            cout << print[i][j] << " ";
        cout << endl;
    }
    return 0;
}