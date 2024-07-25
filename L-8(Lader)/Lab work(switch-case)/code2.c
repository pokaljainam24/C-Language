// 2. Write a Program to create a menu-driven program for Telecom call service conversation using nested switch case.

// #include <stdio.h>

// int main()
// {
//     int choice;
//     printf("Enter your choice:\n1. Call\n2. SMS\n3. Data\n");
//     scanf("%d", &choice);
//     switch (choice)
//     {
//     case 1:
//         printf("You have selected Call\n");
//         printf("Enter the number of minutes you want to talk\n");
//         int minutes;
//         scanf("%d", &minutes);
//         printf("Your bill is %d", minutes * 10);
//         break;
//     case 2:
//         printf("You have selected SMS\n");
//         printf("Enter the number of SMS you want to send\n");
//         int sms;
//         scanf("%d", &sms);
//         printf("Your bill is %d", sms * 5);
//         break;
//     case 3:
//         printf("You have selected Data\n");
//         printf("Enter the number of GB you want to use\n");
//         int gb;
//         scanf("%d", &gb);
//         printf("Your bill is %d", gb * 100);
//         break;
//     }
//     default{
//         printf("Invalid choice");
//         break;
//     }
//  }

// Type-2

#include <stdio.h>

int main()
{
    int language_choice, recharge_choice;

    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");
    printf("Enter your choice: ");
    scanf("%d", &language_choice);

    switch (language_choice)
    {
    case 1:
        printf("------------------------------------\n");
        printf("Press 1 for Internet Recharge\n");
        printf("Press 2 for Top-up Recharge\n");
        printf("Press 3 for Special Recharge\n");
        printf("Enter your choice: ");
        scanf("%d", &recharge_choice);

        switch (recharge_choice)
        {
        case 1:
            printf("You have successfully done an Internet Recharge.\n");
            break;
        case 2:
            printf("You have successfully done a Top-up Recharge.\n");
            break;
        case 3:
            printf("You have successfully done a Special Recharge.\n");
            break;
        default:
            printf("Invalid choice for recharge.\n");
            break;
        }
        break;

    case 2:
        printf("------------------------------------\n");
        printf("Press 1 for Internet Recharge\n");
        printf("Press 2 for Top-up Recharge\n");
        printf("Press 3 for Special Recharge\n");
        printf("Enter your choice: ");
        scanf("%d", &recharge_choice);

        switch (recharge_choice)
        {
        case 1:
            printf("आपने सफलतापूर्वक इंटरनेट रिचार्ज किया है।\n");
            break;
        case 2:
            printf("आपने सफलतापूर्वक टॉप-अप रिचार्ज किया है।\n");
            break;
        case 3:
            printf("आपने सफलतापूर्वक विशेष रिचार्ज किया है।\n");
            break;
        default:
            printf("रिचार्ज के लिए अमान्य विकल्प।\n");
            break;
        }
        break;

    case 3:
        printf("------------------------------------\n");
        printf("Press 1 for Internet Recharge\n");
        printf("Press 2 for Top-up Recharge\n");
        printf("Press 3 for Special Recharge\n");
        printf("Enter your choice: ");
        scanf("%d", &recharge_choice);

        switch (recharge_choice)
        {
        case 1:
            printf("તમે સફળતાપૂર્વક ઇન્ટરનેટ રિચાર્જ કર્યું છે.\n");
            break;
        case 2:
            printf("તમે સફળતાપૂર્વક ટોપ-અપ રિચાર્જ કર્યું છે.\n");
            break;
        case 3:
            printf("તમે સફળતાપૂર્વક વિશેષ રિચાર્જ કર્યું છે.\n");
            break;
        default:
            printf("રિચાર્જ માટે અમાન્ય વિકલ્પ.\n");
            break;
        }
        break;

    default:
        printf("Invalid choice for language.\n");
        break;
    }
}
