package main

import (
	"fmt"
	"strconv"
	"strings"
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

		// temp1 := N - (N - D)
		temp2 := 0
		temp3 := N - D
		var maxv, maxi int
		var result []string

		for temp3 > 0 {
			for i, j := range x[temp2 : D+1] {
				if maxv < int(j-'0') {
					maxv = int(j - '0')
					maxi = i
					fmt.Printf("i=%d, j=%d\n", i, maxv)
				}
			}
			temp2 = maxi + 1
			temp3--
			D++
			result = append(result, strconv.Itoa(maxv))
		}
		y := strings.Join(result, "")
		fmt.Println(y)
	}

}
