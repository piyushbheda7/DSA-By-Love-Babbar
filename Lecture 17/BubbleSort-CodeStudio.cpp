void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
	for(int i = 0  ; i < n - 1 ; i++)
	{
		int flag = 0 ;
		for(int j = 0 ; j < n - i - 1 ; j++)
		{
			if(arr[j] > arr[j+1])
			{
				flag = 1 ;
				swap(arr[j] , arr[j+1]);
			}
		}
		if(flag == 0) break ;
	}
}
