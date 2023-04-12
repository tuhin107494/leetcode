
class Solution {
public:
long long mod=1000000007,n,lo,ro,le,re;
long long int pw[1005],pre[1005],suf[1005];
void power()
{ 
      pw[0]=1;
   for(int i=1;i<=1000;i++)
   {
       pw[i]=(pw[i-1]*397)%mod;

   }

}

long long int sub(long long int m)
{

  for(int i=m;i<=n;i++)
  {
      long long int left=((pre[i]-(pre[i-m]*pw[m]))%mod+mod)%mod;
      long long int right=((suf[i-m+1]-(suf[i+1]*pw[m]))%mod+mod)%mod;
      if(left==right)
      {
    if(m%2){lo=i-m,ro=i-1;}
    else {le=i-m,re=i-1;}
       return 1;
      }
  }

return 0;


}
int odd()
{
     vector<long long int>v;
         for(int i=1;i<=n;i+=2)v.push_back(i);
        long long int l=0,r=v.size(),f=0;
        r--;
        while(l<=r)
        {
            if(l==r)
            {
                f++;if(f==2)break;
            }
            long long int mid=(l+r+1)/2;
            if(sub(v[mid]))
            {
                l=mid;
            }
            else r=mid-1;
        }
        return v[l];
}
int even()
{
        vector<long long int>v;
         for(int i=0;i<=n;i+=2)v.push_back(i);
        long long int l=0,r=v.size(),f=0;
        r--;
        while(l<=r)
        {
            if(l==r)
            {
                f++;if(f==2)break;
            }
            long long int mid=(l+r+1)/2;
            if(sub(v[mid]))
            {
                l=mid;
            }
            else r=mid-1;
        }
        return v[l];

}
    string longestPalindrome(string s) {
         n=s.size();
         power();
         for(int i=0;i<s.size();i++)
         {
           pre[i+1]=((pre[i]*397)%mod+s[i])%mod;
         }
         for(int i=n-1;i>=0;i--)
         {
           suf[i+1]=((suf[i+2]*397)%mod+s[i])%mod;
           
         }
        
       if(odd()<even())
       {
           return s.substr(le,(re-le+1));
       }
       else return s.substr(lo,(ro-lo+1));
     
    }
};
