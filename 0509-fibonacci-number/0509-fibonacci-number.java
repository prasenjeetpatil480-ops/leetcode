class Solution {
    public int fib(int n) {
        if(n==0)
        {
            return 0;
        }
        else if(n==1)
        {
            return 1;
        }
        int Fterm=0;
        int Sterm=1;
        int TT;
        for(int i=1;i<=n;i++){
           TT=Fterm+Sterm;
           Fterm=Sterm;
           Sterm=TT; 
        }
        return Fterm;
    }
}