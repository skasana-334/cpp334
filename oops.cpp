#include <bits/stdc++.h>
using namespace std;
/* class is used when we have gto make our own datatype*/

/* as we create the object then there will be a constructor created i.e default constructor only once
-it is of same name as class
-it has no return and argument value
it will help to initialise the object with garbage value*/

class student{
    public:
    int age;
    string name;
   student(){
cout<<"def"<<endl;
   }
   student(int a){
        age=a;
        cout<<"par"<<endl;
    }/* this is parameterised constructor as we are passing argument it made by us*/
    
    student(int a,string name){
      /* in this type of ambiguity where our variable name is same as argument we use * this* keyword
      which holds the address of the object in which we are passing the value*/
    /* thisis a pointer that points to the object for which this function wascalled*/
     /* it means this is a pointer*/
     age=a; /*here using this is optional as it is clear here */ 
     this->name=name;// if we do not use this then only works for 1 object and cannot be access for other
    }
    /* template for copy constructor*/
    student(student &a){
      cout<<"c4"<<endl;
      age=a.age;
      name=a.name;
    }
      void p(){
        cout<<age<<" "<<name<<endl;
    }
};

int main(){
    /*static allocation*/
    student s1;
    student s2;//like int x; initialise a variable
    /*here internally s1.student() default constructor will create*/
  s1.name="bjbj";
  s1.age=21;// like x=4;assigning the value  u can't initialise if it is private 
  
              /* dynamic allocation*/
             student *s3=new student;//like int *x=new int;
          (*s3).name="hbj";
         // (*s3).age=13;//as s3 will store the address of student
          //  s3->name="hbj";//alter way
           
student s4(10,"hjj");
student s5(5);


/* this is how to access parameterised const otherwise default will access*/

/* if we do not want to write default then we have to create student object with param. like student s1(bkn) ,student s1;will not work
then*/
(*s3).p();
s4.p();
s5.p();

/* if we want to copy the attributes of one object we can use copy constructor*/
student s6(s4);// alter way student s6=s4;
s6.p();
student *s7=new student(20,"sagar");
student s8(*s7);
s8.p();
/* we cannot to this s2(s1) as they are created by calling other constructors and one object can cally constructor only once */
/* we can s22=s1;*/
return 0;
}
