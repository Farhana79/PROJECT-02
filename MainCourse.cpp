/**
 * @file MainCourse.cpp
 * @brief This file contains the implementation of the MainCourse class, which represents a main course dish in a virtual bistro simulation.
 *
 * The MainCourse class inherits from the Dish class and introduces additional attributes specific to main courses,
 * including cooking method, protein type, side dishes, and gluten-free status. It provides methods to set and retrieve
 * these attributes, allowing for the effective management of main course details.
 *
 * This class supports various cooking methods and protein types, and it allows for the inclusion of multiple side dishes,
 * enhancing the flexibility and variety of main course offerings in the simulation. Additionally, it provides a mechanism
 * to indicate whether the dish is gluten-free, catering to dietary preferences and restrictions.
 *
 * @date [Insert Date]
 * @author [Your Name]
 */


#include "MainCourse.hpp"
MainCourse::MainCourse():Dish(),cooking_method_(CookingMethod::RAW),protein_type_("UNKNOWN"),side_dishes_({}),gluten_free_(
        false) {}

MainCourse::MainCourse(const std::string &name, const std::vector<std::string> &ingredients, int prepTime, double price,
                       Dish::CuisineType cuisineType, MainCourse::CookingMethod cookingMethod = CookingMethod::RAW,
                       const std::string &proteinType , const std::vector<SideDish> &sideDishes, bool glutenFree) : Dish(
        name, ingredients, prepTime, price, cuisineType),
        cooking_method_(cookingMethod),
        protein_type_(proteinType),
        side_dishes_(sideDishes),
        gluten_free_(glutenFree) {}

void MainCourse::setCookingMethod(MainCourse::CookingMethod cookingMethod) {
    cooking_method_ = cookingMethod;
}

void MainCourse::setProteinType(const std::string &proteinType) {
    protein_type_ = proteinType;
}


void MainCourse::setGlutenFree(bool gluten_free) {
    gluten_free_ = gluten_free;
}

MainCourse::CookingMethod MainCourse::getCookingMethod() const {
    return cooking_method_;
}

const std::string &MainCourse::getProteinType() const {
    return protein_type_;
}


bool MainCourse::isGlutenFree() const {
    return gluten_free_;
}

void MainCourse::addSideDish(MainCourse::SideDish &side_dish) {
    side_dishes_.push_back(side_dish);
}

const std::vector<MainCourse::SideDish> &MainCourse::getSideDishes() const {
    return side_dishes_;
}
