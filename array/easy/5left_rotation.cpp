	    void reverse(int arr[], int low, int high){
        while(low<high){
            long temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
            low++;
            high--;
        }
    }
	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	   k%=n;
	   reverse(arr,0,k-1);
	   reverse(arr,k,n-1);
	   reverse(arr,0,n-1);
	} 
		 
