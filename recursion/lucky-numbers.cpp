bool isLucky(int n, int &counter) {
    
    if(counter>n)
     return true;
     
    if(n%counter==0)
     return false;
    int net = n - n/counter;
    return isLucky(net,++counter);
}
