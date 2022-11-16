
#include<bits/stdc++.h>
    void revers2(stack<int> &St, int temp)
    {
        if(St.size()==0)
        {
            St.push(temp);
            return ;
        }
        int t=St.top();
        St.pop();
        revers2(St,temp);
        St.push(t);
    }
    void revers1(stack<int> &St)
    {
        if(St.size()==0)
        {
            return;
        }
        
        int temp=St.top();
        St.pop();
        revers1(St);
        
        revers2(St,temp);
    }
    void Reverse(stack<int> &St)
    {
        revers1(St);
    }
