class Solution {
public:
    string interpret(string command) {
        unordered_map<string,string> ump= 
        {
            {"G","G"},
            {"()","o"},
            {"(al)","al"},  
        };
        
        
        string cmd = "",res="";
        
        for(auto ch:command)
        {
            cmd += ch;
            if(ump.find(cmd)!=ump.end())
            {
                res += ump[cmd];
                cmd="";
            }
        }
        
        return res;
        
    }
};