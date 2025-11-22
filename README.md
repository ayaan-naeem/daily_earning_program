## Daily Earnings Calculator

This C++ program calculates the daily earnings of Kaka in Rupees, based on his work routine, daily dollar income, current exchange rate, yearly bonus, and taxes.

## Note:
In this example, Kaka is a man who earns money daily in dollars. The program converts his earnings into Rupees while considering yearly bonuses and taxes.

## Program Description

Kaka works a number of days each month and earns a certain amount of dollars per day. The program calculates:

Monthly salary based on the number of working days and daily earnings.

Yearly salary by multiplying the monthly salary by 12.

Salary after bonus: Kaka receives an extra bonus equivalent to 2.5 months of salary.

Salary after tax: A 25% tax is deducted from his yearly income after bonus.

Daily earnings in Rupees: The final yearly salary is divided by 365 days and converted using the current exchange rate.

## How It Works

## Input from User
The program asks the user for:

Number of working days in a month

Daily earnings in dollars

Current exchange rate (1 Dollar to Rupees)

Monthly Salary Calculation

salaryPerMonth = days * dollars;


Multiplies the number of working days by Kaka's daily earnings to get his monthly income in dollars.

Yearly Salary Calculation

salaryPerYear = salaryPerMonth * 12;


Multiplies monthly salary by 12 to get Kaka’s total annual income in dollars.

Adding Bonus

salaryAfterBonus = salaryPerYear + (salaryPerMonth * 2.5);


Kaka receives an additional 2.5 months of salary as a bonus. This is added to the yearly salary.

Deducting Taxes

salaryAfterTax = salaryAfterBonus - (salaryAfterBonus * 25 / 100);


The government deducts 25% tax from Kaka’s total salary (including bonus).

## Calculating Daily Earnings in Rupees

earningPerDayinRupees = (salaryAfterTax / 365) * exchangeRate;


Divides Kaka’s yearly salary after tax by 365 to get daily income in dollars.

Multiplies by the current exchange rate to convert dollars to Rupees.

## Sample Input/Output

Enter Number of Working Days in a Month: 20

Enter Earned Dollars per Day: 50

Enter Current Exchange Rate (1 Dollar to Rupees): 285

Your Earning Per Day in Rupees is: 3,531.25


## Explanation:

Kaka works 20 days a month, earning 50 dollars per day.

His monthly salary = 20 × 50 = 1000 dollars.

Yearly salary = 1000 × 12 = 12,000 dollars.

Bonus = 2.5 × monthly salary = 2,500 dollars.

Total with bonus = 14,500 dollars.

Tax deduction (25%) = 3,625 dollars.

Final salary after tax = 10,875 dollars.

Daily earnings in Rupees = (10,875 ÷ 365) × 285 ≈ 8,496.58 Rupees

## Purpose & Learning

This project demonstrates:

User input handling with cin

Arithmetic operations for real-world scenarios

Conditional calculation flow for salary, bonus, and tax

Converting currencies using a dynamic exchange rate

Breaking down complex calculations step by step

It’s also a good exercise to visualize how salaries, bonuses, and taxes interact in programming logic.

## How to Run

## Step 1: Compile the code

g++ daily_earning_calculator.cpp -o daily_earning_calculator

## Step 2: Run the program

./daily_earning_calculator


or on Windows:

daily_earning_calculator.exe

## Step 3: Enter the inputs

Number of working days in a month

Earned dollars per day

Current exchange rate

The program will output Kaka’s daily earning in Rupees.
