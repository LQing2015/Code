#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;


//Func：选arr中若干个数，使和为sum（ans是辅助数组）

void Func(vector<int>& arr, vector<int>&ans,int sum,int dep=0)
{
    int N=arr.size();
    if(dep==N)
    {
            for(int i=0;sum==0&&i<ans.size();++i)
                printf("%d%c",ans[i],(i==ans.size()-1)?'\n':' ');
            return;
    }
    ans.push_back(arr[dep]);
    Func(arr,ans,sum-arr[dep],dep+1);
    ans.pop_back();
    Func(arr,ans,sum,dep+1);
}
int main(int argc,char* argv[])
{
        const int N=10;
        int arr[N]={1,2,3,4,5,6,7,8,9,10};
        vector<int> A(arr,arr+N),Ans;
        random_shuffle(A.begin(),A.end());
        Func(A,Ans,8);
        return 0;
}
