deque<int>dq;
void insertmin(int x){
dq.push_front(x);
}
void insertmax(int x){
    dq.push_back(x);
}
int getmin(){
    return dq.front();
}