## Copyright (c) 2017 by Vincenzo Pappano


## Introduction to Embedded Systems Software and Development Environments

A repository to hold the course asssignments for ECEN5013, offered, through Coursera, by the University of Colorado, Boulder. This course teaches basic programming techniques for an ARM Cortex-M4F (specifically the MSP432 Mixed-Signal Microcontroller from Texas Instruments). A number of tools will be used throughout the course: GCC, GDB (both running on an Ubuntu VM), git, and github

## Development Environment

The code was developed using GCC on a Oracle VM running Ubuntu 16.04.3 LTS, Rel.: 16.04. Running gcc --version on a terminal window produced the following output

```
gcc (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609)
```

## Running the Code

Enter the following commands in the terminal window 

```
gcc -o stats.out stats.c
```

Upon successful compilation, you can run the code by issuing the following command

```
./stats.out
```