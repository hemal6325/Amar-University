#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    printf("\n\t\t\t\t AMAR UNIVERSITY \n\n");
    printf("\n\tDAFFODIL INTERNATIONAL UNIVERTISY       \n");
    printf("\tDaffodil Smart City, Ashulia, Dhaka-1341, Bangladesh.\n \n");

    printf("\tDepartment of Software Engineering.\n \n");

    printf("\tCopyright : \n");
    printf("\tMD Rohejul Islam Hemal - 2023 - All Rights Reserved. \n \n \n");

    printf("\t> 01 --------------------------- DIU Student Portal. \n");
    printf("\t> 02 --------------------------- DIU Blended Learning System. \n");
    printf("\t> 03 --------------------------- DIU Library Portal. \n");
    printf("\t> 04 --------------------------- DIU Notice Board. \n");
    printf("\t> 05 --------------------------- DIU E-mail. \n");
    printf("\t> 06 --------------------------- DIU Drive Service. \n");
    printf("\t> 07 --------------------------- DIU Official Site. \n \n");

    printf("\t> 09 --------------------------- Developer's Information. \n \n \n");

    printf("\tPlease Enter The Number Of The Service : ");
    scanf("%d", &a);

    switch (a)

    {
        case 01:
            system("explorer http://studentportal.diu.edu.bd/");
            break;

        case 02:
            system("explorer https://elearn.daffodilvarsity.edu.bd/");
            break;

        case 03:
            system("explorer https://library.daffodilvarsity.edu.bd/");
            break;

        case 04:
            system("explorer https://daffodilvarsity.edu.bd/department/swe/notice");
            break;

        case 05:
            system("explorer https://mail.google.com/");
            break;

        case 06:
            system("explorer https://drive.google.com/");
            break;

        case 07:
            system("explorer https://daffodilvarsity.edu.bd/");
            break;

        default:
            printf("Your Input Data Is Invalid.");
            break ;
    }

    getch();
}
