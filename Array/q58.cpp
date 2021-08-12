// Zoo Ticket collecter

#include<bits/stdc++.h>
using namespace std;


class ticket{
    public:
        int id;
        int age;
        int flag;

        // ticket(){
        //     flag = 0;
        // }    
};



int main(){
    int number_of_guest;
    int input_id;
    int total = 0;
    int age;
    int id = 0;
    int guests = 0;
    int index = 0;
    cout<<"Welcome To zoo, SIR :) \n";



    ticket child_ticket[1000];

    int option;
    cout<<"Press 1 for ticket counter\nPress 2 for entery gate\nPress 3 for exit"<<endl;
    cin>>option;

while(option!=3){
        switch(option){
            case 1:
            total = 0;
            cout<<"Enter the number of guests : ";
            cin >> number_of_guest;
            // if(number_of_guest <= 1)
            //     continue;
            cout<<"\nEnter age of guests one by one : \n";
            for(index = guests; index < number_of_guest+guests; index++){
                cin>>age;
                child_ticket[index].age = age;
                child_ticket[index].id = id;
                id++;
                if(age <=2){
                    total += 0; 
                }
                else if(age<18){
                    total += 100;
                }
                else if(age<60){
                    total += 500;
                }
                else{
                    total+=300;
                }
            }
            

            cout<<"\nYour Total bill is : "<<total<<endl;
            cout<<"Tickets are : \n";
            cout<<"id : age\n";
            for(index = guests; index < number_of_guest+guests; index++){
                cout<<child_ticket[index].id <<" : "<<child_ticket[index].age<<endl;
            } 

            guests = index;
            cout<<endl;
            break;
            case 2:


            
            
            cout<<"Please enter the id of your ticket for entering in the zoo : \n";
            cin>>input_id;
            if(child_ticket[input_id].flag == 0 && (input_id) < guests){
                cout<<"Guest "<<input_id<<" (age: "<<child_ticket[input_id].age<<")\n";
                child_ticket[input_id].flag=1;
            }
            else{
                cout<<"Warning, Not a valid ticket\n";
            }
            break;
        // default: exit(1);
        }

    cout<<"Press 1 for ticket counter\nPress 2 for entery gate\nPress 3 for exit"<<endl;
    cin>>option;
}

}