
class Solution {
public:
    bool isIsomorphic(std::string s, std::string t) {
        std::unordered_map<char, char> s_to_t;
        std::unordered_map<char, char> t_to_s;

        for (int i = 0; i < s.length(); ++i)
         {
            char char_s = s[i];
            char char_t = t[i];
            if (s_to_t.find(char_s) != s_to_t.end() && s_to_t[char_s] != char_t)
             {
                return false;
             }

            if (t_to_s.find(char_t) != t_to_s.end() && t_to_s[char_t] != char_s)
            {
                return false;
            }
            s_to_t[char_s] = char_t;
            t_to_s[char_t] = char_s;
        }
        return true;
    }
};
