class Solution {
public:
    int countStudents(vector<int>& stu, vector<int>& sw) {
        queue<int>stuQ;
        stack<int>sandS;
        for(int s:stu){
            stuQ.push(s);
        }
        for(int i=sw.size()-1;i>=0;i--){
            sandS.push(sw[i]);
        }
        int cnt=0;
        int n=stu.size();
        while(!stuQ.empty()&&!sandS.empty()){
            if(stuQ.front()==sandS.top()){
                stuQ.pop();
                sandS.pop();
                cnt=0;
            }else{
                stuQ.push(stuQ.front());
                    stuQ.pop();
                cnt++;
            }
        
        if(cnt==n){
            break;
        }
        }
        return stuQ.size();
        
        
        
        
        
        
        
        
    }
};