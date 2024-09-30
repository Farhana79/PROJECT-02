/**
 * @file Dessert.cpp
 * @brief This file contains the implementation of the Dessert class, which represents a dessert in a virtual bistro simulation.
 *
 * The Dessert class inherits from the Dish class and includes additional attributes and methods specific to desserts,
 * such as flavor profile, sweetness level, and nut content. It provides functionality to set and retrieve these attributes,
 * ensuring that dessert-specific characteristics are managed effectively.
 *
 * The class supports various flavor profiles and allows customization of sweetness levels and the presence of nuts,
 * making it versatile for different dessert offerings in the simulation.
 *
 * @date [Insert Date]
 * @author [Your Name]
 */


#include "Dessert.hpp"

Dessert::Dessert():Dish(),flavor_profile_(Dessert::FlavorProfile::SWEET),sweetness_level_(1),contains_nuts_(false) {}

Dessert::Dessert(const std::string &name, const std::vector<std::string> &ingredients, int prepTime, double price,
                 Dish::CuisineType cuisineType, Dessert::FlavorProfile flavorProfile, int sweetnessLevel,
                 bool containsNuts) : Dish(name, ingredients, prepTime, price, cuisineType),
                                      flavor_profile_(flavorProfile), sweetness_level_(sweetnessLevel),
                                      contains_nuts_(containsNuts) {}

void Dessert::setFlavorProfile(Dessert::FlavorProfile flavor_profile) {
    flavor_profile_ = flavor_profile;
}

Dessert::FlavorProfile Dessert::getFlavorProfile() const {
    return flavor_profile_;
}

void Dessert::setSweetnessLevel(int sweetness_level) {
    sweetness_level_ = sweetness_level;
}

int Dessert::getSweetnessLevel() const {
    return sweetness_level_;
}

void Dessert::setContainsNuts(bool contains_nuts) {
    contains_nuts_ = contains_nuts;
}

bool Dessert::isContainsNuts() const {
    return contains_nuts_;
}

