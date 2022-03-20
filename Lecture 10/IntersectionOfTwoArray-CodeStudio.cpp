vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> l ;
    int i = 0 , j = 0 ;
    
    while(i<n && j<m)
    {
        if(arr1[i] == arr2[j])
        {
			l.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j])
        {
			i++;
        }
        else
        {
			j++;
        }
    }
    
    return l ;
    
    
    
    
    
//     vector<int> l ;
//     for(int i = 0 ; i < n ; i++)
//     {
//         int element = arr1[i] ;
//         for(int j = 0 ; j < m ; j++)
//         {
// 			if(element == arr2[j])
//             {
// 				l.push_back(element);
//                 arr2[j] = -112233 ;
//                 break;
//             }
//         }

//     }
//     return l ;
}