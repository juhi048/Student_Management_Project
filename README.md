# Shopping System

**Overview:**
The Shopping System is a C++ program designed to facilitate the management of a shopping system. It offers functionalities for both administrators and buyers, allowing seamless interaction with the shopping database.

**Features:**

1. **Administrator Functions:**
   - **Add Product:** Administrators can add new products to the shopping database, including product code, name, price, and discount.
   - **Edit Product:** Ability to modify existing product details such as code, name, price, and discount.
   - **Delete Product:** Administrators can remove products from the database based on their product code.

2. **Buyer Functions:**
   - **Generate Receipt:** Buyers can select products and quantities to generate a receipt, with automatic calculation of discounts and total amounts.

3. **Menu-Driven Interface:**
   - Users are presented with a menu-driven interface to navigate between administrator and buyer functionalities or to exit the program.

4. **Data Persistence:**
   - Utilizes file handling to store product details in a text file, ensuring data persistence between program executions.

**Usage:**

1. **Compile:**
   - Compile the program using a C++ compiler such as g++.
     ```
     g++ shopping_system.cpp -o shopping_system
     ```

2. **Run:**
   - Execute the compiled binary to launch the program.
     ```
     ./shopping_system
     ```

3. **Administrator Mode:**
   - Administrators can access functionalities to add, edit, or delete products by providing valid credentials.

4. **Buyer Mode:**
   - Buyers can generate receipts by selecting products and quantities, with automatic calculations for discounts and total amounts.

**Contributors:**
- [JUHI RASTOGI]

**License:**
This project is licensed under the [MIT] License.

**Disclaimer:**
This program is created for educational purposes only and may not be suitable for use in production environments.

**Note:**
Please ensure that all necessary dependencies are installed and the program is compiled correctly before running. For any issues or suggestions, feel free to contact [juhirastogi048@gmail.com].
