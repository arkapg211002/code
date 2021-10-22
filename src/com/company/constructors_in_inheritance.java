package com.company;

class Base2{
    Base2(){
        System.out.println("I am a constructor");
    }
    Base2(int a){
        System.out.println("I am overloaded constructor"+a);
    }


    public  int x;
    public int getX(){
        return x;
    }
    public void setX(int x)
    {
        this.x=x;
    }

}
class derived2 extends Base2{
    derived2(){
        super(0);
        System.out.println("I am derived constructor");
    }
    public int y;
    public int getY(){
        return y;
    }
    public void setY(int y){
        this.y=y;
    }
}
 class child extends derived2{
            child(){
                System.out.println("i am child of derived2");
            }
        }
public class constructors_in_inheritance{
    public static void main(String args[])
    {
        Base2 b = new Base2();
        //Base2 b1=new Base2(0);
        derived2 d=new derived2();
        child c=new child();
    }

}