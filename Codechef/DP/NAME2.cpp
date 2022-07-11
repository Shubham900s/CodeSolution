#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	string M,W;
	cin>>M;
	cin>>W;
	int lm = M.length();
	int lw = W.length();
	int i = 0 , j = 0;
	if(lm < lw)
	        {
	            while(i < lm and j < lw){
	                 if(M[i] == W[j])
    	            {
    	                i++;
    	                j++;
    	            }
    	        else{
    	            j++;
    	        }
	       }
	            if(i == lm)
        	    {
        	        cout<<"YES"<<endl;
        	    }
        	 else{
        	        cout<<"NO"<<endl;
        	     }
	   }
    	       
	    else{
	        while(i < lm and j < lw){
    	            if(M[i] == W[j])
    	            {
    	                i++;
    	                j++;
    	            }
    	        else{
    	            i++;
    	        }
    	    }
        	 if(j == lw)
        	    {
        	        cout<<"YES"<<endl;
        	    }
        	 else{
        	     cout<<"NO"<<endl;
        	 }
	        }
	}
	return 0;
}
