//fixed quantities required for each variable

//espresso
#define beans_espresso 8
#define espresso_water 30
#define espresso_milk 0
#define espresso_price 3.5
//cappuccino
#define cappuccino_beans 8
#define cappucciono_water 30
#define cappuccino__milk 70
#define cappuccino_choch_syrup 0
#define cappuccino_price 4.5
//mocha
#define mocha_beans 8
#define mocha_water 39
#define mocha_milk 160
#define mocha_choc_syrup 30
#define mocha_price 5.5
//Thresholds for each variable
#define coffee_threshold 8
#define water_threshold 40
#define milk_threshold 200
#define choc_syrup_threshold 30

//variable for total money inserted into the machine
float current_revenue = 0.0;
#define admin_password "Op333"

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
        printf("Your espresso is ready to drink!")
       } 
       else {
        printf("Insufficient ingredients to produce espresso")
       }
        break;
    case 2: 
       if(){

    }
    default:
        break;
    }
}
