//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> v;
        int count = 0;
        int i =0;
        int j =1;
        while(i < n)
        {
            int x = a[i];
            int y = a[j];
            
            if(y > x)
            {
                i++;
                j = i+1;
            }
            else if(j == n-1)
            {
                v.push_back(x);
                i++;
                j = i+1;
            }
            else
            {
                j++;
            }
        }
        v.push_back(a[n-1]);
        
        // for(int i=0; i<n; i++)
        // {
        //     int x = a[i];
        //     for(int j=i+1; j<n; j++)
        //     {
        //         int y = a[j];
        //         if(y > x)
        //         {
        //             count++;
        //         }
        //     }
        //     if(count == 0)
        //     {
        //         v.push_back(x);
        //     }
        //     count = 0;
        // }
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends