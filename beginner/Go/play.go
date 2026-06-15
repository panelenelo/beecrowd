package main

import (
	"fmt"
)

func play() {
	x := "16735"

	for i, j := range x {
		x := int(j - '0')
		fmt.Printf("i=%d, j=%d\n", i, x)
	}
}
