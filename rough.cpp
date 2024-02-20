class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        unordered_map<int, int> freqMap;
        vector<int> duplicates;

        for (int num : nums)
        {
            freqMap[num]++;
            if (freqMap[num] == 2)
            {
                duplicates.push_back(num);
            }
        }

        if (duplicates.empty())
        {
            cout << "No duplicates found." << endl;
        }
        else
        {
            cout << "Duplicates found: ";
            for (int num : duplicates)
            {
                cout << num << " ";
            }
            cout << endl;
        }
    }
};