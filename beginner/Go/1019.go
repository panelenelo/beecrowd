package main

import "fmt"

func B1019() {
	var N int
	var s, m, h int
	fmt.Scanf("%d", &N)

	m = N / 60
	s = N % 60
	h = m / 60
	m = m % 60

	fmt.Printf("%d:%d:%d\n", h, m, s)

}
