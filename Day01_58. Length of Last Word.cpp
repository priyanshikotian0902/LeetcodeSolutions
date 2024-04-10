#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        string store;
        int len=0;
        int i=s.length()-1;
        while(i>=0 && isspace(s[i]))
{
    i--;
}
while(i>=0 && !isspace(s[i]))
{
    store=store+s[i];
    i--;
}

        return store.length();

    }
};
