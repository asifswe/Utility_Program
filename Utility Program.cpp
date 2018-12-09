#include <bits/stdc++.h>
#include <conio.h>

int length();
int temperature();
int age_cal();
void history_age();

int main()
{
    system("cls");
    int choice;
    choice:
    printf("\n\n\n\n\n\n\n\t\t\t\tConvert_Length\t\t>------>   Press 1");
    printf("\n\t\t\t\tConvert_Temperature\t>------>   Press 2");
    printf("\n\t\t\t\tCalculate_Age\t\t>------>   Press 3");
    printf("\n\t\t\t\tHistory      \t\t>------>   Press 4");
    printf("\n\t\t\t\tExit\t\t\t>------>   Press 5");
    printf("\n\n\t\t\t\tEnter Your Choice....");
    scanf ("%d", &choice);
    if(choice <= 0 || choice >= 6)
    {
        system("cls");
        printf("Invalid input, Please enter the correct key\n\n");
        goto choice;
    }
    else if(choice == 5)
    {
        system("cls");
        exit(1);
    }

    switch(choice)
    {
    case 1:
        length();
        getch();
        break;
    case 2:
        temperature();
        getch();
        break;
    case 3:
        age_cal();
        getch();
        break;
    case 4:
        history_age();
        getch();
        break;
    default :
        return 0;
    }
    return 0;
}




int length()
{
    system("cls");
    float centimeter, meter, kilometer, convert_number;
    int length_number;
    printf("\n\n\n\n\n\n\n\t\t\t\tCentimeter to Meter\t\t>------>   Press 1");
    printf("\n\t\t\t\tCentimeter to Kilometer\t\t>------>   Press 2");
    printf("\n\t\t\t\tMeter to Centimeter\t\t>------>   Press 3");
    printf("\n\t\t\t\tMeter to Kilometer\t\t>------>   Press 4");
    printf("\n\t\t\t\tKilometer to Centimeter\t\t>------>   Press 5");
    printf("\n\t\t\t\tKilometer to Meter\t\t>------>   Press 6");
    printf("\n\t\t\t\tMain menu\t\t\t>------>   Press 7");
    printf("\n\n\t\t\t\tEnter Your Choice....");
    scanf ("%d", &length_number);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    while (length_number > 0 && length_number < 8)
    {
        switch(length_number)
        {
        case 1:
            printf("\n\t\t\t\t\t\tCentimeter : ");
            scanf("%f", &convert_number);
            printf("\t\t\t\t\t\tMeter      : %.2f\n", convert_number / 100);
            getch();
            break;
        case 2:
            printf("\n\t\t\t\t\t\tCentimeter : ");
            scanf("%f", &convert_number);
            printf("\t\t\t\t\t\tKilometer  : %.2f\n", convert_number / 100000);
            getch();
            break;
        case 3:
            printf("\n\t\t\t\t\t\tMeter      : ");
            scanf("%f", &convert_number);
            printf("\t\t\t\t\t\tCentimeter : %.2f\n", convert_number * 100);
            getch();
            break;
        case 4:
            printf("\n\t\t\t\t\t\tMeter     : ");
            scanf("%f", &convert_number);
            printf("\t\t\t\t\t\tKilometer : %.2f\n", convert_number / 1000);
            getch();
            break;
        case 5:
            printf("\n\t\t\t\t\t\tKilometer  : ");
            scanf("%f", &convert_number);
            printf("\t\t\t\t\t\tCentimeter : %.2f\n", convert_number * 100000);
            getch();
            break;
        case 6:
            printf("\n\t\t\t\t\t\tKilometer : ");
            scanf("%f", &convert_number);
            printf("\t\t\t\t\t\tMeter     : %.2f\n", convert_number * 1000);
            getch();
            break;
        case 7:
            main();
            getch();
            break;
        default:
            break;
        }
        system("cls");
        printf("\n\n\n\n\n\n\n\t\t\t\tCentimeter to Meter\t\t>------>   Press 1");
        printf("\n\t\t\t\tCentimeter to Kilometer\t\t>------>   Press 2");
        printf("\n\t\t\t\tMeter to Centimeter\t\t>------>   Press 3");
        printf("\n\t\t\t\tMeter to Kilometer\t\t>------>   Press 4");
        printf("\n\t\t\t\tKilometer to Centimeter\t\t>------>   Press 5");
        printf("\n\t\t\t\tKilometer to Meter\t\t>------>   Press 6");
        printf("\n\t\t\t\tMain menu\t\t\t>------>   Press 7");
        printf("\n\n\t\t\t\tEnter Your Choice....");
        scanf ("%d", &length_number);
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n");
    }
    return 0;
}




int temperature()
{
    system("cls");
    float convert_number;
    int temperature_number;
    printf("\n\n\n\n\n\n\n\t\t\t\tCelsius to Fahrenheit\t\t>------>   Press 1");
    printf("\n\t\t\t\tCelsius to Kelvin\t\t>------>   Press 2");
    printf("\n\t\t\t\tFahrenheit to Celsius\t\t>------>   Press 3");
    printf("\n\t\t\t\tFahrenheit to Kelvin\t\t>------>   Press 4");
    printf("\n\t\t\t\tKelvin to Celsius\t\t>------>   Press 5");
    printf("\n\t\t\t\tKelvin to Fahrenheit\t\t>------>   Press 6");
    printf("\n\t\t\t\tMain menu\t\t\t>------>   Press 7");
    printf("\n\n\t\t\t\tEnter Your Choice....");
    scanf ("%d", &temperature_number);
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    while (temperature_number > 0 && temperature_number < 8)
    {
        switch(temperature_number)
        {
        case 1:
            printf("\n\t\t\t\t\t\tCelsius    : ");
            scanf("%f", &convert_number);
            printf("\t\t\t\t\t\tFahrenheit : %.2f\n", convert_number * 1.8 + 32);
            getch();
            break;
        case 2:
            printf("\n\t\t\t\t\t\tCelsius  : ");
            scanf("%f", &convert_number);
            printf("\t\t\t\t\t\tKelvin   : %.2f\n", convert_number + 273.15);
            getch();
            break;
        case 3:
            printf("\n\t\t\t\t\t\tFahrenheit : ");
            scanf("%f", &convert_number);
            printf("\t\t\t\t\t\tCelsius    : %.2f\n", (convert_number - 32) * .5556);
            getch();
            break;
        case 4:
            printf("\n\t\t\t\t\t\tFahrenheit : ");
            scanf("%f", &convert_number);
            printf("\t\t\t\t\t\tKelvin     : %.2f\n", (convert_number + 459.67) * 5/9);
            getch();
            break;
        case 5:
            printf("\n\t\t\t\t\t\tKelvin  : ");
            scanf("%f", &convert_number);
            printf("\t\t\t\t\t\tCelsius : %.2f\n",  convert_number - 273.15);
            getch();
            break;
        case 6:
            printf("\n\t\t\t\t\t\tKelvin     : ");
            scanf("%f", &convert_number);
            printf("\t\t\t\t\t\tFahrenheit : %.2f\n", convert_number * 9/5 - 459.67);
            getch();
            break;
        case 7:
            main();
            getch();
            break;
        default:
            break;
        }
        system("cls");
        printf("\n\n\n\n\n\n\n\t\t\t\tCelsius to Fahrenheit\t\t>------>   Press 1");
        printf("\n\t\t\t\tCelsius to Kelvin\t\t>------>   Press 2");
        printf("\n\t\t\t\tFahrenheit to Celsius\t\t>------>   Press 3");
        printf("\n\t\t\t\tFahrenheit to Kelvin\t\t>------>   Press 4");
        printf("\n\t\t\t\tKelvin to Celsius\t\t>------>   Press 5");
        printf("\n\t\t\t\tKelvin to Fahrenheit\t\t>------>   Press 6");
        printf("\n\t\t\t\tMain menu\t\t\t>------>   Press 7");
        printf("\n\n\t\t\t\tEnter Your Choice....");
        scanf ("%d", &temperature_number);
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n");
    }
    return 0;
}




int isLeapYear(int year,int mon)
{
    int flag=0;
    if(year%100==0)
    {
        if(year%400==0)
        {
            if(mon==2)
            {
                flag=1;
            }
        }
    }
    else if(year%4==0)
    {
        if(mon==2)
        {

            flag=1;
        }
    }
    return 0;
}


int age_cal()
{
    system("cls");
    FILE *asif_h;
    int DaysInMon[]= {31, 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31
                     };
    int days,month,year,choice;
    char dob[100],name[20];
    time_t ts;
    struct tm *ct;

    asif_h = fopen("asif_history.txt","a");

    printf("Enter your name : ");
    scanf("%s",name);

    printf("\n\n\n\n\n\n\n\t\t\t\tEnter your date of birth (DD/MM/YYYY): ");
    scanf("%d/%d/%d",&days,&month,&year);
    int d_1 = days;
    int m_1 = month;
    int y_1 = year;

    ts=time(NULL);
    ct=localtime(&ts);

    printf("\n\t\t\t\tCurrent Date: %d/%d/%d\n",ct->tm_mday,ct->tm_mon+1,ct->tm_year+1900);
    int a = ct->tm_mday;
    int b = ct->tm_mon+1;
    int c = ct->tm_year+1900;

    days=DaysInMon[month-1]-days+1;

    if(isLeapYear(year,month))
    {
        days=days+1;
    }

    days=days+ct->tm_mday;
    month=(12-month)+(ct->tm_mon);
    year=(ct->tm_year+1900)-year-1;

    if(isLeapYear((ct->tm_year+1900),(ct->tm_mon+1)))
    {
        if (days>=(DaysInMon[ct->tm_mon]+1))
        {
            days=days-(DaysInMon[ct->tm_mon]+1);
            month=month+1;
        }
    }
    else if(days>=DaysInMon[ct->tm_mon])
    {
        days=days-(DaysInMon[ct->tm_mon]);
        month=month+1;
    }

    if(month>=12)
    {
        year=year+1;
        month=month-12;
    }

    fprintf(asif_h,"\n%s %d %d %d %d %d %d %d %d %d",name,d_1,m_1,y_1,a,b,c,days,month,year);
    fclose(asif_h);

    system("cls");
    printf("\n\n\n\n\n\n\n\t\t\t\tHey you are  %d years %d months and %d days old.\n", year, month, days);
    getch();
    system("cls");
    printf("\n\n\n\n\n\n\t\t\t\t\tContinue\t\t>------>   Press 1");
    printf("\n\t\t\t\t\tMain menu\t\t>------>   Press 2");
    printf("\n\n\t\t\t\t\tEnter your choice....");
    scanf("%d",&choice);

    if(choice == 1)
    {
        age_cal();
    }
    else(choice == 2);
    {
        main();
    }
    return 0;
}


void history_age()
{
    system("cls");
    FILE *asif_h;
    //printf("\n\t\t\t\tHistory of Age Calculator : \n");

    int i=1;
    int d_1,m_1,y_1,a,b,c,days,month,year;
    char name[20];

    asif_h=fopen("asif_history.txt","r");
    if(asif_h==NULL)
    {
        printf("Error!");
        exit(1);
    }

    while(fscanf(asif_h,"\n%s %d %d %d %d %d %d %d %d %d",name,&d_1,&m_1,&y_1,&a,&b,&c,&days,&month,&year)!=EOF)
    {
        printf("\n\t\t\t\t%d.",i);
        printf("\n\t\t\t\tName          : %s",name);
        printf("\n\t\t\t\tDate of Birth : %d/%d/%d",d_1,m_1,y_1);
        printf("\n\t\t\t\tDate of Tried : %d/%d/%d",a,b,c);
        printf("\n\t\t\t\tAge           : %d years %d months and %d days old\n",year,month,days);
        i++;
        \
        printf("\n\n");
    }

    fclose(asif_h);
    system("pause");
    main();

}


