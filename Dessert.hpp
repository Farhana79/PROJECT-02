/**
 * @file Dessert.hpp
 * @brief This file contains the declaration of the Dessert class, which represents a dessert in a virtual bistro simulation.
 *
 * The Dessert class inherits from the Dish class, adding specific attributes that define characteristics of a
 * dessert. This class provides constructors, accessor and mutator functions, and methods to manage and
 * present dessert-specific details, including flavor profiles, sweetness levels, and nut content.
 *
 * @date [Insert Date]
 * @author [Your Name]
 */

#ifndef DESSERT_HPP
#define DESSERT_HPP

#include "Dish.hpp"
class Dessert : public Dish{
public:
    enum class FlavorProfile { SWEET, BITTER, SOUR, SALTY, UMAMI };

    /**
     * Default constructor.
     * Initializes all private members with default values.
     */
    Dessert();

    /**
     * Parameterized constructor.
     * @param name The name of the dessert.
     * @param ingredients The ingredients used in the dessert.
     * @param prep_time The preparation time in minutes.
     * @param price The price of the dessert.
     * @param cuisine_type The cuisine type of the dessert.
     * @param flavor_profile The flavor profile of the dessert.
     * @param sweetness_level The sweetness level of the dessert.
     * @param contains_nuts Flag indicating if the dessert contains nuts.
     */

    Dessert(const std::string &name, const std::vector<std::string> &ingredients, int prepTime, double price,
            CuisineType cuisineType, FlavorProfile flavorProfile = FlavorProfile::SWEET, int sweetnessLevel =1, bool containsNuts = false);

    /**
     * Sets the flavor profile of the dessert.
     * @param flavor_profile The new flavor profile.
     * @post Sets the private member `flavor_profile_` to the value of the parameter.
     */
    void setFlavorProfile(FlavorProfile flavorProfile);

    /**
     * @return The flavor profile of the dessert (as an enum).
     */
    FlavorProfile getFlavorProfile() const;

    /**
     * Sets the sweetness level of the dessert.
     * @param sweetness_level An integer representing the sweetness level of the dessert.
     * @post Sets the private member `sweetness_level_` to the value of the parameter.
     */
    void setSweetnessLevel(int sweetnessLevel);

    /**
     * @return The sweetness level of the dessert.
     */

    int getSweetnessLevel() const;

    /**
     * Sets the contains_nuts flag of the dessert.
     * @param contains_nuts A boolean indicating if the dessert contains nuts.
     * @post Sets the private member `contains_nuts_` to the value of the parameter.
     */
    void setContainsNuts(bool containsNuts);

    /**
     * @return True if the dessert contains nuts, false otherwise
     */
    bool isContainsNuts() const;

private:
    FlavorProfile flavor_profile_;
    int sweetness_level_;
    bool contains_nuts_;
};


#endif //DESSERT_HPP
