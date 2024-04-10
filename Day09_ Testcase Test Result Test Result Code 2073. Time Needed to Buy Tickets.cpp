class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int  time=0;
        for(int i=0;i<tickets.size();i++)
        {
            if(tickets[k]>tickets[i])
            {
                time=time+tickets[i];
            }
            else
            {
              if(i<=k)
                {time=time+tickets[k];}
                else
                {time=time+(tickets[k]-1);}
            }
        }

        return time;
    }
};