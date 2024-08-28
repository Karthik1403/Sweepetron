# Sweepetron


# Abstract
With the advent of Automation, Robotics technology breakthroughs have made life much easier and   more comfortable for humans. Currently, high-priced floor cleaning robots produced industrially are beyond the purchasing capability of normal households in third world countries. our goal is to build a cost-effective and multiple featured floor cleaner robot. The robot contains ultrasonic sensors and IR sensors to detect any obstacle in front of the robot, vacuum cleaner to remove dust on the floor and cleaning mops with water supply system. The robot is mainly featured in two ways as "Bluetooth controlled system" and "Autonomous system". With this, the main computer on board will be an Arduino micro controller. One novel contribution of this work is the introduction of removable smart phone with IP webcam application installed, for computer vision to record the video of the cleaning process through which the robot can be assisted and monitered anywhere via hotspot.


# Working
An automatic floor cleaner robot has a mop attached to it, along with a water supply system to clean the floor.The water supply system contains a motor which pumps the water from the container, and a long thin pipe extended till the mop, wherein the water falls on the ground and the mop cleans the floor.The mop is connected to a DC motor which rotates 360 degree and helps for better cleansing action. It has a Vacuum cleaner section that sucks in the dust while moving around the room freely. This vacuum cleaner is controlled using separate switch, and used when the mopping action is not required. This robot is also provided with an option to be controlled in two modes .i.e., both as "Automated" and "Bluetooth Controlled". Here the controller used is an Arduino UNO which controlls all the sensors and actuators.This robot in "Automated" mode uses ultrasonic sensors to avoid obstacles and change its direction. Also, they work using sound waves and so lighter or darker environment wouldn't cause any hurdles for the model to work. This ultrasonic sensor is placed at the front of the system, on a stepper motor, which when rotates left and right the ultrasonic sensor can get the distance of the obstacle across 180 degree. For the Manual mode, we've used a Bluetooth which is used to establish a connection between the user's mobile phone and the model, so that the user can operate the model manually. The robot system is provided with a special feature .i.e., a removable smartphone with IP Webcam for "Computer Vision". This additional system used helps to record the video of the cleaning process in order to assist the robot in absence of a master This system can be controlled anywhere through hotspot and the cleaning process of the system can be monitored from anywhere. The robot is made movable using four wheels, all connected to motors and to the Arduino through the Motor drivers. The front two wheels are used when the system is in "Automated" mode, and the back wheels are used when "Bluetooth Controlled". The entire system needs a lot of power which can't be provided by the Arduino, hence a 12V 2A battery is connected. The overall system is provided with a single switch in order to power on, or power off the robot.
