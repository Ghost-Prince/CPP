#import nltk
#nltk.download('words')
#from nltk.corpus import words
#wDuct=list(words.words())

wDict=["list","is","immutable","a","in","python"]
def misspelt(student_answer):
    student_answer=student_answer.split()
    misspelt_words=[]
    for word in student_answer:
        if word not in wDict:
            misspelt_words.append(word)
    return misspelt_words

print(misspelt("lisst is immutable"))
print(misspelt("list is a imutable"))
print(misspelt("lisst is immutoble in pyphon"))
print(misspelt("a lisst in python is immutoble"))

answers={50111023:"lisst is immutable".split(), 50123888:"list is a imutable".split(), 
51992299:"lisst is immutoble in pyphon".split(), 53332233:"a lisst in python is immutoble".split()}

def analysis(answers):
    result={}
    for student_id in answers.keys():
        for word in answers[student_id]:
            if word in result:
                result[word].append(student_id)
            else:
                result[word] = [student_id]
    for correct_word in wDict:
        if correct_word in result:
            del result[correct_word]
    
    new_ans = {}

    for word in result:
        i = 0
        j = 1
        if len(result[word])<2:
            new_ans[word] = result[word]
            pass
        else:
            new_ans[word] = []
            while j<len(result[word]):
                new_ans[word].append([result[word][i],result[word][j]])
                i += 1
                j += 1
    return new_ans
                
print(analysis(answers))