int main()
{
    float valorA;
    float valorB;
    float valorC;
    float mitjana;
    printf("Introueix el primer valor");
    scanf("%f", &valorA);
    while (getchar() != '\n');

printf("Introueix el segon valor");
    scanf("%f", &valorB);
    while (getchar() != '\n');

printf("Introueix el tercer valor");
    scanf("%f", &valorC);
    while (getchar() != '\n');

mitjana=(valorA+valorB+valorC)/3;
printf("mitjana :&.2f", mitjana);

    return 0;
}
