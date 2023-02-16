#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int * removeElement(vector<int>& nums, int val)
    {
        int * ind = new int;
        int c = 0;
        for (int i = 0;i < nums.size();i++)
        {
            if (nums[i] != val)
            {
                ind[c++] = nums[i];
            }
        }

        return ind;
    }
};

int main()
{

    return 0;
}
