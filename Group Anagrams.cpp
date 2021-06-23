class Solution {
 public:
  vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> groups;
    for (string str : strs) {
      string value = str;
      sort(str.begin(), str.end());
      groups[str].push_back(value);
    }
    vector<vector<string>> result;
    for (auto it = groups.begin(); it != groups.end(); it++) {
      result.push_back(it->second);
    }
    return result;
  }
};
