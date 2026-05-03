# Food Health Analyzer

A simple C program that evaluates how healthy a meal is based on its calorie, sugar, and fat content.

## Overview
The Food Health Analyzer takes user input for:
- Total calories
- Sugar (grams)
- Fat (grams)

It then calculates a **health score** and classifies the meal into one of three categories:
- Safe Option
- Risky Choice
- Very Unhealthy  

Higher scores indicate a less healthy meal.

## How It Works

Each nutrient contributes to the total score:

### Calories
- > 800 → +2 points  
- 500–800 → +1 point  

### Sugar
- > 30g → +2 points  
- 15–30g → +1 point  

### Fat
- > 35g → +2 points  
- 20–35g → +1 point  

### Final Result
- **0–2** → Safe Option  
- **3–4** → Risky Choice  
- **5–6** → Very Unhealthy  

## How to Run
1. Compile the code
2. Run the program
3. Enter the calories, sugar and fat in your meal

## Author
Maham Zehra