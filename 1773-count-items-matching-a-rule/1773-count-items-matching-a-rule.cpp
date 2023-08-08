class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        vector<string> type;
        vector<string> color;
        vector<string> name;

        int j = 0;

        for(int i=0; i<items.size(); i++)
        {
            type.push_back(items[i][j]); 
        }
        j++;
        for(int i=0; i<items.size(); i++)
        {
            color.push_back(items[i][j]); 
        }
        j++;
        for(int i=0; i<items.size(); i++)
        {
            name.push_back(items[i][j]); 
        }

        int count = 0;
        if(ruleKey == "type")
        {
            for(int i=0; i<type.size(); i++)
            {
                if(type[i] == ruleValue)
                count++;
            }
        }
        else if(ruleKey == "color")
        {
            for(int i=0; i<color.size(); i++)
            {
                if(color[i] == ruleValue)
                count++;
            }
        }
        if(ruleKey == "name")
        {
            for(int i=0; i<name.size(); i++)
            {
                if(name[i] == ruleValue)
                count++;
            }
        }
        return count;
    }
};