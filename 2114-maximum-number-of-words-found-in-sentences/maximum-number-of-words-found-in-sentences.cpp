class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
      int n= sentences.size();
     
      int maxCount =0;
      for(int i=0;i<n;i++){
         int sentenceCount = 1;
        for(int j = 0; j < sentences[i].size(); j++){
        if(sentences[i][j]==' '){
            sentenceCount++;
        }
        if(sentenceCount>maxCount){
            maxCount=sentenceCount;
        }
        }
       
      }
return maxCount;
    }
};