#include <iostream>



int main ()
{
    int h_m=0;
    char ch; // auxiliary variable
    bool chck=false; // auxiliary variable
    std::cout<<"Welcome to the characters sheet creator\n";
    do{


        while(true){ // i check here if the number of characters is a number... but now if you want enter float value, program cut value after dot
        std::cout<<"Please choose how many characters you want to create: ";
        std::cin>>h_m;

        if (std::cin.good()){ // check if the value is not zero or less
            if(h_m<=0){
                std::cout<<"I think you want to create more than "<<h_m<<" characters...\n";
            }
            else
                break;
        }
        else{
            std::cin.clear();
            std::cout<<"Something is no yes!!\n";
        }
        std::cin.ignore(1000,'\n');
        }

        std::cin.clear(); // clears the buffer before (hehe... "buffer before :)") reading new variable
        std::cin.ignore(1000,'\n');

        std::cout<<"Do you sure you want to create "<<h_m<<" characters? (y/n)";
        std::cin>>ch;
        switch(ch){ // here i make sure if there is good amount of characters
            case 'y':
                chck=true;
                break;
            case 'n':
                std::cout<<"ok, let's do this again\n";
                std::cin.clear();
                std::cin.ignore(1000,'\n');
                break;
            default:
                std::cout<<"what? Something is no yes... I think i have to repeat...\n";
                std::cin.clear();
                std::cin.ignore(1000,'\n');
                break;
    }

    }while (chck==false);

    std::cout<<"ok, let's create "<<h_m<<" characters now\nTHE REST WILL BE DONE SOON...!\n";
}
