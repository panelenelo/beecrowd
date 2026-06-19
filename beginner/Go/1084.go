package main

import (
	"fmt"
)

func B1084() {

	var N, D int
	var x string

	for {
		fmt.Scanf("%d %d", &N, &D)
		if N == 0 && D == 0 {
			break
		}

		fmt.Scanf("%s", &x)

		temp1 := []rune(x)
		for i, j := range temp1 {
			temp1[i] = j - '0'
		}

		for range D {
			minv := int(temp1[0])
			mini := 0
			for i, j := range temp1 {
				if int(j) < minv {
					mini = i
					minv = int(j)
				}
			}
			// temp1 = slices.Delete(temp1, mini, mini+1)
			temp1 = append(temp1[:mini], temp1[mini+1:]...)
		}
		for i, j := range temp1 {
			temp1[i] = j + '0'
		}
		y := string(temp1)
		fmt.Println(y)
	}

}
