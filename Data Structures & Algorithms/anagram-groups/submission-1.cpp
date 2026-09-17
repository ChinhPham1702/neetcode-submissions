class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> maps;
        vector<vector<string>> result;
        for (string& s : strs) {
            int freq[26] = {0};
            for (char& c : s) {
                freq[c - 'a']++;
            }
            string key = "";
            for (int i = 0; i < 26; i++) {
                key += to_string(freq[i]) + '#';
            }
            maps[key].push_back(s);
        }
        for (auto& [key, vec_str] : maps) {
            result.push_back(vec_str);
        }
        return result;
    }
};
