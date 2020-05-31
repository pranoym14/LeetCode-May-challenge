class Solution {
public:
    static bool compare(pair<char, int> p1, pair<char, int> p2) {
        return p1.second > p2.second;
    }
    
    string frequencySort(string s) {
        string result = "";
        int s_size = s.size();
        vector<pair<char, int>> freq(256);
        for(int i = 0; i < s_size; ++i) {
            freq[s[i]].second++;
            if(freq[s[i]].first == 0) {
                freq[s[i]].first = s[i];
            }            
        }
        
        sort(freq.begin(), freq.end(), compare);                
        
        for(int i = 0; i < 256; i++) {
            if(freq[i].second == 0) {
                break;
            }
            result += string(freq[i].second, freq[i].first);                
        }
        
        return result;
    }
};