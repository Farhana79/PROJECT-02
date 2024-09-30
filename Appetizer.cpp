/**
 * @file Appetizer.cpp
 * @brief This file contains the implementation of the Appetizer class, which represents an appetizer in a virtual bistro simulation.
 *
 * The Appetizer class is derived from the Dish class and includes additional attributes such as serving style, spiciness level,
 * and whether the appetizer is vegetarian. It extends the functionality of the Dish class by managing and presenting
 * appetizer-specific details, while maintaining dish-related information.
 *
 * The implementation ensures that appetizer-specific attributes are properly initialized and accessed through getter and setter methods.
 *
 * @date [Insert Date]
 * @author [Your Name]
 */

#include "Appetizer.hpp"

Appetizer::Appetizer():Dish(),serving_style_(ServingStyle::PLATED),spiciness_level_(1),vegetarian_(false) {}

Appetizer::Appetizer(const std::string &name, const std::vector<std::string> &ingredients, int prep_time, double price,
                     Dish::CuisineType cuisine_type, Appetizer::ServingStyle serving_style, int spiciness_level,
                     bool vegetarian): Dish(name,ingredients,prep_time,price,cuisine_type),serving_style_(serving_style)
                     ,spiciness_level_(spiciness_level),vegetarian_(vegetarian) {}

void Appetizer::setServingStyle(Appetizer::ServingStyle serving_style) {
    serving_style_ = serving_style;
}

Appetizer::ServingStyle Appetizer::getServingStyle() const {
    return serving_style_;
}

void Appetizer::setSpicinessLevel(int spicinessLevel) {
    spiciness_level_ = spicinessLevel;
}

int Appetizer::getSpicinessLevel() const {
    return spiciness_level_;
}

void Appetizer::setVegetarian(bool vegetarian) {
    vegetarian_ = vegetarian;
}

bool Appetizer::isVegetarian() const {
    return vegetarian_;
}








