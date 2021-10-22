package com.company;

class mythr extends Thread{
    public mythr(String name){
        super(name);

    }
    public void run(){
        int i=0;
        while (i<5){
            System.out.println("I am a thread");i++;

        }
    }
}
public class thread_constructor {
    public static void main(String args[]){
        mythr t=new mythr("arka");
        t.start();
        System.out.println(t.getId());
        System.out.println(t.getName());
    }
}
