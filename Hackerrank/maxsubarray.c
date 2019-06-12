#include <stdio.h>
2
int max(int a,int b){
3
    if(a>b)
4
        return a;
5
    return b;
6
}
7
void find(int n,int *arr){
8
    int dp[n+1],maxi = -10000,res1,res2,sum = 0;
9
    dp[0] = 0;
10
    for(int i=1;i<=n;i++){
11
        dp[i] = max(arr[i-1],dp[i-1]+arr[i-1]);
12
        if(dp[i]>maxi)
13
            maxi = dp[i];
14
    }
15
    res1 = maxi;
16
    /*for(int i=0;i<=n;i++)
17
        printf("%d ",dp[i]);
18
    printf("\n%d\n",maxi);*/
19
    maxi = -10000;
20
    for(int i=0;i<n;i++){
21
        if(arr[i]>maxi)
22
            maxi = arr[i];
23
        if(arr[i]>0)
24
            sum+=arr[i];
25
    }
26
    res2 = sum;
27
    if(sum == 0)
28
        res2 = maxi;
29
    printf("%d %d\n",res1,res2);
30
}
31
int main(){
32
    int t,n,arr[100000];
33
    scanf("%d",&t);
34
    while(t--){
35
        scanf("%d",&n);
36
        for(int i=0;i<n;i++)
37
            scanf("%d",&arr[i]);
38
        find(n,arr);
39
        }
40
    return 0;
41
}