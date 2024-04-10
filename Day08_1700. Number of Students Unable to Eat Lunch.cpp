class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches)
    {
        int count = 0;
        int n = students.size();
        while (count != n)
        {
            if (students[0] == sandwiches[0])
            {
                count = 0;
                for (int m = 0; m < n - 1; m++)
                {
                    students[m] = students[m + 1];
                    sandwiches[m] = sandwiches[m + 1];
                }
                n--;
            }
            else
            {
                int temp = students[0];
                for (int i = 0; i < n - 1; i++)
                {
                    students[i] = students[i + 1];
                }
                students[n - 1] = temp;
                count++;
            }
        }

        return n;
    }
};