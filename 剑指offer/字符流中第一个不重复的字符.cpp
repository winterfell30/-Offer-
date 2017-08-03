class Solution
{
public:
  //Insert one char from stringstream
    Solution()
    {
        while (!q.empty()) q.pop();
        memset(vis, 0, sizeof(vis));
    }
    
    void Insert(char ch)
    {
        vis[ch-'\0']++;
        if (vis[ch-'\0'] == 1)
            q.push(ch-'\0');
            
            
    }
  //return the first appearence once char in current stringstream
    char FirstAppearingOnce()
    {
        while (!q.empty() && vis[q.front()] > 1) 
            q.pop();
        if (q.empty()) return '#';
        else return q.front();
    }
private:
    int vis[256];
    queue<int> q;

};
