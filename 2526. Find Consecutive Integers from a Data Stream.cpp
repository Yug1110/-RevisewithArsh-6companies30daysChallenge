class DataStream {
public:
    int k_prime, value_prime;
    queue<int>q;
    unordered_map<int,int>mp;
    DataStream(int value, int k) {
        k_prime=k;
        value_prime=value;
    }
    
    bool consec(int num) {
        q.push(num);
        mp[num]++;
        if(q.size()>k_prime){
            int front = q.front();
            q.pop();
            mp[front]--;
        }
        if(q.size()<k_prime){
            return false;
        }
        else if(mp[value_prime]!=k_prime){
            return false;
        }

        return true;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */
