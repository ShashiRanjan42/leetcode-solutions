class Solution {
public:
    bool isvowel(char x)
    {
        if (x == 'a' || x == 'e' || x == 'i' || 
        x == 'o' || x == 'u' || x == 'A' || 
        x == 'E' || x == 'I' || x == 'O' || x == 'U')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    string sortVowels(string s) {
        string s1;
        for(int i=0; i<s.size(); i++)
        {
            if(isvowel(s[i]))
            {
                s1 += s[i];
            }
        }
        sort(s1.begin(),s1.end());
        int j = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(isvowel(s[i]))
            {
                s[i] = s1[j];
                j++;
            }
        }
        
        return s;
    }
};