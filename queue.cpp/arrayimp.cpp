class*Queue{
    public:
    int f,r,c;
    int queue[c];
    Queue{
        f=-1,r=-1;
        
    }}
    //method 1
void enqueue(int x){
    if(r+1==c)
    cout<<'full';
    else{
        if(f==-1&&r==-1){
        f=0,r=0;
        queue[r]=x;}
        r++;
        queue[r]=x;
    }
}
int dequeue{
    if(f==-1 )
    cout<<'empty';
    else{
        int a=queue[f];
        for(int i=f;i<r-1;i++){
            queue[i]=queue[i+1];
        }  
        r--;
        
        return a;    
    }
}
int front(){
    return queue[f];
}
int rear{
    return queue[r];
}
//method 2 using size
int size=0;
void enqueue(int x){
  if(size==c)
  cout<<'full';
  else{
    queue[size]=x;
    size++;
  }
}
int dequeue{
   if(size==0)
   cout<<'empty';
   else{
    int a=queue[0];
for(int i=0;i<size-1;i++)
queue[i]=queue[i+1];
    size--;
   }
}
int front(){
    return queue[0];
}
int rear(){
    return queue[size-1];//size is increasing after inserting elements
}
// method 3 using circular queue in this we use f=f+1 approach
f=0;
size=0;

void enque(int x){
   if(size==c)
   cout<<'full';
   else{
      if(f==-1)
        f=0;
    r=(f+size-1)%c;
    r=(r+1)%c;
       queue[r]=x;
    size++;
   }
}
int dequeue(){
    if(size==0)
    cout<<'empty';
    int a=queue[f];
    f=(f+1)%c;
    size--;
}
int front(){
    return f;
}
int rear(){
    return   r=(f+size-1)%c;;
}