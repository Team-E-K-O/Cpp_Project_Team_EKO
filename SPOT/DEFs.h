#pragma once

//This header file contains some defenitions to be used all over the application
#include <string>

using namespace std;
typedef string Course_Code;


//Semesters
enum SEMESTER
{
	FALL,
	SPRING,
	SUMMER,
	SEM_CNT	//number of semesters 
};
//Issues for the registrar
enum Issue
{
	None, Moderate, Critical
};
//All possible actions
enum ActionType
{
	ADD_CRS,	//Add a course to study plan
	DEL_CRS,	//Delete a course from study plan


	SAVE,		//Save a study plan to file
	LOAD,		//Load a study plan from a file

	UNDO,		//Undo the last Action preformed
	REDO,		//Redo the last Action canceled
	MOVE,       //Move Course
	EDIT,   //Edit a course in the study plan
	EDITTYPE,
	REPORT,     //Show the report for the current state
	EXIT,		//Exit the application

	STATUS_BAR,	//A click on the status bar
	MENU_BAR,	//A click on an empty place in the menu bar
	DRAW_AREA,	//A click in the drawing area
	NOTES, //A click in the notes area
	MOD_GRADE,
	CANCEL,		//ESC key is pressed


	//TODO: Add more action types

};

//to sotre data related to the last action
struct ActionData
{
	ActionType actType;
	int x, y;
	
};


