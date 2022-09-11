class Deque{
    int size,c;
    int*deque;
    Deque{
        size=0;
        deque=new int[size];
    }
}
// method1 -the only disadv is that time complexity for insert f and dequeuef is o(n) instead of o(1);
void insertf(int x){
    if(size==c)
    cout<<'full';
    for(int i=size-1;i>=0;i--){
        deque[i+1]=deque[i];//deque[2]=deque[1],deque[1]=deque[0],
    }
    deque[0]=x;
    size++;
}
int deleter(){
    if(size==0)
    cout<<'empty';
    int x=queue[size-1];
    size--;
    return x;
}
int deletef(){
    if(size==0)
    cout<<"empty";
    int x=dequeue[0];
    for(int i=0;i<size-1;i++)
    deque[i]=deque[i+1];//deque[0]=deque[1]
    size--;
}

//method2-using circular array
f=0;
void insertf(int x){
    if(size==c)
    cout<<"full";
    f=(f+c-1)%c;//in this approach we move front to last of deque so that insertf can work properly
    deque[f]=x;
    size++;
}
void insertr(int x){
 int   r=(f+size-1)%c;//if r=-1
    r=(r+1)%c;
    deque[r]=x;
    size++;
}
int deletef(){
    int x=deque[f];
    f=(f+1)%c;
    size--;
}
int deleter(){
     int   r=(f+size-1)%c;//if r=-1
  int x=deque[r];
  size--;
}