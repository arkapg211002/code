package com.company;
class one{
    public void name(){
        System.out.println("my name is java");
    }
}

class two extends one{
    public void swagat(){
        System.out.println("apka swagart hae");
    }
    @Override
    public void name(){
        System.out.println("my name is java in class two");
    }

}
public class dynamic_method_dispatch {
    public static void main(String args[]){
        //one ob=new one();
        //two obj=new two();
        //ob.name();
        one ob2=new two();
        //superclass reference can be equal to subclass object but reverse not possible
        ob2.name();//subclass method executed--dynamic method dispatch--runtime polymorphism---object creation during program run


    }
}
