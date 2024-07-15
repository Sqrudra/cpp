
#include <iostream>
using namespace std;
class test
{

protected:

int TestCode;

char Description[50];

int NoCandidate;

int CenterReqd;

int CALCNTR();


public:

void SCHEDULE()
{
cout << "Enter testcode:";
cin >> TestCode;
cout << "Enter discription:";
cin >> Description;
cout << "Enter a number of candidate:";
cin >> NoCandidate;
}
void DISPTEST();
};

class derived:public test
{
    public:
    void DISPTEST()

    {
        cout << "testcode: "<< TestCode << endl;
        cout << "discription: " << Description << endl;
        cout << "number of candidate: " << NoCandidate << endl;
        cout << "Center Required:" << CALCNTR();
    }
};
int test::CALCNTR()

{

CenterReqd = (NoCandidate / 100 + 1);

return CenterReqd;

}

int main()

{

 derived obj;


obj.SCHEDULE();

obj.DISPTEST();


return 0;
 }
