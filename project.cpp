#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime>
using namespace std;
main()
{
	string p,x;
	cout<<"---------------------------WELCOME BOSS------------------\n";
	string phrase = "WELCOME Boss";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
        
	cout<<"---------------------------I AM HARSH------------------\n";
	phrase = "I AM HARSH";
         command = "espeak \"" + phrase + "\"";
        charCommand = command.c_str();
        system(charCommand);
        z:
    cout<<"===ENTER YOUR PASSWORD===\n";
    	phrase = "ENTER YOUR PASSWORD";
         command = "espeak \"" + phrase + "\"";
        charCommand = command.c_str();
        system(charCommand);
	 cin>>p;
	 if(p=="harsh")
	  {
	    while(1)
	  	{
		  s:
	    	cout<<"how i con help you\n";
	    	phrase = "how i con help you";
            command = "espeak \"" + phrase + "\"";
            charCommand = command.c_str();
            system(charCommand);
            // cin>>z;
            fflush(stdin);
            getline(cin,x);
            if(x=="open google")
            {
            	phrase ="opening google";
        		command = "espeak \""+phrase +"\"";
        		charCommand = command.c_str();
        		system(charCommand);
        		system("start https://www.google.com");
        
	        }
	        
            else if(x=="open youtube")
		    {
          		cout<<"opening YouTube.....\n";
           		phrase = "opening youtube";
           		command = "espeak \"" + phrase + "\"";
      		    charCommand = command.c_str();
       		    system(charCommand);
       		    system("start https://www.youtube.com");
            }

            else if(x=="open instagram")
			{
				
                cout<<"openining instagram....."<<endl;
                phrase = "opening instagram";
                command = "espeak \"" + phrase + "\"";
                charCommand = command.c_str();
                system(charCommand);
                system("start https://www.instagram.com");
            }
            else if (x=="exit"||x=="stop"||x=="bye")
            {
                cout<<"bye bye sir.."<<endl;
                phrase = "bye bye sir";
                command = "espeak \"" + phrase + "\"";
                charCommand = command.c_str();
                system(charCommand);
                break;
			}
			else if (x=="open twitter"||x=="Open x")
            {
            	
           		cout<<"Opening twitter"<<endl;
                phrase = "opening twitter";
                command = "espeak \"" + phrase + "\"";
                charCommand = command.c_str();
                system(charCommand);
                system("start https://twitter.com/");
			}
			else if (x=="open porn")
            {
            	
           		cout<<"Opening porn"<<endl;
                phrase = "opening porn";
                command = "espeak \"" + phrase + "\"";
                charCommand = command.c_str();
                system(charCommand);
                system("start https://www.xnxx3.com/search/xnxx?top");
			}
			else
			{
				cout<<"Sorry I con't understand please try again"<<endl;
                phrase = "Sorry I con't understand please try again";
                command = "espeak \"" + phrase + "\"";
                charCommand = command.c_str();
                system(charCommand);
                goto s;
			}
          

		}
	  }
	 else
	 {
	 	cout<<"incorrect password\n";
		phrase = "incorrect password ";
        command = "espeak \"" + phrase + "\"";
        charCommand = command.c_str();
        system(charCommand);
        goto z;
	 }
    
}
