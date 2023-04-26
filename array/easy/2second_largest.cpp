class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int large=-1,secondlarge=-1;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>large)
	        {
	            large=arr[i];
	        }
	    }
	    
	       for(int i=0;i<n;i++)
	    {
	    	        if(arr[i]!=large && arr[i]>secondlarge)
	        {
	            secondlarge=arr[i];
	        }
	    }

	    return secondlarge;
	}
};