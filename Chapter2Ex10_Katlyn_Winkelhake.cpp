/*
Title: Chapter 2 Exercise 10
File Name: Chapter2Ex10_Katlyn_Winkelhake.cpp
Programmer: Katlyn Winkelhake
Date: Aug 31 2023
Requirements:
A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a program that calculates the number of miles per gallon the car gets. Display the result on the screen.

Hint: Use the following formula to calculate miles per gallon (MPG):

MPG = Miles Driven/Gallons of Gas Used
Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so

that the user can enter the number of gallons and the miles driven.

*/

#include <iostream>
using namespace std;


int main()
{
	double gallons = 15;
	double miles = 375;

	double MilesPerGallon = miles / gallons;

	cout << "The car gets " << MilesPerGallon << " MPG.";



	return 0;
}