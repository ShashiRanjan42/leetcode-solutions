// class Solution {
// public:
//     int minPartitions(string n) {
//         int x = n.size();

//         int y = 0;
//         for(int i=0; i<x; i++)
//         {
//             y = y*10 + 1;
//         }
//         int  a = 0;
//         for(int i=0; i<x; i++)
//         {
//             a = a*10 + (n[i]-'0');
//         }

//         int ans = a/y;
//         return ans;
//     }
// };
class Solution {
public:
    int minPartitions(string n) {
        int maxDigit = 0;

        for (char digit : n) {
            maxDigit = max(maxDigit, digit - '0');
        }

        return maxDigit;
    }
};