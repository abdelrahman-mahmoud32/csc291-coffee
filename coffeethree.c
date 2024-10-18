//fixed quantities required for each variable

//espresso
#define beans_espresso 8
#define espresso_water 30
#define espresso_milk 0
#define espresso_price new_espresso_price
float new_espresso_price = 3.5;
//cappuccino
#define cappuccino_beans 8
#define cappuccino_water 30
#define cappuccino__milk 70
#define cappuccino_choch_syrup 0
#define cappuccino_price new_cappuccino_price
float new_cappuccino_price = 4.5;
//mocha
#define mocha_beans 8
#define mocha_water 39
#define mocha_milk 160
#define mocha_choc_syrup 30
#define mocha_price new_mocha_price;
float new_mocha_price = 5.5;

//Thresholds for each variable
#define coffee_threshold 8
#define water_threshold 40
#define milk_threshold 200
#define choc_syrup_threshold 30

//variable for total money inserted into the machine
float current_revenue = 0.0;
#define admin_password "8342635"

// Quantity variables for each ingredient
int coffee_beans_quantity = 100;  
int water_quantity = 300; 
int milk_quantity = 300; 
int chocolate_quantity = 150;
// Function prototypes
void CoffeeMenu();
void orderCoffee();
void adminMode();
void checkIngredientLevels();
void replenishIngredients();
void changeCoffeePrice();
void displaySales();
void alertLowIngredients();
void processPayment(float price);

float net_price = 0.0;


int main() {
   while 1
        printf("\nMenu\n")
        printf("Choose a type of coffee")
        
        
    }
}

void CoffeeMenu(){

    printf("Coffee Types:\n")
    printf("1. Espresso", espresso_price)
    printf("2. Cappuccino", cappuccino_price)
    printf("3. Mocha", mocha_price)
    
}



void orderCoffee() {
    int selection;
    CoffeeMenu()
    printf("Choose a coffee type:\n")
    switch (selection)
    {
    case 1:
       if (coffee_beans_quantity >= beans_espresso && water_quantity >= espresso_water){
        coffee_beans_quantity =- beans_espresso;
        water_quantity =- espresso_water;
        net_price += espresso_price;
        processPayment(espresso_price);
        printf("Order accepted, please wait...")
       } 
       else {
        printf("Insufficient ingredients to produce espresso")
       }
        break;
    case 2: 
       if(coffee_beans_quantity >= mocha_beans && water_quantity >= mocha_water && milk_quantity >= mocha_milk){
        coffee_beans_quantity =- mocha_beans;
        water_quantity =- mocha_water;
        milk_quantity =- mocha_milk;
        net_price += mocha_price;
        processPayment(mocha_price);
        printf("Order accepted, please wait...")
    }
       else{
        printf("Insufficient ingredients to produce mocha")
       }
    case 3: 
       if(coffee_beans_quantity >= cappuccino_beans && water_quantity >= cappuccino_water && cappuccino_water){
        coffee_beans_quantity =- cappuccino_beans;
        water_quantity =- cappuccino_water;
        milk_quantity =- cappuccino__milk;
        net_price += cappuccino_price;
        processPayment(cappuccino_price);
        printf("Order accepted, please wait...");
       }
       else{
        printf("Insufficient ingredients to produce cappuccino")
       }
       
    default: 
       printf("Invalid selection, try again")
       
    break;
    }
}

void processPayment(float price){
    float payment
    printf("Please enter payment for the chosen coffee type: ")
    scanf("&d",payment)
    CoffeeMenu()
    if(payment >= price){
        orderCoffee()
    else{
        printf("Payment insufficient.")

    }
        
    }
    


    
}

void adminMode(){
    int choice
    printf("Please enter the admin password: ")
    scanf("%d",&choice);
    
    if(choice == admin_password){
        while(1){
            printf("Welcome, choose one of the followibg: \n")
            printf("1. Replenish ingredients\n")
            printf("2. Display ingredient quantity and net revenue")
            printf("3. Change coffee price")
            printf("4. Exit admin menu")
            scanf("%d",&choice)

            switch(choice){
                case 1:
                    replenishIngredients();
                    break;
                case 2:
                    checkIngredientLevels();
                    displaySales();
                    break;
                case 3:
                    changeCoffeePrice();
                    break;
                case 4:
                    printf("Exiting admin mode")
                default: 
                    printf("Invalid choice.")
                break;
    else{
        printf("Incorrect password, try again")
    }
void changeCoffeePrice(){
    int option
    int option_coffee
    printf("Choose which coffee type to update:\n")
    printf("1. Espresso\n")
    printf("2. Cappuccino\n")
    printf("3. Mocha")
    printf("4. Exit")
    scanf("%d", option_coffee)



    printf("Choose whether to:/n")
    printf("1. Add/n")
    printf("2. Deduct")
    scanf("%d",option)
    if(option == 1){
        float add
        printf("Please type how much you want to add to the original price: ")
        scanf("%f",add)
        new_espresso_price += add
    }


}
                

            
            
            }
        }
    }



