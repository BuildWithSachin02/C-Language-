#include<stdio.h>
int main(){
	/*
		write a program to calculate a electricity bill based on different units.
		1 to 20 = 1/units
		21 to 50 = 1.5/units
		51 to 100 = 2 rs/unit
		101 to 150 = 2.5 rs/unit
		151 to above = 5rs/unit
		
		| Units Range   | Rate per Unit | Formula Part                                                        |
| ------------- | ------------- | ------------------------------------------------------------------- |
| 1 to 20       | ?1 / unit     | `(units * 1)`                                                       |
| 21 to 50      | ?1.5 / unit   | `(20 * 1) + (units - 20) * 1.5`                                     |
| 51 to 100     | ?2 / unit     | `(20 * 1) + (30 * 1.5) + (units - 50) * 2`                          |
| 101 to 150    | ?2.5 / unit   | `(20 * 1) + (30 * 1.5) + (50 * 2) + (units - 100) * 2.5`            |
| 151 and above | ?5 / unit     | `(20 * 1) + (30 * 1.5) + (50 * 2) + (50 * 2.5) + (units - 150) * 5` |

		20, 30, 50, 50 — represent karte hain fixed slab ranges
?? (unit - 150) — represent karta hai last slab ke extra units
?? * rate — represent karta hai us slab ka per-unit price
?? Aur sabko + karke total bill milta hai ??
		formulla =:
					total = (unit*1)+(unit-) 
	*/
	int unit;
	float total;
	printf("enter your electricity bills: ");
	scanf("%d",&unit);
	
	if(unit<=20){
		total =unit*1;
	}
	else if(unit<=50){
		total = (20*1)+(unit-20)*1.5;
	}
	else if(unit<=100){
		total = (20*1)+(30*1.5)+(unit-50)*2;
	}
	else if(unit<=150){
		total = (20*1)+(30*1.5)+(50*2)+(unit-100)*2.5;
	}
	else{
		total = (20*1)+(30*1.5)+(50*2)+(50*2.5)+(unit-150)*5;
	}
	printf("your total electricity bill is %2.f\n.",total);
}
