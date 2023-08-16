class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());

        int sum = 0;
        int n1 = piles.size();
        int n = (piles.size())/3;

        for(int i=piles.size()-1; i>=0; i--)
        {
            if(n1%2 == 0 && i%2 == 0)
            {
                sum += piles[i];
                n--;
            }
            else if(n1%2 != 0 && i%2 != 0)
            {
                sum += piles[i];
                n--;
            }
            if(n == 0)
            break;
        }

        return sum;
    }
};