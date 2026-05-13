#include <iostream>

int main() {
    const int BUTTER = 1,
        EGG = 2,
        VANILLA = 2,
        FLOUR = 2,
        CHOC_CHIP = 2;
    const double BAKING_SODA =0.75,
        SUGAR = 1.5,
        SALT = 0.25;

    int dozen, quantity;

    std::cout << "Chocolate Chip Cookies - 4 dozen cookies" << std::endl;

    std::cout << "\n \t" << BUTTER << " cup butter \n"
    << "\t" << SUGAR << " cups white sugar \n"
    << "\t" << EGG << " eggs \n"
    << "\t" << VANILLA << " tsp vanilla extract \n"
    << "\t" << FLOUR << " flour \n"
    << "\t" << BAKING_SODA << " baking soda \n"
    << "\t" << SALT << " tsp salt \n"
    << "\t" << CHOC_CHIP << " cups chocolate chips" << std::endl;

    std::cout << "\n Preheat oven to 350 F. In a large bowl, mix butter, sugar, eggs, and vanilla \n"
    << " until light and fluffy. In a separate bowl, combine flour, baking soda and \n"
    << " salt; stir into the butter mixture until well-blended stir in chocolate chios . \n"
    << " Drop by rounded teaspoons onto ungreased cookie sheets. Bake 8-10 minutes until \n"
    << " just set. Cool slightly on cookie sheets before transferring to cooling racks \n"
    << " to cool completely." << std::endl;

    std::cout << " \n How many dozens are you making (multiple of four)? " << std::endl;
    std::cin >> dozen;

    quantity = dozen/4;

    std::cout << "\n\n\t" << quantity * BUTTER << " cup butter \n"
    << "\t" << quantity * SUGAR << " cups white sugar \n"
    << "\t" << quantity * EGG << " eggs \n"
    << "\t" << quantity * VANILLA << " tsp vanilla extract \n"
    << "\t" << quantity * FLOUR << " cups all-purpose flour \n"
    << "\t" << quantity * BAKING_SODA <<  " baking soda \n"
    << "\t" << quantity * SALT << "t sp salt \n"
    << "\t" << quantity * CHOC_CHIP << " cups chocolate chips" << std::endl;

    return 0;
}
