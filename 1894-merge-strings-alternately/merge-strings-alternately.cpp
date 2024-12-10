class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merge;
       int i,j,k;
       i=j=k=0;
       while(i<word1.length()&&j<word2.length()){
        merge.push_back(word1[i++]);
        merge.push_back(word2[j++]);
       }
       while(i<word1.length())
       merge.push_back(word1[i++]);
       while(j<word2.length())
       merge.push_back(word2[j++]);

       return merge;
    }
  
};