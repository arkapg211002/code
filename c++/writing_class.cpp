#include <iostream>
using namespace std;
class employee
{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a1,int b1,int c1);
    void getdata()
    {
        cout<<a<<b<<c<<d<<e;

    }
};
void employee::setdata(int a1,int b1,int c1)
{
    a=a1;b=b1;c=c1;

}
int main()

{
    employee apg;apg.d=34;apg.e=39;
    apg.setdata(1,2,4);
    apg.getdata();
    return 0;
}

