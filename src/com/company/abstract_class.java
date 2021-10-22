package com.company;

abstract class base{
    public base(){
        System.out.println("I am in base");
    }
    public void sayhello(){
        System.out.println("Hello");
    }
    abstract public void greet();
}

class base2 extends base{
    @Override
    public void greet(){
        System.out.println("Good morning");
    }
}

abstract class base3 extends base{
    public void th(){
        System.out.println("I am good");
    }
}//abstract class object CANNOT  BE CREATED
/*to create concrete class the methods from abstract class needs to be overridden
it is possible to create reference of abstract class
* */

public class abstract_class {
    public static void main(String args[]){
        base2 ob=new base2();
    }
}
