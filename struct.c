/* #include <stdio.h>

typedef struct{
 int roll;
 char name[10];
 double pyh , chem , Mahs;
}Student;

void inputstrudent(Student *sp);
void printsudent(Student sp);
char Getgrade(Student sp);
double Getavgmarks(Student sp);

void inputstrudent(Student *sp)
{
    printf("Enter the roll\n");
    scanf("%d",&sp->roll);
    printf("Enter the name of student\n");
    scanf("%s",sp->name);
    printf("Enter the pyh student\n");
    scanf("%lf",&sp->pyh);
    printf("Enter the chem student\n");
    scanf("%lf",&sp->chem);
    printf("Enter the mahs student\n");
    scanf("%lf",&sp->Mahs);
    

}
void printsudent(Student sp)
{
    printf("Roll : %4d\n",sp.roll);
    printf("Name : %-20s\n",sp.name);
    printf("Grad pyhsicl: %10.2lf\n",sp.pyh);
    printf("Grad chemistry : %10.2lf\n",sp.chem);
    printf("Grad Mahs: %10.2lf\n",sp.Mahs);
    printf("Grade:   %-4C",Getgrade(sp));
}

double Getavgmarks(Student sp)
{
  int sum = 0.0;
  sum = sp.pyh+sp.chem+sp.pyh;
  return sum / 3.0;
}
char Getgrade(Student sp)
{
   char grad;
   double avg = Getavgmarks(sp);

   if(avg>=90)
     grad = 'A';
   else if(avg >= 80 && avg < 90)
     grad = 'B';
   else if(avg >= 70 && avg < 80)
     grad = 'C';
   else if(avg >= 60 && avg < 70)
      grad = 'D';
   else if (avg >= 50 && avg < 60)
      grad = 'E';
   else
    grad = 'F';
   
 return grad;
}
int main(void)
{
    Student s;
    inputstrudent(&s);
    printsudent(s);
 return 0;
} */

#include <stdio.h>

typedef struct{
   int roll;
   char name[20];
   double Pyh,Mahs,Chem;
}Student;

void inputstrudent(Student *SP);
void printsudent(Student SP);
char Getgrade(Student SP);
double Getavgmarks(Student SP);

void inputstrudent(Student *SP)
{
   printf("Enter the roll \n");
   scanf("%d",&SP->roll);

   printf("Enter the name \n");
   scanf("%s",SP->name);

   printf("Enter pyhsical \n");
   scanf("%lf",&SP->Pyh);

   printf("Enter chemcal \n");
   scanf("%lf",&SP->Chem);

   printf("Enter Mahs \n");
   scanf("%lf",&SP->Mahs);
}

void printsudent(Student SP)
{
    printf("ROll : %d\n",SP.roll);
    printf("Name : %s\n",SP.name);
    printf("degre pyh :%lf\n",SP.Pyh);
    printf("degre chem :%lf\n",SP.Chem);
    printf("degre Mahs:%lf\n",SP.Mahs);
    printf("the grade is : %4c\n",Getgrade(SP));
}

double Getavgmarks(Student SP)
{
    int sum = 0.0;
    sum = SP.Pyh + SP.Chem + SP.Mahs;
    return sum / 3.0;
}

char Getgrade(Student SP)
{
    char grad;
    double avg= Getavgmarks(SP);

    if(avg>=90)
      grad ='A';
    else if(avg>=80 && avg<90)
      grad ='B';
    else if(avg>=70 && avg<80)
      grad ='C';
    else if(avg>=60 && avg<70)
      grad ='D';
    else if(avg>=50 && avg<60)
      grad ='E';
    else 
      grad ='F';
 return grad;   
}
int main(void)
{
   Student s;

   inputstrudent(&s);
   printsudent(s);
 return 0;
}