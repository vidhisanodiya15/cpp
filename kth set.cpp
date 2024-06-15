//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        // Your code here
        // It can be a one liner logic!! Think of it!!
        string solve_test()
{
    long long int n=500; 
    //cin >> n;
    long long int k=3;
    //cin >> k;
    string bit ="";
    if(n == 1)
        return k == 0 ? "YES" : "NO";
    else if(n==2)
        return k == 1 ? "YES" : "NO";
    // n is >=3
    else
    {
        // Bild bitset of our decimal number
        while(n > 0)
        {
            bit.push_back(n%2);
            cout << n%2 << " ";
            n/=2;
        }
        if(bit.size() < k) 
            return "NO";
        // cout << bit <<endl;
        cout << k << endl;
        cout << "bit[bit.size()-1-k] " << bit[bit.size()-1-k] << endl;
        cout << "bit[bit.size()] " << bit[bit.size()] <<endl; 
        return bit[bit.size()+1-k] == 1 ?  "YES" : "NO";
    }
    
}   

int main()
{
    int t=1; 
    //cin >> t; 
    
    for(int i=0; i<t; i++)
    {
        cout << solve_test() <<endl;
    }
	
	return 0;
}
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;//taking testcases
	while(t--)
	{
	    long long n;
	    cin>>n;//input n
	    int k;
	    cin>>k;//bit number k
	    Solution obj;
	    if(obj.checkKthBit(n, k))
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}
// } Driver Code Ends
