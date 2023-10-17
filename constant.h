#ifndef MENUS_H
#define MENUS_H

#define ADMIN_LOGIN_ID "admin"
#define ADMIN_PASSWORD "MKMLcD69qK5FU"

#define INVALID_LOGIN "The login ID specified doesn't exist!$"
#define INVALID_PASSWORD "The password specified doesn't match!$"
#define INVALID_MENU_CHOICE "You'll now be redirected to the main menu!^"
#define ERRON_INPUT_FOR_NUMBER "It seems you have passed a sequence of alphabets when a number was expected or you have entered an invalid number!\nYou'll now be redirected to the main menu!^"
#define WROND_CRAD "Your Id or Password is not valid !!\nPlease try again.."

#define GET_STUDENT_ID "Enter the student ID you're searching for: "

#define GET_FACULTY_ID "Enter the ID you're searching for: "

// MENUS
#define LOGIN_MENU "---x--- Welcome Back to Academia :: Course Registration ---x---\n Login Type\n 1. Admin\n 2. Faculty\n 3. Student\nEnter Your Choice: "
#define ADMIN_MENU "---x--- Welcome to Admin Menu ---x---\n 1.Add Student\n 2.View Student Details\n 3.Add Faculty\n 4.View Faculty Details\n 5.Activate Student\n 6.Block Student\n 7.Modify Student Details\n 8.Modify Faculty Details\n 9.Logout and Exit\nEnter Your Choice: "
#define FACULTY_MENU "---x--- Welcome to Faculty Menu ---x---\n1.View Offering Courses\n2.Add New Courses\n3.Remove Course from Catalog\n4.Update Course Details\n5.Change Password\n6.Logout and Exit\nEnter Your Choice: "
#define STUDENT_MENU "---x--- Welcome to Studet Menu ---x---\n1.View all Courses\n2.Enroll New Course\n3.Drop Course\n4.View Enrolled Course Details\n5.Change Password\n6.Logout and Exit\nEnter Your Choice: "

#define ADMIN_LOGIN_WELCOME "\nGreat power comes great responsibility!!\nEnter your credentials to unlock this power!! : "
#define FACULTY_LOGIN_WELCOME "Hello Faculty\nEnter your credentials to gain access to your account : \n"
#define STUDENT_LOGIN_WELCOME "Hello Student\nEnter your credentials to gain access to your account : \n"

#define GET_NAME "Enter your name: "
#define GET_AGE "Enter your age: "
#define GET_EMAIL "Enter your Email: "
#define GET_ADDRESS "Enter your Address: "
#define GET_GENDER "Enter your gender: "
#define GET_DEPARMENT "Enter your deparment: "
#define GET_DESIGNATION "Enter your designation: "
#define LOGIN_ID "Enter your login ID: "
#define PASSWORD "Enter your password: # "
#define CHANGE_PASSWORD "Enter new password : # "

#define ADMIN_ADD_AUTOGEN_LOGIN "The autogenerated login ID is : "
#define AUTOGEN_PASSWORD "password" // append to end of next string macro : password
#define ADMIN_ADD_AUTOGEN_PASSWORD "The autogenerated password is : "
#define ADMIN_ADD_WRONG_GENDER "It seems you've enter a wrong gender choice!\nYou'll now be redirected to the main menu!^"

#define ID_DOESNT_EXIT "No data found for the given ID"
#define LOGIN_ID_DOESNT_EXIT "No data found for the given login ID$"

// MODIFY STUDENT INFO
#define ADMIN_MOD_STUDENT_ID "Enter the ID of the student who's information you want to edit : "
#define ADMIN_MOD_STUDENT_MENU "Which information would you like to modify?\n1. Name\n2. Age\n3. Gender\n4. Emial\n5. Address\nPress any other key to cancel : "

// MODIFY FACULTY INFO
#define ADMIN_MOD_FACULTY_ID "Enter the ID of the faculty who's information you want to edit : "
#define ADMIN_MOD_FACULTY_MENU "Which information would you like to modify?\n1. Name\n2. Department\n3. Designation\n4. Emial\n5. Address\nPress any other key to cancel : "

#define ADMIN_MOD_NEW_NAME "What's the updated value for name? "
#define ADMIN_MOD_NEW_GENDER "What's the updated value for gender? "
#define ADMIN_MOD_NEW_AGE "What's the updated value for age? "
#define ADMIN_MOD_NEW_EMAIL "What's the updated value for email? "
#define ADMIN_MOD_NEW_ADDRESS "What's the updated value for address? "
#define ADMIN_MOD_NEW_DEPARTMENT "What's the updated value for deparment? "
#define ADMIN_MOD_NEW_DESIGNATION "What's the updated value for designation? "
#define ADMIN_MOD_SUCCESS "The required modification was successfully made!\nYou'll now be redirected to the main menu!^"
#define FACULTY_MOD_COURSE_ID "Enter the ID of the course who's information you want to edit : "
#define FACULTY_MOD_COURSE_MENU "Which information would you like to modify?\n1. Name\n2. Department\n3. Seats\n4. Credit\nPress any other key to cancel : "

#define STUDENT_ADD_COURSE_MENU "Enter Course ID you want to enroll : "

// FACULTY FUNCTION
#define FACULTY_COURSE_NAME "Enter Course Name : "
#define FACULTY_COURSE_DEPARTMENT "Enter COurse Department : "
#define FACULTY_COURSE_SEATS "Enter Number of Seats : "
#define FACULTY_COURSE_CREDIT "Enter Course Credits : "
#define FACULTY_MOD_SUCCESS "The required modification was successfully made!\nYou'll now be redirected to the main menu!^"
#define FACULTY_MOD_NEW_SEATS "What's the updated value for Seats? "
#define FACULTY_MOD_NEW_CREDIT "What's the updated value for Credit? "
#define FACULTY_MOD_COURSE_ID "Enter the ID of the course who's information you want to edit : "

// STUDENT FUNCTION
#define STUDENT_MOD_SUCCESS "The required modification was successfully made!\nYou'll now be redirected to the main menu!^"

#define LOGOUT "Logging you out! Good bye!$"

#define FACULTY_FILE "./records/faculty.txt"
#define STUDENT_FILE "./records/student.txt"
#define COURSE_FILE "./records/course.txt"
#endif
