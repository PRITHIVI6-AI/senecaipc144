int main(void)
{
    const double Tax = 0.13;
    const char patSize = 'S';
    int Size;
    float shirt1,shirt2,shirt3,subtotal,Taxs,Total;
    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%f",&shirt1);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%f",&shirt2);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%f",&shirt3);
    printf("\n");
    printf("Shirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2f\n",shirt1);
    printf("MEDIUM : $%.2f\n",shirt2);
    printf("LARGE  : $%.2f\n\n",shirt3);
    printf("Patty's shirt size is '%c'\n",patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d",&Size);
    printf("\n");
    printf("Patty's shopping cart...\n");
    printf("Contains : %d shirts\n",Size);
    subtotal=Size*shirt1;
    printf("Sub-total: $%8.4f\n",subtotal);
    Taxs=(subtotal*Tax)+0.0016;
    printf("Taxes    : $%8.4f\n",Taxs);
    Total =(subtotal+Taxs);
    printf("Total    : $%8.4f\n",Total);
    return 0;
}
