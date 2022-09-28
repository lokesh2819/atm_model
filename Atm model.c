/*This Project is to make an Automated Teller Machine with user's Account Number,Password,and bank account.Using this data,users can withdraw, deposit, and view their account balance.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define BAL 40000
int
main ()
{
  system ("color b");
  printf ("\n\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
  printf
    ("\n\t\t===================SLK BANK=================\n\t\t\t\tDigital India");
  printf ("\n\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
  int i, pin = 2463, user_pin;
  for (i = 3; i > 0; i--)
    {
      printf ("\n\t\tEnter pin:");
      scanf ("%d", &user_pin);
      if (pin == user_pin)
	{
	  int option, amt;

	  time_t t = time (NULL);
	  struct tm tm = *localtime (&t);
	  printf ("\n\t\t1. Withdrawal\t\t4. Services\n");
	  printf ("\n\t\t2. Deposit\t\t5. Pin generation");
	  printf ("\n\n\t\t3. Mini statement       6. Balance inquiry");

	  printf ("\n\n\t\tEnter your option:");
	  scanf ("%d", &option);


	  switch (option)
	    {
	    case 1:
	      {
		printf ("\n\t\tEnter the amount:");
		scanf ("%d", &amt);
		if (amt <= BAL)
		  {
		    printf ("\n\t\tTake your Cash\n");
		    printf ("\n\t\tAvailable balance: %d", BAL - amt);
		    printf
		      ("\n\n\t\tDate and Time: %d-%02d-%02d %02d:%02d:%02d",
		       tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,
		       tm.tm_hour, tm.tm_min, tm.tm_sec);
		    printf ("\n\n\t\tThanking you");
		  }
		else
		  {
		    printf ("\n\t\tLimit Excced\n");
		    printf
		      ("\n\n\t\tDate and Time: %d-%02d-%02d %02d:%02d:%02d",
		       tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,
		       tm.tm_hour, tm.tm_min, tm.tm_sec);
		  }
		break;
	      }
	    case 2:
	      {
		int dep;
		printf ("\n\t\tEnter the amount:");
		scanf ("%d", &dep);
		printf ("\n\n\t\t%d despoited successfully.......", dep);
		printf ("\n\n\t\tTotal balance : %d", BAL + dep);
		printf ("\n\n\t\tDate and Time: %d-%02d-%02d %02d:%02d:%02d",
			tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,
			tm.tm_hour, tm.tm_min, tm.tm_sec);
		printf ("\n\n\t\tThanking you........");
		break;
	      }
	    case 3:
	      {
		printf
		  ("\n\n\t\t********************Mini Statement************************");
		printf ("\n\n\t\tName: Lokesh");
		printf ("\n\n\t\tAccount number: 410719106058");
		printf ("\n\n\t\tIFSC code: SBI112");
		printf ("\n\n\t\tLast 3 transcation");
		printf
		  ("\n\n\t\t1. amt: 10,000 ===> Withdrwal ===> 28-08-2022 08:11:58");
		printf
		  ("\n\n\t\t2. amt: 8,000  ===> Withdrwal ===> 02-08-2022 10:15:22");
		printf
		  ("\n\n\t\t3. amt: 10,000 ===> Despoit   ===> 10-07-2022 13:30:38");
		printf ("\n\n\t\tTotal balance: %d", BAL);
		printf ("\n\n\t\tDate and Time: %d-%02d-%02d %02d:%02d:%02d",
			tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,
			tm.tm_hour, tm.tm_min, tm.tm_sec);
		printf ("\n\n\t\tThanking you........");

		break;
	      }
	    case 4:
	      {
		printf ("\n\n\t\tservices");
		printf ("\n\n\t\t->New passbook");
		printf ("\n\n\t\t->Update mobile number");
		printf ("\n\n\t\t->Change of address");
		printf ("\n\n\t\t->closing account");
		printf ("\n\n\t\tDate and Time: %d-%02d-%02d %02d:%02d:%02d",
			tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,
			tm.tm_hour, tm.tm_min, tm.tm_sec);
		printf ("\n\n\t\tThanking you........");

		break;
	      }
	    case 5:
	      {
		int newpin;
		printf
		  ("\n\n\t\t*****************Pin Generation**********************");
		printf ("\n\n\t\tEnter new pin:");
		scanf ("%d", &newpin);
		if (newpin != pin)
		  {
		    printf ("\n\n\t\tYou pin changed.......");
		    printf ("\n\n\t\tNew pin: %d", newpin);
		  }
		else
		  {
		    printf
		      ("\n\n\t\tyou new pin same as old pin..........try other one");
		  }

		printf ("\n\n\t\tDate and Time: %d-%02d-%02d %02d:%02d:%02d",
			tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,
			tm.tm_hour, tm.tm_min, tm.tm_sec);
		printf ("\n\n\t\tThanking you........");
		break;

	    case 6:
		{
		  printf ("\n\n\t\tAvailable balance: %d", BAL);
		  printf
		    ("\n\n\t\tDate and Time: %d-%02d-%02d %02d:%02d:%02d",
		     tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_hour,
		     tm.tm_min, tm.tm_sec);
		  printf ("\n\n\t\tThanking you........");
		  break;

		}
	      }
	    default:
	      {
		printf ("\n\n\t\tplease enter vaild option\n");
		printf ("\n\n\t\tDate and Time: %d-%02d-%02d %02d:%02d:%02d",
			tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900,
			tm.tm_hour, tm.tm_min, tm.tm_sec);
	      }
	    }

	}
      else
	{
	  printf ("\n\n\t\tWrong pin, try again\n");
	  if (i == 1)
	    printf
	      ("\n\n\t\tMaximum attempts reached...\nTry again after some times......");
	  else
	    printf ("\n\n\t\t%d attempts left\n", i - 1);
	  continue;
	}
      break;
    }
  return 0;
}





