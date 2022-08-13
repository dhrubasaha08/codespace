/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                        Time Table Generator
            NAME - BISHAL MONDAL , ROLL NO.-200102020
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
ASSUMPTIONS:

    Here we are not differentiating between branches.
    One class can only have maximum of 8 courses, i.e. N+M<=8 for that course.
    One class can have maximum of 6 theory courses.
    one teacher can teach only 5 courses.
    We are assuming course code has 4 characters and each one should be in UPPERCASE.
    Courses having strict naming structures .
    First character tells about class
    ---->'1' = 1ST year undergraduate, '2' = 2ND year undergraduate,'3' = 3RD year undergraduate, '4' = 4TH year undergraduate, 'M' = Masters 1ST year, 'P' = PHD 1ST year
    Second character tells about whether theory or lab or tutorial class.
    ---->'N' = Theory class, 'M' = Lab class, 'L' = Tutorial
    Last two characters are numerical .
    The tutorial class should have same numerical value for corresponding theory class.

    Example : "2L67" = Theory class for 2ND year undergraduate which has numerical value 67.

    Theory_class_timing should be answered as "afternoon" or "morning"
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct course
{
    char code[4];
} COURSE;

typedef struct class
{
    char name[20];
    int t_c;
    int l_c;
    int tut_c;
    COURSE *c_class;
    char theory_class_timing[10];
} CLASS;

typedef struct teacher
{
    char name[20];
    int t_c;
    int l_c;
    int tut_c;
    struct course *c_T;
} TEACHER;

void main()
{
    struct CLASS *class_ptr;
    struct teacher *teacher_ptr;
    class_ptr = (struct CLASS *)calloc(6, sizeof(struct CLASS));
    int i, N = 0, M = 0, L = 0;
    int Z[6];
    for (i = 0; i < 6; i++)
    {
        printf("CLASS NAME :");
        scanf("%s", (class_ptr[i]).name);
        printf("NO. of Theory classes : ");
        scanf("%d", &(class_ptr + i)->t_c);
        N = N + ((class_ptr + i)->t_c);
        printf("NO. of Lab classes : ");
        scanf("%d", &(class_ptr + i)->l_c);
        M = M + ((class_ptr + i)->l_c);
        printf("NO. of Tutorial classes : ");
        scanf("%d", &(class_ptr + i)->tut_c);
        L = L + ((class_ptr + i)->tut_c);
        Z[i] = (class_ptr + i)->t_c + (class_ptr + i)->l_c + (class_ptr + i)->tut_c;
        (class_ptr + i)->c_class = (struct course *)calloc((Z[i]), sizeof(struct course));
        int j;
        printf("Courses code : ");
        for (j = 0; j < Z[i]; j++)
        {
            scanf("%s", class_ptr[i].c_class[j].code);
        }
        printf("Enter Theory class Timings for This Class : ");
        scanf("%s", class_ptr[i].theory_class_timing);
    }
    int P;
    P = N / 2;
    teacher_ptr = (st
                       ruct teacher *)calloc(P, sizeof(struct teacher));
    int j;
    int *W = (int *)malloc(P * sizeof(int));
    for (j = 0; j < P; j++)
    {
        printf("TEACHER NAME :");
        scanf("%s", (teacher_ptr + j)->name);
        printf("NO. of Theory classes : ");
        scanf("%d", &(teacher_ptr + j)->t_c);
        printf("NO. of Lab classes : ");
        scanf("%d", &(teacher_ptr + j)->l_c);
        printf("NO. of Tutorial classes : ");
        scanf("%d", &(teacher_ptr + j)->tut_c);
        W[i] = (teacher_ptr + j)->t_c + (teacher_ptr + j)->l_c + (teacher_ptr + j)->tut_c;
        (teacher_ptr + j)->c_T = (struct course *)calloc((W[i]), sizeof(struct course));
        int k;
        printf("Courses code : ");
        for (k = 0; k < W[i]; ++k)
        {
            scanf("%s", teacher_ptr[j].c_T[k].code);
        }
    }
    for (i = 0; i < 6; i++)
    {
        printf("CLASS NAME : %s\n", ((class_ptr + i)->name));

        printf("NO. of Theory classes : %d\n", ((class_ptr + i)->t_c));

        printf("NO. of Lab classes : %d\n", ((class_ptr + i)->l_c));

        printf("NO. of Tutorial classes : %d\n", ((class_ptr + i)->tut_c));

        int j;
        printf("Courses code : ");
        for (j = 0; j < Z[i]; j++)
        {

            printf(" %s ,", (class_ptr[i].c_class[j].code));
        }
        printf("\nTheory class Timings for This Class : %s\n", (class_ptr[i].theory_class_timing));
    }
    printf("Total Theory classes : %d", N);
    printf("Total Lab classes : %d", M);
    printf("Total Tutorial classes : %d", L);
    for (j = 0; j < P; j++)
    {
        printf("TEACHER NAME :%s\n", ((teacher_ptr + j)->name));

        printf("NO. of Theory classes : %d\n ", ((teacher_ptr + j)->t_c));

        printf("NO. of Lab classes : %d\n", (teacher_ptr + j)->l_c);

        printf("NO. of Tutorial classes :%d\n ", ((teacher_ptr + j)->tut_c));

        int k;
        printf("Courses code : ");
        for (k = 0; k < W[i]; k++)
        {
            printf(" %s ,", (teacher_ptr[j].c_T[k].code));
        }
    }
}
