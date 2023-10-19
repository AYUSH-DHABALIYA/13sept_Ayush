#include<stdio.h>
void main ()
{
    int type;
    int choice;
    printf("\n1.Non-alcoholic\n2.Alcoholic");
    printf("\nSelect your type : ");
    scanf("%d",&type);
    switch (type)
    {
        case 1:
            printf("\n1.Cartlon zero\n2.Bitburger Drive\n3.Heineken");
            printf("\nSelect your drink :");
            scanf("%d",&choice);

            switch (choice)
            {
                case 1:
                case 2:
                case 3:
                    printf("\nEnjoy your drink - have a good day");
                    break;
    
    
                default:
                    printf("\nSorry, this drink is not available");
                    break;
            }
            break;

       case 2:
            printf("\n1.Kingfisher\n2.Carlsberg\n3.Tuborg");
            printf("\nSelect your drink :");
            scanf("%d",&choice);

            switch (choice)
            {
                case 1:
                case 2:
                case 3:
                    printf("\nEnjoy your drink - have a good day");
                    break;
    
    
                default:
                    printf("\nSorry, this drink is not available");
                    break;
            }
            break;

        default:
            printf("Invalid drink !");
            break;

    }

}
