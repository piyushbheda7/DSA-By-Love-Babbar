#include<iostream>
using namespace std;

void solution(int a[], int sum)
{
    for(int i = 0 ; i < 10 ; i++)
    {
        for(int j = i+1 ; j < 10 ; j++)
        {
            for(int k = j + 1 ; k < 10 ; k++)
            {
                if(a[i] + a[j] + a[k] == sum)
                {
                    cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<" "<<endl;
                    break ;
                }
            }
        }
    }
}

int main()
{

    int a[] = {10 ,5 ,5 ,5 ,2};

    solution(a,12);
    
}

// for codestudio problem;
// vector<vector<int>> findTriplets(vector<int>a, int n, int K) {
// 	// Write your code here.
//     vector<vector<int>> v ;
//     for(int i = 0 ; i < 10 ; i++)
//     {
//         for(int j = i+1 ; j < 10 ; j++)
//         {
//             for(int p = j + 1 ; p < 10 ; p++)
//             {
//                 if(a[i] + a[j] + a[p] > K) break;
//                 if(a[i] + a[j] + a[p] == K)
//                 {
//                     vector<int> temp ;
//                     temp.push_back(a[i]);
//                     temp.push_back(a[j]);
//                     temp.push_back(a[p]);
//                     v.push_back(temp);
//                     break ;
//                 }
//             }
//         }
//     }
//     return v;
// }
