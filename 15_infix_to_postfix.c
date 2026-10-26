#include <stdio.h>
#include <ctype.h>
int pr(char c)  {
    return c=='^'?3:(c=='*'||c=='/'||c=='%')?2:(c=='+'||c=='-')?1:0;
}
int main()  {
    char s[200], o[200], st[200];
    int t=-1, j=0;
    scanf("%199s", s);
    for(int i=0;s[i];i++)  {
        char c=s[i];
        if(isalnum((unsigned char)c))o[j++]=c;
        else if(c=='(')st[++t]=c;
        else if(c==')')  {
            while(t>=0&&st[t]!='(')o[j++]=st[t--];
            if(t<0)return 1;
            t--;
        } else if(pr(c))  {
            while(t>=0&&st[t]!='('&&(pr(st[t])>pr(c)||(pr(st[t])==pr(c)&&c!='^')))o[j++]=st[t--];
            st[++t]=c;
        } else return 1;
    }
    while(t>=0)o[j++]=st[t--];
    o[j]=0;
    puts(o);
}
