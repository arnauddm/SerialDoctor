# SerialDoctor

SerialDoctor is a software that I develop for a friend.
With this software, you can :

  - Scan serials ports
  - Open and close serial port
  - Send and receive data trought your serial peripheral

# Required !

To use this software, you will need :
- For the compilation :
    * Clang or gcc
    * Qt
    * QMake
- The serial library : https://github.com/arnauddm/Serial

### Compilation
You have two solutions to compile this project, the first solution is to compile the `Serial.hpp` and `Serial.cpp` as a library (static or dynamic) to use it in many projects and the second solution is to put the `Serial.hpp` and the `Serial.cpp` files into the current folder of this software.

### QMake
Note : in your .pro file, you must add the lines below
```console
QT +=	serialport	\
		core		\
		widgets		\
		gui
```

### Soon
Soon you will be able to use much than 1 port with this software.
