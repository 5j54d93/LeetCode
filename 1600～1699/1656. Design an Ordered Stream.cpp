class OrderedStream
{
    private:
        vector<string> os;
        int ptr = 1;
    
    public:
        OrderedStream(int n) {
            os.resize(n+1);
        }

        vector<string> insert(int idKey, string value)
        {
            os[idKey] = value;
            vector<string> ans;
            while(ptr<os.size() && os[ptr]!="")
            {
                ans.push_back(os[ptr]);
                ptr++;
            }
            
            return ans;
        }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
