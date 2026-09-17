class Solution {
public:
    string encode(vector<string>& strs) {
        string re;
        for (const string& s : strs) {
            re += to_string(s.size()) + "#" + s;
        }
        return re;
    }

    vector<string> decode(string s) {
        vector<string> re;
        int i = 0, j = 0;
        while (i < s.size()) {
            while (s[i] != '#') {
                i++;
            }
            int len = stoi(s.substr(j,i - j));
            re.push_back(s.substr(i + 1,len));
            j = i + len + 1;
            i = j;
        }
        return re;
    }
};
