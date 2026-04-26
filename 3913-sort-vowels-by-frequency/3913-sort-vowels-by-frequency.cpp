class Solution {
public:
    bool isVowel(char c){
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}

string sortVowels(string s) {
    unordered_map<char,int> freq;
    unordered_map<char,int> firstPos;

    for(int i = 0; i < s.size(); i++){
        if(isVowel(s[i])){
            freq[s[i]]++;
            if(firstPos.find(s[i]) == firstPos.end()){
                firstPos[s[i]] = i;
            }
        }
    }

    vector<char> vowels;
    for(auto &p : freq){
        vowels.push_back(p.first);
    }

    sort(vowels.begin(), vowels.end(), [&](char a, char b){
        if(freq[a] != freq[b]) return freq[a] > freq[b];
        return firstPos[a] < firstPos[b];
    });

    vector<char> ordered;
    for(char c : vowels){
        for(int i = 0; i < freq[c]; i++){
            ordered.push_back(c);
        }
    }

    int j = 0;
    for(int i = 0; i < s.size(); i++){
        if(isVowel(s[i])){
            s[i] = ordered[j++];
        }
    }

    return s;
    }
};