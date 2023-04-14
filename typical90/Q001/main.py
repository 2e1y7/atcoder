import numpy as np

def main(matrix):
    row, col = np.shape(matrix)
    # for i in range(row):
    #     for j in range(col):
    #         row_sum = []
    col_sum = np.sum(matrix, axis=0)
    row_sum = np.sum(matrix, axis=1)
    matrix_ans = np.zeros((row, col))
    for i in range(row):
        for j in range(col):
            matrix_ans[i][j] = col_sum[j] + row_sum[i] - matrix[i][j]
    
    return matrix_ans

if __name__ == "__main__":
    vert = input("how many vertical number...    ")
    holi = input("how many holizontal number...   ")
    if not vert.isdigit():
        print("please input digit number")
        exit()
    else:
        vert = int(vert)
    if not holi.isdigit():
        print("please input digit number")
        exit()
    else:
        holi = int(holi)
    
    matrix = [int(input()) for i in range(vert * holi)]
    matrix = np.array(matrix).reshape(vert, holi)
    print(type(matrix))
    print(matrix)
    ans = main(matrix)
    print(ans)