    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
         int i = 0, j = 0;
         vector < int > Union; 
  
  while (i < n && j < m) {
    if (arr1[i] <= arr2[j])
    {
      
      if (Union.size() == 0 || Union.back() != arr1[i])
        Union.push_back(arr1[i]);
        i++;
    }
    else
    {
      if (Union.size() == 0 || Union.back() != arr2[j])
        Union.push_back(arr2[j]);
      j++;
    }
  }
  
  while (i < n)
  {
    if (Union.back() != arr1[i])
      Union.push_back(arr1[i]);
    i++;
  }
  
  
  while (j < m)
  {
    if (Union.back() != arr2[j])
      Union.push_back(arr2[j]);
    j++;
  }
  
  return Union;
    }