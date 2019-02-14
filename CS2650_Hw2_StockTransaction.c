//Robert Delfin
//CS2650
#include <stdio.h>

int main(int argc, char **argv){
	//orginal amount of stock
	double stockAmount = 1000.00;
	//cost of purchasing the intial stock
	double pricePerShare = 45.50;
	//Price of cost for buying stock
	double stockCost = stockAmount * pricePerShare;
	//percentage of commision
	double commissionPercentage = .02;
	//Value of comission for buying the stock
	double comissionCost = stockCost * commissionPercentage;
	//selling price per stock
	double soldSharePrice = 56.90;
	//Value of the sold stock
	double stockValue = soldSharePrice * stockAmount;
	//The cost of comission given after selling stock
	double comissionValue = stockValue * commissionPercentage;
	// The net profit
	double profit = stockValue - (stockCost + comissionCost + comissionValue);

	printf("Cost of buying stock for Joe: $ %.2lf\n", stockCost);
	printf("Commission for buying stock for Joe: $ %.2lf\n", comissionCost);
	printf("Value of selling stock for Joe: $ %.2lf\n", stockValue);
	printf("Commission for selling stock for Joe: $ %.2lf\n", comissionValue);
	printf("Total profit for Joe: $ %.2lf\n",profit );

	return 0;

}
