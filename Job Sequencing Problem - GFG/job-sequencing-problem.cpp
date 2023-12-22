//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/   

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    bool static cmp (Job a, Job b)
    {
        // hmko reverse order me sort krna hai
        return a.profit > b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,cmp);
        
        int maxi = INT_MIN;
        for(int i=0; i<n; i++)
        {
            if(arr[i].dead > maxi)
            maxi = arr[i].dead;
        }
        
        vector<int> v(maxi, -1);
        
        int ans = 0;
        int count = 0;
        vector<int> result;
        
        for(int i=0; i<n; i++)
        {
            int a = arr[i].dead;
            for(int j = a-1; j >=0; j--)
            {
                if(v[j] == -1)
                {
                    v[j] = 1;
                    ans += arr[i].profit;
                    count++;
                    break;
                }
            }
            
        }
        
        result.push_back(count);
        result.push_back(ans);
        
        return result;
    } 
};


//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends