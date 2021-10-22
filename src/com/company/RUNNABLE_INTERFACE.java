package com.company;

class mythreadrunnable implements Runnable{
    public void run(){
        System.out.println("I am a thread");
    }
}

class mythreadrunnable2 implements Runnable{
    public void run(){
        System.out.println("I am a thread2");
    }
}

public class RUNNABLE_INTERFACE {
    public static void main(String args[]){
        mythreadrunnable ob=new mythreadrunnable();
        Thread gun=new Thread(ob);
        mythreadrunnable2 ob2=new mythreadrunnable2();
        Thread gun2=new Thread(ob2);
        gun.start();
        gun2.start();
    }
}
