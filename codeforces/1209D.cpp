    #include<bits/stdc++.h>
     
    #define ll long long
    #define INF 2147483647
     
    int inp(){
        char c = getchar();
        int neg = 1;
        while(c < '0' || c > '9'){
            if(c == '-')
                neg = -1;
            c = getchar();
        }
        int sum = 0;
        while(c >= '0' && c <= '9'){
            sum = sum * 10 + c - '0';
            c = getchar();
        }
        return sum * neg;
    }
     
    int x[100010], y[100010];
     
    std::vector<int> vec[100010];
    int fa[100010];
     
    int find(int x){
        return (fa[x] == x) ? x : (fa[x] = find(fa[x]));
    }
     
    int main(){
        int n = inp();
        int k = inp();
        for(int i = 1; i <= n; i++)
            fa[i] = i;
        int ans = 0;
        for(int i = 1; i <= k; i++){
            x[i] = inp();
            y[i] = inp();
            int fu = find(x[i]);
            int fv = find(y[i]);
            if(fu == fv)
                ans++;
            else
                fa[fu] = fv;
        }
        printf("%d\n", ans);
    }
