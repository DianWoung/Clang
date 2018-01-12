#include <stdio.h>
#include <string.h>

typedef struct{
    char name[20];
    int  height;
    float weight;
    long schols;
} gstudent;

void hiroko(gstudent *std)
{
    if (std->height < 180) std->height = 180;
    if (std->weight < 80) std->weight = 80;
}

void show_students(gstudent sanaka)
{
    printf("Name is %s\n", sanaka.name);
    printf("Height is %d\n", sanaka.height);
    printf("Weight is %f\n", sanaka.weight);
    printf("Schols is %ld\n", sanaka.schols);
    puts("<--------------->");
}

void swap(gstudent *stu, gstudent *stf)
{
    gstudent temp;

    temp = *stu;
    *stu = *stf;
    *stf = temp;
}

int main(void)
{
    gstudent sanaka;
    gstudent *haruka = &sanaka;
    strcpy(sanaka.name, "Sanaka");
    sanaka.height = 175;
    sanaka.weight = 60.5;
    sanaka.schols = 70000;

    haruka->height = 190;
    show_students(sanaka);


    gstudent yamazaki = {"Yamazaki", 185, 65.50, 80000};

   // hiroko(&yamazaki);
    swap(&yamazaki, &sanaka);
    show_students(sanaka);
    show_students(yamazaki);
    return (0);
}