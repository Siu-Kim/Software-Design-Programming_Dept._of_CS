include <stdio.h>

int arr[10001];
int dp[10001];
int num[10001];

int main(){
    int N;
    int idx = 0;
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    dp[0] = 1;
    for(int i=1; i<N; i++){
        int max = 1;
        for(int j=0; j<i; j++){
            if(arr[j]<arr[i]){
                if(max<dp[j]+1){
                    max = dp[j]+1;
                }
            }
        }
        dp[i] = max;
    }
    long long int out = 0;
    for(int i=0; i<N; i++){
        if(out<dp[i]){
            out = dp[i];
            idx = i;
        }
    }
    printf("%lld\n", out);
    num[idx] = arr[idx];
    for(int i=idx-1; i>=0; i--){
        if(arr[i]<arr[idx] && dp[i]+1 == dp[idx]){
            idx = i;
            num[i] = arr[i];
        }
    }
    for(int i=0; i<=N; i++){
        if(num[i]!=0)
            printf("%d ", num[i]);
    }
    
    return 0;
}
