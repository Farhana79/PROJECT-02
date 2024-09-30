/**
 * @file MainCourse.hpp
 * @brief This file contains the declaration of the MainCourse class, which represents a main course in a virtual bistro simulation.
 *
 * The MainCourse class inherits from the Dish class, adding specific attributes that define characteristics of a
 * main course. This class provides constructors, accessor and mutator functions, and methods to manage and
 * present main course-specific details, including cooking methods, protein types, and side dishes.
 *
 * @date [Insert Date]
 * @author [Your Name]
 */


#ifndef MAINCOURSE_HPP
#define MAINCOURSE_HPP

#include "Dish.hpp"

class MainCourse : public Dish{
public:
    enum class CookingMethod { GRILLED, BAKED, FRIED, STEAMED, RAW };
    enum class Category { GRAIN, PASTA, LEGUME, BREAD, SALAD, SOUP, STARCHES,VEGETABLE };
    struct SideDish {std::string name;  Category category;};


    /**
     * Default constructor.
     * Initializes all private members with default values.
     */
    MainCourse();

    /**
     * Parameterized constructor.
     * @param name The name of the main course.
     * @param ingredients A vector of the ingredients used in the main course.
     * @param prep_time The preparation time in minutes.
     * @param price The price of the main course.
     * @param cuisine_type The cuisine type of the main course.
     * @param cooking_method The cooking method used for the main course.
     * @param protein_type The type of protein used in the main course.
     * @param side_dishes A vector of the side dishes served with the main course.
     * @param gluten_free Boolean flag indicating if the main course is gluten-free.
     */
    MainCourse(const std::string &name, const std::vector<std::string> &ingredients, int prepTime, double price,
               CuisineType cuisineType, CookingMethod cookingMethod, const std::string &proteinType = "UNKNOWN",
               const std::vector<SideDish> &sideDishes = {}, bool glutenFree = false);


    /**
     * Sets the cooking method of the main course.
     * @param cooking_method The new cooking method.
     * @post Sets the private member `cooking_method_` to the value of the parameter.
     */
    void setCookingMethod(CookingMethod cookingMethod);

    /**
     * @return The cooking method of the main course (as an enum).
     */
    CookingMethod getCookingMethod() const;

    /**
     * Sets the type of protein in the main course.
     * @param protein_type A string representing the type of protein.
     * @post Sets the private member `protein_type_` to the value of the parameter.
     */
    void setProteinType(const std::string &proteinType);

    /**
     * @return The type of protein in the main course.
     */
    const std::string &getProteinType() const;

    /**
     * Adds a side dish to the main course.
     * @param side_dish A SideDish struct containing the name and category of the side dish.The Dessert Class
     * @post Adds the side dish to the `side_dishes_` vector.
     */
    void addSideDish(SideDish &side_dish);


    /**
     * @return A vector of SideDish structs representing the side dishes served with the main course.
     */
    const std::vector<SideDish> &getSideDishes() const;


    /**
     * Sets the gluten-free flag of the main course.
     * @param gluten_free A boolean indicating if the main course is glutenfree.
     * @post Sets the private member `gluten_free_` to the value of the parameter.
     */
    void setGlutenFree(bool gluten_free);

    /**
     * @return True if the main course is gluten-free, false otherwise.
     */
    bool isGlutenFree() const;

private:
    CookingMethod cooking_method_;
    std::string protein_type_;
    std::vector<SideDish> side_dishes_;
    bool gluten_free_;
};


#endif //MAINCOURSE_HPP
