class Solution(object):
    def matrixReshape(self, mat, r, c):
        """
        :type mat: List[List[int]]
        :type r: int
        :type c: int
        :rtype: List[List[int]]
        """
        if len(mat) * len(mat[0]) != r * c:
            return mat

        reshape = [[]]
        for row in mat:
            for col in row:
                if len(reshape[-1]) < c:
                    reshape[-1].append(col)
                else:
                    reshape.append([])
                    reshape[-1].append(col)
        return reshape
