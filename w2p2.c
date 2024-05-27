/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P2)
Full Name  : Prithivi Mishra
Student ID#: 155297237
Email      : pmishra5@myseneca.ca
Section    : ZAA

Authenticity Declaration:

I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

/******************************************************************************/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const double Tax = 0.13;
    const char patSize = 'S';
    const char tomSize = 'L';
    const char salSize = 'M';
    int SmallQty,MediumQty,LargeQty,tonnies,lonnies,quatar,dimes,nickel,pennies;
    float smallsubtotal,mediumsubtotal,largesubtotal,smallTaxs,mediumTaxs,largeTaxs,smallTotal,mediumTotal,largeTotal,totalofTaxs,totalofsubtotal,totalofTotal,Balance,Averagecost,Averagecost_t;
    float S_shirt,M_shirt,L_shirt;
    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%f",& S_shirt);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%f",&M_shirt);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%f",&L_shirt);
    printf("\n");
    printf("Shirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2lf\n",S_shirt);
    printf("MEDIUM : $%.2lf\n",M_shirt);
    printf("LARGE  : $%.2lf\n\n",L_shirt);
    printf("Patty's shirt size is '%c'\n",patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d",&SmallQty);
    printf("\n");
    printf("Tommy's shirt size is '%c'\n",tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("%d",&LargeQty);
    printf("\n");
    printf("Sally's shirt size is '%c'\n",salSize);
    printf("Number of shirts Sally is buying: ");
    scanf("%d",&MediumQty);
    printf("\n");    
    smallsubtotal=(S_shirt*SmallQty);
    mediumsubtotal=(M_shirt*MediumQty);
    largesubtotal=(L_shirt*LargeQty);
    totalofsubtotal=smallsubtotal+mediumsubtotal+largesubtotal;   
    smallTaxs=(smallsubtotal*Tax+0.0012);
    mediumTaxs=(mediumsubtotal*Tax+0.0008);
    largeTaxs=(largesubtotal*Tax+0.0017);
    totalofTaxs=smallTaxs+mediumTaxs+largeTaxs;
    smallTotal =(smallsubtotal+smallTaxs);
    mediumTotal =(mediumsubtotal+mediumTaxs);
    largeTotal =(mediumsubtotal+largeTaxs+0.0700);
    totalofTotal=smallTotal+mediumTotal+largeTotal;
    printf("Customer Size price Qty Sub-total\tTax\tTotal\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",patSize,S_shirt,SmallQty,(double)smallsubtotal,(double)smallTaxs,(double)smallTotal);
    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",salSize,M_shirt,MediumQty,(double)mediumsubtotal,(double)mediumTaxs,(double)mediumTotal);
    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",tomSize,L_shirt,LargeQty,(double)largesubtotal,(double)largeTaxs,(double)largeTotal);
    printf("                         %33.4lf %9.4lf %9.4lf\n\n",(double)totalofsubtotal,(double)totalofTaxs,(double)totalofTotal);   
    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n\n");
    tonnies=totalofsubtotal/2;
    Balance=totalofsubtotal-tonnies*2;
    printf("Sales EXCLUDING tax\n");
    printf("Coin    Qty    Balance\n");
    printf("-------- --- ---------\n");
    printf("             %33.4lf\n",(double)totalofsubtotal);
    printf("Toonies %3d %9.4lf\n",tonnies,Balance);
    lonnies=(int)Balance;
    Balance=Balance-lonnies;
    printf("Loonies %d %9.4lf\n",lonnies,Balance);
    quatar=Balance/0.25;
    Balance=Balance-quatar*0.25;
    printf("Quarters %d %9.4lf\n",quatar,Balance);
    dimes=Balance/0.10;
    Balance=Balance-dimes*0.10;
    printf("Dimes %d %9.4lf\n",dimes,Balance);
    nickel=Balance/0.05;
    Balance=Balance-nickel*0.05;
    printf("Nickel %d %9.4lf\n",nickel,Balance);
    pennies=Balance/0.01;
    Balance=Balance-(pennies*0.01);
    printf("Pennies %d %9.4lf\n",pennies,Balance);
    tonnies=totalofTotal/2;
    Balance=totalofTotal-tonnies*2;
    Averagecost=totalofsubtotal/(SmallQty+MediumQty+LargeQty);
    printf("Average cost/shirt:$%4.4f\n\n",(double)Averagecost);
    printf("Sales INCLUDING tax\n");
    printf("Coin     Qty Balance\n");
    printf("-------- --- ---------\n");
    printf("             %33.4lf\n",(double)totalofTotal);
    printf("Toonies %3d %9.4lf\n",tonnies,Balance);
    lonnies=(int)Balance;
    Balance=Balance-lonnies;
    printf("Loonies %d %9.4lf\n",lonnies,Balance);
    quatar=Balance/0.25;
    Balance=Balance-quatar*0.25;
    printf("Quarters %d %9.4lf\n",quatar,Balance);
    dimes=Balance/0.10;
    Balance=Balance-dimes*0.10;
    printf("Dimes %d %9.4lf\n",dimes,Balance);
    nickel=Balance/0.05;
    Balance=Balance-(nickel*0.05);
    printf("Nickel %d %9.4lf\n",nickel,Balance);
    pennies = (int)((Balance + 0.005) * 100); 
    Balance =(pennies* 0.01)-Balance;
    printf("Pennies  %3d %9.4f\n\n", pennies,Balance);
    Averagecost_t=totalofTotal/(SmallQty+MediumQty+LargeQty);
    printf("Average cost/shirt:$%4.4lf\n\n",(double)Averagecost_t);
    return 0;
}
