class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
        priority_queue < pair <int ,pair<int,int>>> maxh;
        vector<vector <int>> o(k);
       
        for(int i=0;i<arr.size();i++)
        {
            maxh.push(make_pair(arr[i][0]*arr[i][0]+arr[i][1]*arr[i][1],make_pair(arr[i][0],arr[i][1])));
            if(maxh.size()>k)
                maxh.pop();
        }
        int j=0;
        // pair <int,int> p=maxh.top().second;
        //     o[0].push_back(p.first);
        while(maxh.size()>0)
        {
            pair <int,int> p=maxh.top().second;
            o[j].push_back(p.first);
            o[j].push_back(p.second);
            maxh.pop();
            j++;
        }
        return o;
        
    }
};