# Invent an Imaginary Embedded System

## Prompt
Tell us about an embedded system that does not exist. It can be grandiose or strange; it can be
something just one step beyond what you have around you. Ideally it is something you
personally want to build (even if physics doesn’t allow it). What is it? What does it do? What
general components do you need?

## Problem Statement
To continue to explore dangerous unknown lands we should find disposable solutions to survey the land before we send people.

## Solution
Create a swarm of Hexapods which communicate with each other to plot out an area.

### Why a Hexapod?
This platform has increased stability and mobility when the terrain is uneven.

## High Level Diagram
![Components of Hexapod](high-level-diagram.png?raw=true "High Level Diagram")

## Details

### MCU
A compute unit capable of SLAM is required for this project to parse the sensor data in realtime and provide movement commands to motor controller.

### Sensors
Both Lidar and an IR Camera are used for mapping out the area. This allows imaging in a low light environment.

### Communication
Wireless communication is required to transfer data between each robot, in this case Bluetooth is used.

### Impossible Aspect
The impossible part of this project is the software architecture that can handle near perfect SLAM using a multi robot approach where each robot is transmitting its "map" to the rest of the group so one map can eventually be returned to the survey team.