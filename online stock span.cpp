static auto magic = []() {ios_base::sync_with_stdio(false); cin.tie(nullptr); return false;};

class StockSpanner {
public:
    stack<array<int, 2>> st;
    int count;
    
    StockSpanner() {
        count=0;
    }

int next(int price) {
    while(!st.empty() and st.top()[0] <= price) st.pop();
    int ans = st.empty() ? count+1 : count - st.top()[1];
    st.push({price,count++});
    return ans;
}
};