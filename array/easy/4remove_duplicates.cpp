    int remove_duplicate(int a[],int n){
        // code here
        int j=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[j])
            {
                a[j+1]=a[i];
                j++;
            }

        }
        
        return j+1;
    }
};