/**
 * @file Appetizer.hpp
 * @brief This file contains the declaration of the Appetizer class, which represents a appetizer in a virtual bistro simulation.
 *
 * The Appetizer class inherits from the Dish class, adding specific attributes that define characteristics of an
 * appetizer. This class provides constructors, accessor and mutator functions, and a display function to manage and
 * present appetizer-specific details.
 *
 * @date [Insert Date]
 * @author [Your Name]
 */

#ifndef APPETIZER_HPP
#define APPETIZER_HPP

#include "Dish.hpp"

class Appetizer : public Dish{
public:
    // ServingStyle enum definition
    enum class ServingStyle { PLATED, FAMILY_STYLE, BUFFET };

    /**
     * Default constructor.
     * Initializes all private members with default values.
     */
    Appetizer();

    /**
     *
     * Parameterized constructor.
     * @param name The name of the appetizer.
     * @param ingredients The ingredients used in the appetizer.
     * @param prep_time The preparation time in minutes.
     * @param price The price of the appetizer.
     * @param cuisine_type The cuisine type of the appetizer.
     * @param serving_style The serving style of the appetizer.
     * @param spiciness_level The spiciness level of the appetizer.
     * @param vegetarian Flag indicating if the appetizer is vegetarian.
     */
    Appetizer(const std::string& name,
              const std::vector<std::string>& ingredients = {},
              int prep_time = 0,
              double price = 0.0,
              CuisineType cuisine_type = CuisineType::OTHER,
              ServingStyle serving_style = ServingStyle::PLATED,
              int spiciness_level=1,
              bool vegetarian= false);


    /**
     * Sets the serving style of the appetizer.
     * @param serving_style The new serving style.
     * @post Sets the private member `serving_style_` to the value of the
     * parameter.
     *
     */
    void setServingStyle(ServingStyle serving_style);

    /**
     * @return The serving style of the appetizer (as an enum).
     */
    ServingStyle getServingStyle() const;


    /**
     * Sets the spiciness level of the appetizer.
     * @param spiciness_level An integer representing the spiciness level of the appetizer.The MainCourse Class
     * @post Sets the private member `spiciness_level_` to the value of the
     * parameter.
     */
    void setSpicinessLevel(int spicinessLevel);

    /**
     * @return The spiciness level of the appetizer.
     */
    int getSpicinessLevel() const;

    /**
     * Sets the vegetarian flag of the appetizer.
     * @param vegetarian A boolean indicating if the appetizer is vegetarian.
     * @post Sets the private member `vegetarian_` to the value of the parameter.
     */
    void setVegetarian(bool vegetarian);

    /**
     * @return True if the appetizer is vegetarian, false otherwise.
     */
    bool isVegetarian() const;

private:
    ServingStyle serving_style_;
    int spiciness_level_;
    bool vegetarian_;
};


#endif //APPETIZER_HPP
