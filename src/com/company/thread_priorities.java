package com.company;
class mythr1 extends Thread{
    public mythr1(String name){
        super(name);

    }
    public void run(){
        int i=0;
        while (i<5){
            System.out.println("I am a thread");i++;

        }
    }
}
public class thread_priorities {
    public static  void main(String args[]){
        mythr1 t1=new mythr1("arka");
        mythr1 t2=new mythr1("yo");
        mythr1 t3=new mythr1("boom");
        t3.setPriority(Thread.MAX_PRIORITY);
        t1.start();
        t2.start();
        t3.start();
        System.out.println(t1.getId());
        System.out.println(t1.getName());

        System.out.println(t2.getId());
        System.out.println(t2.getName());

        System.out.println(t3.getId());
        System.out.println(t3.getName());
    }
}
