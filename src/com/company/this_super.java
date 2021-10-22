package com.company;

class ekclass{
    int a;
    public int getA(){
        return a;
    }
    ekclass(int v){
        this.a=v;
    }

    public int returnone(){
        return 1;
    }
}
class doclass extends ekclass{
    doclass(int c){
        super(c);
        System.out.println("I am a constructor");
    }
}



public class this_super {
    public static void main(String args[])
    {
        ekclass e=new ekclass(5);
        doclass d=new doclass(5);
        System.out.println(e.getA());
    }

}
