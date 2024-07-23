// Bill
// P_Name: Book
// Qty: 5
// Price: 250
// Total:- 1250
// Dis :- 125
// Net Total ?

// Dis:-
// 1500 >= 15%
// 1000 >= 10%
// 800>= 8%
// 0

// using nasted if else leder

// #include <stdio.h>

// int main()
// {
//     char P_name[] = "Book";
//     int Qty = 5;
//     float Price = 250;
//     float Total = Qty * Price;
//     float Dis = 0;
//     float Net_Total = 0;

//     if (Total >= 1500)
//     {
//         Dis = Total * 0.15;
//         Net_Total = Total - Dis;
//     }
//     else if (Total >= 1000)
//     {
//         Dis = Total * 0.10;
//         Net_Total = Total - Dis;
//     }
//     else if (Total >= 800)
//     {
//         Dis = Total * 0.08;
//         Net_Total = Total - Dis;
//     }
//     else if (Total >= 0)
//     {
//         Net_Total = Total;
//     }
//     printf("P_Name: %s\n", P_name);
//     printf("Qty: %d\n", Qty);
//     printf("Price: %f\n", Price);
//     printf("Total: %f\n", Total);
//     printf("Dis: %f\n", Dis);
//     printf("Net Total: %f\n", Net_Total);
// }

// Type-2

#include <stdio.h>
int main()
{
    char P_name[20];
    int Qty;
    float Price, Total, Dis, Net_Total;

    printf("Enter P_name: ");
    scanf("%s", &P_name);

    printf("Enter Qty: ");
    scanf("%d", &Qty);

    printf("Enter Price: ");
    scanf("%f", &Price);

    Net_Total = Qty * Price;

    if (Net_Total >= 1500)
    {
        printf("Bill is %.2f , Discount is : 15%%", (Net_Total * 15) / 100);
    }
    else if (Net_Total >= 1000)
    {
        printf("Bill is %.2f , Discount is : 10%%", (Net_Total * 10) / 100);
    }
    else if (Net_Total >= 800)
    {
        printf("Bill is %.2f , Discount is : 8%%", (Net_Total * 8) / 100);
    }
    else
    {
        printf("Bill is %.2f , Discount is : 0%%", Net_Total);
    }
}
