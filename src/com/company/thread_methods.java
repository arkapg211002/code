package com.company;
class mythr2 extends Thread{
    public mythr2(String name){
        super(name);

    }
    public void run(){
        int i=0;
        while (i<5){
            System.out.println("I am a thread");i++;

        }
    }
}
class mythr3 extends Thread{
    public mythr3(String name){
        super(name);
    }
    public void run(){
        int i=0;
        while (i<5){
            System.out.println("I am a thread2");i++;
            try {

                Thread.sleep(455);
            }
            catch(InterruptedException e){
                System.out.println(e);
            }
        }
    }
}
public class thread_methods {
    public static void main(String args[]){
        mythr2 t1=new mythr2("arka");
        mythr3 t2=new mythr3("yo");
        t1.start();
        System.out.println(t1.getName());//printed before thread
        System.out.println(t1.getId());//printed before thread
        /*try{
            t1.join();//in try block otherwise interrupted exception may occur
        }
        catch(Exception e){
            System.out.println(e);
        }*/
        t2.start();
        System.out.println(t2.getName());
        System.out.println(t2.getId());
    }
}
