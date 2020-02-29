// This package solves the two_fer exercism exercise.
package twofer

import (
	"fmt"
)

// ShareWith takes a name and returns a string
func ShareWith(name string) string {
	s := name
	if name == "" {
		s = "you"
	}
	return fmt.Sprintf("One for %s, one for me.", s)
}
