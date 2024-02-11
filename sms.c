
// School management system using c language.
// code written by ~ ryo.
// date: 2/12/23.

// preprocessor directives.

#include <stdio.h>
#include <string.h>

// structure for storing details of students under one roof.

struct school
{
    char first_name[10];
    char last_name[10];
    int school_id;
    int roll_number;
    int course_id[5];
    float CGPA;
} student[10];

// add student fucntion to add student details.

void add_student(int *student_count, int course_count, int max_student)
{
    // if statement to ensure there is no buffer overflow once the max student count has been reached.
    if (*student_count < max_student)
    {
        printf("Enter First Name Of The Student. \n");
        scanf("%s", &student[*student_count].first_name);
        printf("Enter Last Name Of The Student. \n");
        scanf("%s", &student[*student_count].last_name);
        printf("Enter Student ID. \n");
        scanf("%d", &student[*student_count].school_id);
        printf("Enter The Roll Number of The Student. \n");
        scanf("%d", &student[*student_count].roll_number);
        printf("Enter The Course ID Of The Courses Student Is Enrolled In. \n");
        for (int i = 0; i < course_count; i++)
        {
            scanf("%d", &student[*student_count].course_id[i]);
        }
        printf("Enter CGPA Of The Student. \n");
        scanf("%f", &student[*student_count].CGPA);

        //(*student_count) to keep tab on total number of student.
        (*student_count)++;
    }
    else
    {
        printf("ERROR MAXIMUM NUMBER OF STUDENTS REACHED. NO MORE STUDENTS CAN BE ADDED. \n");
    }
}

// search_by_ID function to search student details by school id.

void search_by_ID(int student_count, int course_count)
{
    int student_school_id;
    printf("Enter Student School ID. \n");
    scanf("%d", &student_school_id);

    // initial assumpttion id being not found.
    int student_found = 0;

    for (int i = 0; i < student_count; i++)
    {
        if (student_school_id == student[i].school_id)
        {
            printf("\t\t\tThe Student Details Are:\t\t\t\n");
            printf("\t\t\t------------------------\t\t\t\n");
            printf("The First Name Of The Student Is: %s\n", student[i].first_name);
            printf("The Last Name Of The Student Is: %s\n", student[i].last_name);
            printf("The Roll Number Of The Student Is: %d\n", student[i].roll_number);
            printf("The Course ID Of The Courses Student Is Enrolled in Are: \n");
            for (int j = 0; j < course_count; j++)
            {
                printf("%d\n", student[i].course_id[j]);
            }
            printf("The CGPA Of The Student Is: %f\n", student[i].CGPA);

            // flag to indicate student id is found.
            student_found = 1;

            // break statemnt if student id is found.
            break;
        }
    }

    // if statement if student id not found.
    if (student_found != 1)
    {
        printf("The Student ID Is Not Found. \n");
    }
}

// find_by_roll_number function to find a student details by roll number.

void find_by_roll_number(int student_count, int course_count)
{
    int student_roll_number;
    printf("Enter Students Class Roll Number. \n");
    scanf("%d", &student_roll_number);

    // initial assumption of student roll number being not found.
    int student_found = 0;

    for (int i = 0; i < student_count; i++)
    {
        if (student_roll_number == student[i].roll_number)
        {
            printf("\t\t\tThe Student Details Are:\t\t\t\n");
            printf("\t\t\t------------------------\t\t\t\n");
            printf("The First Name Of The Student Is: %s\n", student[i].first_name);
            printf("The Last Name Of The Student Is: %s\n", student[i].last_name);
            printf("The School ID Of The Student Is: %d\n", student[i].school_id);
            printf("The Course ID Of The Courses Student Is Enrolled in Are: \n");
            for (int j = 0; j < course_count; j++)
            {
                printf("%d\n", student[i].course_id[j]);
            }
            printf("The CGPA Of The Student Is: %f\n", student[i].CGPA);

            // flag to indicate student roll is found.
            student_found = 1;

            // break out of loop once student roll number is found.
            break;
        }
    }
    if (student_found != 1)
    {
        printf("The Student ID Is Not Found. \n");
    }
}

// search_by_first_name function to search details of students by first name.

void search_by_first_name(int student_count, int course_count)
{
    char first_name_of_student[10];
    printf("Enter First Name Of Student. \n");
    scanf("%s", &first_name_of_student);

    // initial assumption of student roll number being not found.

    int student_found = 0;

    for (int i = 0; i < student_count; i++)
    {
        if (strcmp(first_name_of_student, student[i].first_name) == 0)
        {
            printf("\t\t\tThe Student Details Are:\t\t\t\n");
            printf("\t\t\t------------------------\t\t\t\n");
            printf("The First Name Of The Student Is: %s\n", student[i].first_name);
            printf("The Last Name Of The Student Is: %s\n", student[i].last_name);
            printf("The School ID Of The Student Is: %d\n", student[i].school_id);
            printf("The Class Roll Number Of The Student Is: %d\n", student[i].roll_number);
            printf("The Course ID Of The Courses Student Is Enrolled in Are: \n");
            for (int j = 0; j < course_count; j++)
            {
                printf("%d\n", student[i].course_id[j]);
            }
            printf("The CGPA Of The Student Is: %f\n", student[i].CGPA);

            // flag to indicate student roll is found.
            student_found = 1;

            // break out of loop once student roll number is found.
            break;
        }
    }
    if (student_found != 1)
    {
        printf("The Student ID Is Not Found. \n");
    }
}

// display_details_of_all_students function to display details of all the students.

void display_details_of_all_students(int student_count, int course_count)
{
    for (int i = 0; i < student_count; i++)
    {
        printf("\t\t\tThe Student Details Are:\t\t\t\n");
        printf("\t\t\t------------------------\t\t\t\n");
        printf("The First Name Of The Student Is: %s\n", student[i].first_name);
        printf("The Last Name Of The Student Is: %s\n", student[i].last_name);
        printf("The School ID Of The Student Is: %d\n", student[i].school_id);
        printf("The Class Roll Number Of The Student Is: %d\n", student[i].roll_number);
        printf("The Course ID Of The Courses Student Is Enrolled in Are: \n");
        for (int j = 0; j < course_count; j++)
        {
            printf("%d\n", student[i].course_id[j]);
        }
        printf("The CGPA Of The Student Is: %f\n", student[i].CGPA);
    }
}

// total_student function to indicate total number of students.

void total_student(int student_count)
{
    printf("The Total Of Students Are: %d\n", student_count);
    printf("The Max Allowed Student Is 10. \n");
    printf("%d More Students Details Can Be Added. \n", 10 - (student_count));
}

// display_student_details_using_course_id(student_count)

void display_student_details_using_course_id(int student_count, int course_count)
{
    int subject_course_id;
    printf("Enter Subject Course ID. \n");
    scanf("%d", &subject_course_id);

    // initial assumption of student roll number being not found.

    int student_found = 0;

    for (int i = 0; i < student_count; i++)
    {
        for (int j = 0; j < course_count; j++)
        {
            if (subject_course_id == student[i].course_id[j])
            {
                printf("\t\t\tThe Student Details Are:\t\t\t\n");
                printf("\t\t\t------------------------\t\t\t\n");
                printf("The First Name Of The Student Is: %s\n", student[i].first_name);
                printf("The Last Name Of The Student Is: %s\n", student[i].last_name);
                printf("The School ID Of The Student Is: %d\n", student[i].school_id);
                printf("The Class Roll Number Of The Student Is: %d\n", student[i].roll_number);
                printf("The CGPA Of The Student Is: %f\n", student[i].CGPA);

                // flag to indicate course id has been found.
                student_found = 1;

                // break to stop iterating one's the course id has been found.
                break;
            }
        }
    }
    if (student_found != 1)
    {
        printf("The Course ID Cannot Be Found. \n");
    }
}

// update_student_information function to update student information.
void update_student_information(int student_count, int course_count)
{
    int student_school_id;
    printf("Enter Student School ID. \n");
    scanf("%d", &student_school_id);

    // index to update information if index != -1;
    int student_index = -1;

    // for loop to update index to positive and to match school id.
    for (int i = 0; i < student_count; i++)
    {
        if (student_school_id == student[i].school_id)
        {
            // index updates every time i updates.
            student_index = i;

            // no need to check if there is a match found.
            break;
        }
    }

    // if statement to updated information if index != -1.
    if (student_index != -1)
    {
        printf("Enter First Name Of The Student. \n");
        scanf("%s", &student[student_index].first_name);
        printf("Enter Last Name Of The Student. \n");
        scanf("%s", &student[student_index].last_name);
        printf("Enter Student ID. \n");
        scanf("%d", &student[student_index].school_id);
        printf("Enter The Roll Number of The Student. \n");
        scanf("%d", &student[student_index].roll_number);
        printf("Enter The Course ID Of The Courses Student Is Enrolled In. \n");
        for (int i = 0; i < course_count; i++)
        {
            scanf("%d", &student[student_index].course_id[i]);
        }
        printf("Enter CGPA Of The Student. \n");
        scanf("%f", &student[student_index].CGPA);
    }
    else
    {
        printf("The Student ID Cannot Be Found. \n");
    }
}

// delete_student_infirmation to delete student information.
void delete_student_information(int *student_count)
{
    int roLLnumber;
    printf("Enter Roll Number Of Student You Wish To Delete Information Of. \n");
    scanf("%d", &roLLnumber);

    // flag to indicate the student has yet not been found.
    int student_index = -1;

    for (int i = 0; i < *student_count; i++)
    {
        if (roLLnumber == student[i].roll_number)
        {
            // index set to i if student is found.
            student_index = i;

            // break if student is found.
            break;
        }
    }

    // if statement to delete student information if student_index != 1.
    if (student_index != -1)
    {
        for (int i = student_index; i < *student_count; i++)
        {
            student[i] = student[i + 1];
        }

        // decrease student count to indicate a student information has been deleted.
        (*student_count)--;
        printf("Student Information Has Been Deleted Successfully. \n");
    }
    else
    {
        printf("The Student Roll Number Was Not Found. \n");
    }
}

// main function to create a variable to keep tab on student count and to call in functions using switch cases.
void main()
{
    int student_count = 0;
    int choice;

    do
    {
        printf("\t\t\t__________SCHOOL MANAGEMENT SYSTEM__________\t\t\t\n");
        printf("\t\t\t---------------------------------------------\t\t\t\n");
        printf("1.Enter Students Details. \n");
        printf("2.Search Student Details using School ID. \n");
        printf("3.Search Students Details using Roll Number. \n");
        printf("4.Search Students Details using First Name. \n");
        printf("5.Display Details of All The Students. \n");
        printf("6.Display Student Details Using Course Id. \n");
        printf("7.Display Total Number of Students. \n");
        printf("8.Update Students Information. \n");
        printf("9.Delete Student Information. \n");
        printf("0.Exit. \n");
        printf("\t\t\t---------------------------------------------\t\t\t\n");
        printf("Select The Task You Wish to Perform. \n");
        scanf("%d", &choice);
        printf("\t\t\t---------------------------------------------\t\t\t \n");

        switch (choice)
        {
        case 1:
            add_student(&student_count, 5, 10);
            break;
        case 2:
            search_by_ID(student_count, 5);
            break;
        case 3:
            find_by_roll_number(student_count, 5);
            break;
        case 4:
            search_by_first_name(student_count, 5);
            break;
        case 5:
            display_details_of_all_students(student_count, 5);
            break;
        case 6:
            display_student_details_using_course_id(student_count, 5);
            break;
        case 7:
            total_student(student_count);
            break;
        case 8:
            update_student_information(student_count, 5);
            break;
        case 9:
            delete_student_information(&student_count);
            break;
        case 0:
            printf("You Exited From The Program. \n");
        default:
            break;
        }
    } while (choice != 0);
}