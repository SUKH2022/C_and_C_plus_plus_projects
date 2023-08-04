/*p to your sign:
Aries (March 21 – April 19)
Taurus (April 20 – May 20)
Gemini (May 21 – June 20)
Cancer (June 21 – July 22)
Leo (July 23 – August 22)
Virgo (August 23 – September 22)
Libra (September 23 – October 22)
Scorpio (October 23 – November 21)
Sagittarius (November 22 – December 21)
Capricorn (December 22 – January 19)
Aquarius (January 20 – February 18)
Pisces (February 19 – March 20)  
*/
#include<stdio.h>
void main()
{
	int date, month;
	printf("Enter your Birthday or Zodiac month: ");
	scanf("%d",&month);
	printf("\n Enter your Birthday or zodiac date: ");
	scanf("%d",&date);
	if(date>=1 && date <=31)
	{
		if((date>=21 && month==3) || (date<=19 && month==4))
		{
			printf("\n Your zodiac sign is Arise.");
		}
		else if((date>=20 && date>=30 && month==4) || (date<=20 && month==5))
		{
			printf("your zodiac sign is Taurus.");
		}
		else if ((date>=21 && month==5 ) || (date<=20 && month==6))
		{
			printf("your zodiac sign is Gemini.");
		}
		else if ((date>=21 && date>=30 && month==6)||(date<=22 && month==7))
		{
			printf("your zodiac sign is cancer.");
		}
		else if ((date>=23 && month==7)|| (date<=22 && month==8))
		{
			printf("your zodiac sign is Leo.");
		}
		else if((date>=23 && month==8) || (date<=22 && month==9))
		{
			printf("your zodiac sign is Virgo.");
		}
		else if ((date>=23 && date>=30 && month==9)||(date<=22 && month==10))
		{
			printf(" your zodiac sign is Libra.");
		}
		else if ((date>=23 && month==10)||(date<=21 && month==11))
		{
			printf("your zodiac sign is Scorpio.");
		}
		else if ((date>=22 && date>=30 && month==11)||(date<=21 && month==12))
		{
			printf("your zoidac sign is Sagittarius.");
		}
		else if ((date>=22 && month==12)||(date<=19 && month==1))
		{
			printf("your zoidac sign is Capricorn.");
		}
		else if ((date>=20 && month==1)||(date<=18 && month==2))
		{
			printf("your zoidac sign is Aquarius.");
		}
		
		else if ((date>=19 && date<=29  && month==2)||(date<=20 && month==3))
		{
			printf("your zoidac sign is Pisces.");
		}
		else if(month==2 && date>=30)
		{
			printf("\n Invalid Date for Month Feb");
		}
		else if((month==4 || month==6 ||month==9||month==11) && date>=31);
		{
			printf("\n invalid Dates for April, June, September, and November");
		}
}
    else
    {
	    printf("Invalid Date ");
    }
}