package com.company;

class Base{
    int x;
    public int getX(){
        return x;
    }
    public void setX(int x){
        System.out.println("I am in base and setting cx now");
        this.x=x;
    }
    public void Printme(){
        System.out.println("I ama constructor");
    }



}

class Derived extends Base{
    int y;
    public int getY(){
        return y;
    }
    public void setY(int y){
        this.y=y;
    }
}

public class Inheritance
{
    public static void main(String[] args) {
        Base b=new Base();
        b.setX(4);
        System.out.println(b.getX());

        //derived class object
        Derived d=new Derived();
        d.setY(7);
        System.out.println(d.getY());
        System.out.println("Hello");
    }

}

