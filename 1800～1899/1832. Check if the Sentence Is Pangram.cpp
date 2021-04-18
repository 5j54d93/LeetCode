class Solution
{
    public:
        bool checkIfPangram(string sentence)
        {
            bool alphabetAppear[26]={false};
            
            for(int i=0;i<sentence.length();i++)
                alphabetAppear[sentence[i]-'a']=true;
            
            for(int i=0;i<26;i++)
                if(alphabetAppear[i]==false)
                    return false;
            
            return true;
        }
};
