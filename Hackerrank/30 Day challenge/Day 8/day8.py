def main():
    number = int(input())
    phoneBook = dict()
    for _ in range(number):
        tempList = input().split()
        phoneBook[tempList[0]] = tempList[1]
    queryList = []
    while True:
        try:
            queryList.append(input())
        except EOFError:
            break
    for eachQuery in queryList:
        if eachQuery in phoneBook.keys():
            print("{0}={1}".format(eachQuery, phoneBook[eachQuery]))
        else:
            print("Not found")

if __name__ == "__main__":
    main()
