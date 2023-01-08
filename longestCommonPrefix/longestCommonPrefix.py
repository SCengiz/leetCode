
def findString(inputArray, resultIndexCount):
    if resultIndexCount == 0:
        return ""
    returnString = ""
    for kk in range(resultIndexCount):
        returnString += inputArray[0][kk]
    return returnString

def returnLongestCommonPrefix(inputArray):
    count = 0
    resultIndexCount = 0
    for jj in range(len(inputArray[0])):
        for ll in range(len(inputArray)):
            inChar = inputArray[0][jj]
            if inChar == inputArray[ll][jj]:
                count += 1
            if count == len(inputArray):
                resultIndexCount += 1
        if count == 0 or count < len(inputArray):
            break
        count = 0
    return findString(inputArray, resultIndexCount)


inputArray = ["flower", "flow", "flight"]
print(returnLongestCommonPrefix(inputArray))


