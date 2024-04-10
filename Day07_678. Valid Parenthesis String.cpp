class Solution {
public:


bool checkValidString(string s)
{
        stack<int> t1;
        stack<int> t2;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                t1.push(i);
            }
            else if (s[i] == ')')
            {
                if (t1.empty())
                {
                    if (!t2.empty())
                    {
                        t2.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    t1.pop();
                }
            }
            else
            {
                t2.push(i);
            }
        }

        while (!t1.empty())
        {
            if (t2.empty() || t1.top() > t2.top())
            {
                return false;
            }
            t1.pop();
            t2.pop();
        }


    return true;
}
};