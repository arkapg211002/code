package com.company;

class A{
    public int h(){
        return 4;
    }
    public void meth2(){
        System.out.println("I am method 2 of class A");
    }
}

class B extends A{
    @Override
    public  void meth2(){
        System.out.println("I am method 2 of class b");
    }
    public void meth3(){
        System.out.println("I am method 3 of class B");
    }
}

public class methodoverriding {
    public static void main(String args[]){
        A a=new A();
        a.meth2();
        B b =new B();
        b.meth3();
        b.meth2();
    }
}
