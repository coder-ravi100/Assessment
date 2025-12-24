# ---------------------------------------------
# FixTrack - Gadget Repair Tracking System
# Console Based Python Project
# ---------------------------------------------

# List to store all repair orders
# Each repair order will be stored as a dictionary
repair_orders = []


# ---------------------------------------------
# Function: Add a new repair order
# ---------------------------------------------
def add_repair_order():
    # Taking customer details as input
    name = input("Enter customer name: ")
    device = input("Enter device type: ")
    issue = input("Enter issue: ")
    due_date = input("Enter due date: ")

    # Creating a dictionary for one repair order
    order = {
        "name": name,
        "device": device,
        "issue": issue,
        "due_date": due_date,
        "status": "Pending"   # Default status
    }

    # Adding the order dictionary to the list
    repair_orders.append(order)

    # Confirmation message
    print("Repair order added successfully!")


# ---------------------------------------------
# Function: View all repair orders
# ---------------------------------------------
def view_repair_orders():
    # Checking if there are any repair orders
    if len(repair_orders) == 0:
        print("No repair orders found.")
    else:
        # Loop through all repair orders
        #for i, order in enumerate(repair_orders):
            i = 0
            for order in repair_orders:
                print("\n----------------------------")
                print(f"Order ID :{i}")
                print(f"Customer Name:{order["name"]}")
                print(f"Device Type: {order["device"]}")
                print(f"Issue: {order["issue"]}")
                print(f"Due Date: {order["due_date"]}")
                print(f"Status:{order["status"]}")
                print("----------------------------")
            i = i + 1


# ---------------------------------------------
# Function: Complete repair and generate bill
# ---------------------------------------------
def complete_repair():
    # First show all repair orders
    view_repair_orders()

    # Taking order ID from user
    order_id = int(input("Enter Order ID to complete repair: "))

    # Checking for valid order ID
    if order_id >= len(repair_orders):
        print("Invalid Order ID")
        return

    # Taking billing details
    repair_fee = float(input("Enter repair fee: "))
    parts_cost = float(input("Enter parts cost: "))
    discount = float(input("Enter discount amount (0 if none): "))

    # Calculating tax (18%)
    tax = (repair_fee + parts_cost) * 0.18

    # Calculating final amount
    total_amount = repair_fee + parts_cost + tax - discount

    # Updating repair status to Completed
    repair_orders[order_id]["status"] = "Completed"

    # Printing formatted bill
    print("\n========== INVOICE ==========")
    print(f"Customer Name:{repair_orders[order_id]["name"]}")
    print(f"Device:{repair_orders[order_id]["device"]}")
    print(f"Repair Fee:{repair_fee}")
    print(f"Parts Cost:{parts_cost}")
    print(f"Tax (18%):{tax}")
    print(f"Discount:{discount}")
    print("-----------------------------")
    print(f"Total Amount:{total_amount}")
    print("=============================")


# ---------------------------------------------
# Function: Main menu (Program Control)
# ---------------------------------------------
def main_menu():
    # Loop to keep the program running
    while True:
        print("\n===== FixTrack Menu =====")
        print("1. Add Repair Order")
        print("2. View Repair Orders")
        print("3. Complete Repair & Generate Bill")
        print("4. Exit")

        # Taking user choice
        choice = input("Enter your choice: ")

        # Decision making based on user choice
        if choice == "1":
            add_repair_order()
        elif choice == "2":
            view_repair_orders()
        elif choice == "3":
            complete_repair()
        elif choice == "4":
            print("Exiting program... Thank you!")
            break
        else:
            print("Invalid choice. Please try again.")
        

# ---------------------------------------------
# Program execution starts from here
# ---------------------------------------------
main_menu()
