# Name: Amit Manore # Enr_no: BE20F06F036

sampleTuple = (1, 3, 2, 4, 6, 5)

oddIndexTuple = tuple(sampleTuple[i]
                      for i in range(len(sampleTuple))
                      if i % 2 != 0)


print(oddIndexTuple)
