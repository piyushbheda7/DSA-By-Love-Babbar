vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    vector<vector<int>> l; 
    for(int i = 0 ; i < arr.size() ; i++)
    {
		for(int j = i+1 ; j < arr.size() ; j++)
        {
			if(arr[i] + arr[j] == s)
            {
            	vector<int> temp ;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                l.push_back(temp);
            }
        }
    }
    sort(l.begin(),l.end());
    return l;
}