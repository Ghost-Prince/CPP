class Passenger:
    def __init__(self,passport_number,name,departure_date,arrival_date,arrival_city,cost,flight_number):
        self.passport_number=passport_number
        self.name_of_passenger=name
        self.departure_date=departure_date
        self.arrival_date=arrival_date
        self.arrival_city=arrival_date
        self.cost=cost
        self.flight_number=flight_number

class Flight:
    def __init__(self,flight_number,capacity,confirmation_list,waiting_list,departure_date,arrival_date,departure_city,arrival_city):
        self.flight_number=flight_number
        self.capacity=capacity
        self.confirmation_list=confirmation_list
        self.waiting_list=waiting_list
        self.departure_date=departure_date
        self.arrival_date=arrival_date
        self.departure_city=departure_city
        self.arrival_city=arrival_city

passengers=[]
flights=[]

# Add a new record to system
def add_passenger():
    passport_number=int(input("Enter Passport Number: "))
    name=input("Enter Name: ")
    departure_date=input("Enter Departure Date: ")
    arrival_date=input("Enter Arrival Date: ")
    arrival_city=input("Enter City of Arrival: ")
    cost=input("Enter Cost of Journey: ")
    flight_number=input("Enter Flight Number: ")
    passenger1=Passenger(passport_number,name,departure_date,arrival_date,arrival_city,cost,flight_number)
    passengers.append(passenger1)

def add_flight():
    flight_number=input("Enter Flight Number: ")
    capacity=input("Enter Capacity: ")
    confirmation_list=[]
    for i in range(int(input("Enter number of confirmed passenger: "))):
        confirmation_list.append(int(input("Enter passport number of confirmed passenger: ")))
    waiting_list=[]
    for i in range(int(input("Enter number of passengers in waiting list: "))):
        waiting_list.append(int(input("Enter passport number of passenger in waiting list: ")))
    departure_date=input("Enter Departure Date: ")
    arrival_date=input("Enter Arrival date: ")
    departure_city=input("Enter Departure City: ")
    arrival_city=input("Enter Arrival City: ")
    flight1=Flight(flight_number,capacity,confirmation_list,waiting_list,departure_date,arrival_date,departure_city,arrival_city)
    flights.append(flight1)

# Delete Passenger's Reservation
def delete_passenger(passenger1):
    passengers.remove(passenger1)

# Search for passenger using Passport Number and return the record of him
def search_passenger(passport_number):
    for passenger in passengers:
        if(passenger.passport_number == passport_number):
            return passenger

# Print report of a given passenger using his passport number
def print_report(passport_number):
    for passenger in passengers:
        if(passenger.passport_number == passport_number):
            print(passenger.passport_number)
            print(passenger.name_of_passenger)
            print(passenger.departure_date)
            print(passenger.arrival_date)
            print(passenger.arrival_city)
            print(passenger.cost)
            print(passenger.flight_number)
            return

# Display flight's passengers
def display_flight_passengers(flight):
    for passport_number in flight.confirmation_list:
        print_report(passport_number)

# Display waiting list passengers
def display_waiting_passengers(flight):
    for passport_number in flight.waiting_list:
        print_report(passport_number)