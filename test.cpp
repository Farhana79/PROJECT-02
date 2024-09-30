#include <iostream>

#include "Appetizer.hpp"
#include "MainCourse.hpp"
#include "Dessert.hpp"

int main() {
    Appetizer defaultAppetizer;
    defaultAppetizer.setSpicinessLevel(7);
    defaultAppetizer.setServingStyle(Appetizer::ServingStyle::FAMILY_STYLE);
    defaultAppetizer.setVegetarian(true);
    defaultAppetizer.display();
    std::cout << "Spiciness Level: " << defaultAppetizer.getSpicinessLevel() << std::endl;
    std::cout << "Serving Style: ";
    switch (defaultAppetizer.getServingStyle()) {

        case Appetizer::ServingStyle::PLATED:
            std::cout << "PLATED";
            break;
        case Appetizer::ServingStyle::FAMILY_STYLE:
            std::cout << "FAMILY_STYLE";
            break;
        case Appetizer::ServingStyle::BUFFET:
            std::cout << "BUFFET";
            break;
    }
    std::cout << std::endl;
    std::cout << "Vegetarian: " << (defaultAppetizer.isVegetarian() ? "True":"False") << std::endl;


    std::cout << "______________________________________________\n\n";


    MainCourse mainCourse("Grilled Chicken",
                          {"Chicken", "Olive Oil", "Garlic", "Rosemary"},
                          30,
                          18.99,
                          MainCourse::CuisineType::AMERICAN,
                          MainCourse::CookingMethod::GRILLED,
                          "Chicken");
    MainCourse::SideDish sideDish1;
    MainCourse::SideDish sideDish2;

    sideDish1.name = "Mashed Potatoes";;
    sideDish1.category = MainCourse::Category::STARCHES;

    sideDish2.name = "Green Beans";
    sideDish2.category = MainCourse::Category::VEGETABLE;

    mainCourse.addSideDish(sideDish1);
    mainCourse.addSideDish(sideDish2);

    mainCourse.setGlutenFree(true);
    mainCourse.display();
    std::cout << "Cooking Method: " << (mainCourse.getCookingMethod() == MainCourse::CookingMethod::GRILLED ? "GRILLED":"") << std::endl;
    std::cout << "Protein Type: " << mainCourse.getProteinType() << std::endl;
    std::cout << "Side Dishes: " ;
    for (int i = 0; i < mainCourse.getSideDishes().size(); ++i) {
        std::cout << mainCourse.getSideDishes().at(i).name << " (";
        switch (mainCourse.getSideDishes().at(i).category) {

            case MainCourse::Category::GRAIN:
                std::cout << "Grain)";
                break;
            case MainCourse::Category::PASTA:
                std::cout << "Pasta";
                break;
            case MainCourse::Category::LEGUME:
                std::cout << "Legume)";
                break;
            case MainCourse::Category::BREAD:
                std::cout << "Bread)";
                break;
            case MainCourse::Category::SALAD:
                std::cout << "Salad)";
                break;
            case MainCourse::Category::SOUP:
                std::cout << "Soup)";
                break;
            case MainCourse::Category::STARCHES:
                std::cout << "Starches)";
                break;
            case MainCourse::Category::VEGETABLE:
                std::cout << "Vegetable)";
                break;
        }
        if (i != mainCourse.getSideDishes().size()-1){
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
    std::cout << "Gluten-Free: " << (mainCourse.isGlutenFree() ? "True": "False") << std::endl;


    std::cout << "______________________________________________\n\n";

    Dessert dessert("Chocolate Cake",
                    {"Flour", "Sugar", "Cocoa Powder", "Eggs"},
                    45,
                    7.99,
                    Dessert::CuisineType::FRENCH,
                    Dessert::FlavorProfile::SWEET,
                    9);

    dessert.setContainsNuts(false);
    dessert.display();
    std::cout << "Flavor Profile: " << (dessert.getFlavorProfile() == Dessert::FlavorProfile::SWEET ? "Sweet":"") << std::endl;
    std::cout << "Sweetness Level: " << dessert.getSweetnessLevel() << std::endl;
    std::cout << "Contains Nuts: " << (dessert.isContainsNuts() ? "True": "False") << std::endl;
    return 0;
}
