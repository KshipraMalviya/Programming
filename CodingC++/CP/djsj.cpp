class BrowserHistory 
{
public:
    string home;
    queue<string> current;
    queue<string> history;
    BrowserHistory(string homepage) 
    {
        home=homepage;
        current.push(home);
    }
    
    void visit(string url) 
    {
        current.push(url);
        while(!history.empty()) history.pop();
    }
    
    string back(int steps) 
    {
        if(current.size()>=steps)
        {
        while(steps--)
        {
            string t=current.front();
            history.push(t);
            current.pop();
        }
        return current.front();
        }
        return NULL;
    }
    
    string forward(int steps) 
    {
        if(history.size()>=steps)
        {
        while(steps--)
        {
            string t=history.front();
            current.push(t);
            history.pop();
        }
        return current.front();
        }
        return NULL;
    }
};