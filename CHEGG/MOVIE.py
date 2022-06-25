movies={}
for itr in range(int(input("Enter number of movies: "))):
    name=input("Enter name: ")
    genre=input("Enter genre: ")
    budget=float(input("Enter budget (in millions) : "))
    rating=float(input("Enter rating (out of 10) : "))
    movies[name]=[genre,budget,rating]

threshold=float(input("Enter minimum rating threshold: "))
print("Movies with rating >= {threshold}")
flag=True

for key in movies:
    if(movies[key][2]>=threshold):
        flag=False
        print(key, movies[key])

if(flag):
    print("No movie with rating >= 8.7")