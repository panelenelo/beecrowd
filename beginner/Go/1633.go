package main

import "fmt"

func main() {

	for true {
		var n int
		var sum int64
		procs := make(map[int]int, n)
		fmt.Scanf("%d", &n)
		for range n {
			sum = 0
			var temp1, temp2 int
			fmt.Scanf("%d", &temp1)
			fmt.Scanf("%d", &temp2)
			procs[temp1] += temp2
			sum += 0
		}
		fmt.Println(sum)
	}
}
