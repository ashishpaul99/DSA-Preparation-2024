// 23-Row With Maximum Ones
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
void rowWithMaxOnes(vector<vector<int>> &mat)
{
    vector<int> ans;
    int maxOneCount = INT_MIN;
    int n = mat.size();
    int rowNo = 0;
    for (int i = 0; i < n; i++)
    {
        int oneCount = 0;
        for (int j = 0; j < mat[i].size(); j++)
        {
            // if one is found in row then increment one count
            if (mat[i][j] == 1)
            {
                oneCount++;
            }
        }
        if (oneCount > maxOneCount)
        {
            // updating one count
            maxOneCount = oneCount;

            // updating row number
            rowNo = i;
        }
    }

    ans.push_back(rowNo);
    ans.push_back(maxOneCount);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    vector<vector<int>> mat = {{0, 1, 0}, {1, 0, 0}, {1, 1, 1}};
    rowWithMaxOnes(mat);
}