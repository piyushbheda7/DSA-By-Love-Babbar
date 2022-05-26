#include<iostream>
#include<vector>

using namespace std ;

void findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    int a1 = 0 , b1 = 0 , sum1 = 0;
    
    vector<int> sum , temp;
    
    for(int i = 0 ; i < n ; i++)
    {
        a1 =  (a1 * 10) + a[i] ;
    }
    
    for(int i = 0 ; i < m ; i++)
    {
        b1 = (b1 * 10) + b[i] ;
    }
    
    sum1 = a1 + b1 ;
    int rem ; 
    while(sum1 != 0)
    {
        rem = sum1 % 10 ;
        temp.push_back(rem);
        sum1 /= 10 ;
    }
    for(int i = temp.size() - 1 ; i >= 0 ; i--)
    {
        sum.push_back(temp[i]);
    }

    for(auto i : sum)
    {
        cout<<i<<" ";
    }
}


int main()
{
    vector<int> v , v1 , sum;
    v.push_back(1);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    v1.push_back(2);
    v1.push_back(6);
    v1.push_back(3);

    findArraySum(v , 4 , v1 , 3);
}

// vector<int> reverse(vector<int> arr)
// {
//     int i = 0 ; 
//     int j = arr.size() - 1 ;
    
//     while(i<j)
//     {
//         swap(arr[i++],arr[j--]);
//     }
//     return arr ;
// }


// vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
// 	// Write your code here.
//     int i = n - 1 ;
//     int j = m - 1 ;
//     vector<int> ans ;
//     int carry = 0 ;
//     while(i>=0 && j>=0)
//     {
//         int sum = a[i] + b[j] + carry;
//         carry = sum/10 ;
//         sum = sum%10 ;
//         ans.push_back(sum);
//         i-- ;
//         j-- ;
//     }
    
//     while(i>=0)
//     {
//         int sum = a[i] + carry ;
//         carry = sum/10 ;
//         sum = sum%10 ;
//         ans.push_back(sum);
//         i-- ;
//     }
    
//     while(j>=0)
//     {
//         int sum = b[j] + carry;
//         carry = sum/10 ;
//         sum = sum%10 ;
//         ans.push_back(sum);
//         j-- ;
//     }
    
//     while(carry!= 0)
//     {
//         int sum = carry ;
//         carry = sum/10;
//         sum = sum%10;
//         ans.push_back(sum);
//     }
    
//     return reverse(ans);

//      this is my approach
//     int a1 = 0 , b1 = 0 , sum1 = 0;
    
//     vector<int> sum , temp;
    
//     for(int i = 0 ; i < n ; i++)
//     {
//         a1 =  (a1 * 10) + a[i] ;
//     }
    
//     for(int i = 0 ; i < m ; i++)
//     {
//         b1 = (b1 * 10) + b[i] ;
//     }
    
//     sum1 = a1 + b1 ;
//     int rem ; 
//     while(sum1 != 0)
//     {
//         rem = sum1 % 10 ;
//         temp.push_back(rem);
//         sum1 /= 10 ;
//     }
//     for(int i = temp.size() - 1 ; i >= 0 ; i--)
//     {
//         sum.push_back(temp[i]);
//     }
//     return sum ;
// }