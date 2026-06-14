package main

import "fmt"

func B1069() {
	var stack []int
	var N, d int

	fmt.Scanf("%d", &N)
	for i := N; i > 0; i-- {
		var dia string
		fmt.Scanf("%s", &dia)
		for _, j := range dia {
			// fmt.Printf("%c\n", j)
			if j == '<' {
				stack = append(stack, 1)
			}
			if j == '>' {
				if len(stack) > 0 {
					stack = stack[:len(stack)-1]
					d++
				}
			}
		}
		fmt.Println(d)
		d = 0
	}

}
