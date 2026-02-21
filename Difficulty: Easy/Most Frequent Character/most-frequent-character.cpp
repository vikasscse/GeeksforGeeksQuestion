class Solution {
  public:
    char getMaxOccuringChar(string& s) {
        //  code here
        int freq[26] = {0};
        for(int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
        }
        int maxFreq = 0;
        char ans = 'a';
        for(int i = 0; i < 26; i++) {
            if(freq[i] > maxFreq) {
                maxFreq = freq[i];
                ans = i + 'a';
            }
        }
        
        return ans;
    }
};