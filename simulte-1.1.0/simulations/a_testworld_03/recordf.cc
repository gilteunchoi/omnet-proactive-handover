#include <stdio.h>
#include <string.h>
#include <omnetpp.h>

using namespace std;
class recordf{
    int a;
    protected:
        virtual void initialize();
        virtual void handleMessage(cMessage *msg);
        int testt();
};

//Define_Moudle(recordf);

void recordf::initialize(){
    mobilityType = getParentModule()->par("mobilityType");
    sprintf("MT: %s", mobilityType);
}

void recordf::handleMessage(cMessage *msg){

}
