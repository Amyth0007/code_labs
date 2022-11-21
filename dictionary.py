# Name: Amit Manore # Enr_no: BE20F06F036
# prac5

freqDict = {}


def histogram(inputString):
    for i in inputString:
        if i in freqDict:
            freqDict[i] += 1
        else:
            freqDict[i] = 1

    return str(freqDict)


ansString = histogram('APplee')
print(ansString)
