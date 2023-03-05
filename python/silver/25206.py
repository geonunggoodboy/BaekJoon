def change_score(rating):
    if rating == 'A+':
        return 4.5
    elif rating == 'A0':
        return 4.0
    elif rating == 'B+':
        return 3.5
    elif rating == 'B0':
        return 3.0
    elif rating == 'C+':
        return 2.5
    elif rating == 'C0':
        return 2.0
    elif rating == 'D+':
        return 1.5
    elif rating == 'D0':
        return 1.0
    else:
        return 0.0
        

credits = 0
result = 0
for _ in range(20):
    subject, credit, rating = input().split()
    if(rating != 'P'):
        credits += float(credit)
        result += change_score(rating) * float(credit)
print(result/credits)