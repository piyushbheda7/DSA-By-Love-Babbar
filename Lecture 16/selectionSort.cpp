void selectionSort(int arr[] , int n)
{
    for(int i = 0 ; i < n - 1 ; i++)
    {
        int minIndex = i ;
        for(int j = i + 1 ; j < n ; j++)
        {
            if(arr[minIndex] > arr[j])
            {
                minIndex = j ;
            }
        }
        swap(arr[minIndex] , arr[i]);
    }
}

void swap(int a , int b)
{
    int temp = b ;
    b = a ;
    a = temp ;
}