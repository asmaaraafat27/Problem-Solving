class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string w="";
        if(word1.size() > word2.size())
        {
            for(int i=0; i<word1.size(); i++)
            {
                w+= word1[i];
                for(int j=i; j<word2.size(); j++)
                {
                    w+= word2[j];
                    break;
                }
            }
        }
        else if(word2.size() > word1.size())
        {
            for(int i=0; i<word2.size(); i++)
            {
                for(int j=i; j<word1.size(); j++)
                {
                    w+= word1[j];
                    break;
                }
                w+= word2[i];
            }
        }
        else
        {
            for(int i=0; i<word1.size(); i++)
            {
                w+= word1[i];
                for(int j=i; j<word2.size(); j++)
                {
                    w+= word2[j];
                    break;
                }
            }
        }
        return w;
    }
};
