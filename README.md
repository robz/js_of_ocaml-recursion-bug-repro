Repro bug in js_of_ocaml involving mutual recursion

Run "esy" -> see that the build hangs

Comment out the last few lines in bin/Hello.re, uncomment the ealier lines, run "esy" -> see the the build succeeds
