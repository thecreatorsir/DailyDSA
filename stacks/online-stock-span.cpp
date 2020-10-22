class StockSpanner {
       stack <int> span;
       stack <int> s;
public:
    StockSpanner() {

    }
    
    int next(int price) {
        int count = 1;
            while(!s.empty() and price >=s.top()){
                count+=span.top();
                s.pop();
                span.pop();
            }
            s.push(price);
            span.push(count);
      return count; 
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
