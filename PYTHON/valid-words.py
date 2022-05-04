def valid_words_mask(sentence):
    sentence=sentence.split()
    ans_list=[]
    valid="qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM,.!-?"
    for word in sentence:
        if(word.count(',')>1):
            ans_list.append(False)
            continue
        elif(word.count('.')>1):
            ans_list.append(False)
            continue
        elif(word.count('!')>1):
            ans_list.append(False)
            continue
        elif(word.count('-')>1):
            ans_list.append(False)
            continue
        flag=False
        for letter in word:
            if(letter not in valid):
                ans_list.append(False)
                flag=True
                break
        if(flag):
            continue
        if(word.count('-')==1 and (word.find('-') == 0 or word.find('-') == len(word)-1)):
            ans_list.append(False)
            continue
        if(word.count('.')==1 and word.find('.') != len(word)-1):
            ans_list.append(False)
            continue
        if(word.count(',')==1 and word.find(',') != len(word)-1):
            ans_list.append(False)
            continue
        if(word.count('!')==1 and word.find('!') != len(word)-1):
            ans_list.append(False)
            continue
        if(word.count('?')==1 and word.find('?') != len(word)-1):
            ans_list.append(False)
            continue
        ans_list.append(True)
    return (ans_list.count(True),ans_list)

print("these are valid words: ",valid_words_mask("these are valid words"))
print("!this 1-s b8d!: ",valid_words_mask("!this 1-s b8d!"))
print("mciheal mnefiodonvass? W-O-W: ",valid_words_mask("mciheal mnefiodonvass? W-O-W"))
print("it's Minecraft, not Mine-Craft!!: ",valid_words_mask("it's Minecraft, not Mine-Craft!!"))