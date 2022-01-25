
# Welcome to Proactive Handover Simulation!

## VERSIONS

- Ubuntu-16.04
- GCC-5.5.0
- omnetpp-5.4.1
- simulte-1.1.0
- veins-5.0
- inet-3.6.6
- sumo-1.0.1

## INIT
Run SUMO:
```
$ python2 ./veins-veins-5.0/sumo-launchd.py
$ omnetpp
```
Run As OMNeT++ Simulation:
```
./lte/simulations/a_testworld_01/omnetpp1.ini
                 /a_testworld_02/omnetpp2.ini
                 /a_testworld_03/omnetpp3.ini
                             ...
```                            
## SUMO related Commands

### A) if you want sumo GUI while in simulation:
```
$ python2 ./veins-veins-5.0/sumo-launchd.py -vv -c {sumo-gui path}
```
{sumo-gui path}: install folder/sumo-1.0.1/bin/sumo-gui

### B) to customize the road network:
```
$ netedit {pathname}.net.xml
```

### C) to generate random vehicle trips:
```
$ ./sumo-1.0.1/tools/randomTrips.py –n {pathname}.net.xml –o {tripname}.rou.xml –p 10 –e 3600
```
- https://sumo.dlr.de/docs/Tools/Trip.html

## For whom work after me
Good Luck and Enjoy!<br>
2022, Jan, Gilteun Choi
