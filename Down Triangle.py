class DownTriangle:
    def draw(n):
        for i in range(n):
            for j in range(i):
                print(' ',end='')
            for k in range(2*n-1):
                if (i ==0 or k == 2*n-1 or i ==j+1):
                    print('*', end='')
                    j=j+1
                else:
                    print(' ',end='')
            print()

ob1 = DownTriangle
ob1.draw(4)