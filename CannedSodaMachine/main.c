#include <stdio.h>
#include <stdbool.h>

int main() {

    double cprice = 15;
    double dcprice = 12;
    double fprice = 10;
    double sprice = 11;
    int number;
    double payment = 0;
    int ccans = 15;
    int dccans = 15;
    int fcans = 15;
    int spcans = 15;
    double moremoney = 0;


    do {
        printf("Enter money\n");
        scanf("%lf", &payment);

        printf("You entered $%lf\n\n", payment);

        printf("Select the number of the soda you want: \n"
               "1.- Coca Cola\n"
               "2.- Diet Coca Cola\n"
               "3.- Fanta\n"
               "4.- Sprite\n");

        scanf("%i", &number);

        switch (number) {
            case 1:
                if (ccans > 0) {
                    printf("A Coca Cola can costs $15\n");
                    if (payment < cprice) {
                        printf("Not enough money, keep entering more until you have %lf or more\n", cprice);
                        while (payment < cprice) {
                            scanf("%lf", &moremoney);
                            payment = payment + moremoney;
                            printf("You entered $%lf more, you now have $%lf\n", moremoney, payment);
                            if (payment >= cprice) {
                                double change = payment - cprice;
                                printf("Here's your Coca Cola, your change is $%lf\n\n", change);
                                ccans--;
                                break;
                            }
                        }
                    } else if (payment >= cprice) {
                        double change = payment - cprice;
                        printf("Here's your Coca Cola, your change is $%lf\n\n", change);
                        ccans--;
                        break;
                    }
                } else {
                    printf("WE'RE OUT OF COCA COLA\n\n");
                }

                break;

            case 2:
                if (dccans > 0) {
                    printf("A Diet Coca Cola can costs $12\n");
                    if (payment < dcprice) {
                        printf("Not enough money, keep entering more until you have %lf or more\n", dcprice);
                        while (payment < dcprice) {
                            scanf("%lf", &moremoney);
                            payment = payment + moremoney;
                            printf("You entered $%lf more, you now have $%lf\n", moremoney, payment);
                            if (payment >= dcprice) {
                                double change = payment - dcprice;
                                printf("Here's your Diet Coca Cola, your change is $%lf\n\n", change);
                                dccans--;
                                break;
                            }
                        }
                    } else if (payment >= dcprice) {
                        double change = payment - dcprice;
                        printf("Here's your Diet Coca Cola, your change is $%lf\n\n", change);
                        dccans--;
                        break;
                    }
                } else {
                    printf("WE'RE OUT OF DIET COCA COLA\n\n");
                }

                break;

            case 3:
                if (fcans > 0) {
                    printf("A Fanta can costs $10\n");
                    if (payment < fprice) {
                        printf("Not enough money, keep entering more until you have %lf or more\n", fprice);
                        while (payment < fprice) {
                            scanf("%lf", &moremoney);
                            payment = payment + moremoney;
                            printf("You entered $%lf more, you now have $%lf\n", moremoney, payment);
                            if (payment >= fprice) {
                                double change = payment - fprice;
                                printf("Here's your Fanta, your change is $%lf\n\n", change);
                                fcans--;
                                break;
                            }
                        }
                    } else if (payment >= fprice) {
                        double change = payment - fprice;
                        printf("Here's your Fanta, your change is $%lf\n\n", change);
                        fcans--;
                        break;
                    }
                } else {
                    printf("WE'RE OUT OF FANTA\n\n");
                }

                break;

            case 4:
                if (spcans > 0) {
                    printf("A Sprite can costs $11\n");

                    if (payment < sprice) {
                        printf("Not enough money, keep entering more until you have %lf or more\n", sprice);
                        while (payment < sprice) {
                            scanf("%lf", &moremoney);
                            payment = payment + moremoney;
                            printf("You entered $%lf more, you now have $%lf\n", moremoney, payment);
                            if (payment >= sprice) {
                                double change = payment - sprice;
                                printf("Here's your Sprite, your change is $%lf\n\n", change);
                                spcans--;
                                break;
                            }
                        }
                    } else if (payment >= sprice) {
                        double change = payment - sprice;
                        printf("Here's your Sprite, your change is $%lf\n\n", change);
                        spcans--;
                        break;
                    }
                } else {
                    printf("WE'RE OUT OF SPRITE\n\n");
                }

                break;
            default:
                printf("Nothing selected\n");
                break;
        }
    } while (payment != 0);
    return 0;
}