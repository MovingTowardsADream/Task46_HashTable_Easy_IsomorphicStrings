#include <iostream>
#include <map>
#include <vector>

class Solution {
public:
    static bool isIsomorphic(std::string s, std::string t) {
        if (s.size() != t.size())
            return 0;
        std::map<char, char> alphabet;
        std::vector<char> tmp;
        for (int i = 0;i < s.size();i++) {
            if (!(alphabet[t[i]])) {
                if (std::find(tmp.begin(), tmp.end(), s[i]) != tmp.end())
                    return 0;
                alphabet[t[i]] = s[i];
                tmp.push_back(s[i]);
            }
            else if (alphabet[t[i]] != s[i])
                return 0;
        }
        return 1;
    }
};

int main()
{
    std::cout << Solution::isIsomorphic("egg", "add");
}
