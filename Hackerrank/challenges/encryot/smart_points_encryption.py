import re


def smart_points_encryption(sentence):
    word_list = sentence.split()
    global_word_list = []
    res_list = []
    for i in range(0, len(word_list), 3):
        global_word_list.append(word_list[i: i + 3])
    for each_list in global_word_list:
        each_list[0] = re.sub("[aeiouAEIOU]", "%", each_list[0])
        each_list[1] = re.sub("[^aeiouAEIOU]+", "#", each_list[1])
        each_list[2] = each_list[2].upper()
    for each_list in global_word_list:
        res_list.append("".join(each_list))
    return " ".join(res_list)


print(smart_points_encryption("Where are you? Meet me near the clock tower."))
