Repro bug in js_of_ocaml involving mutual recursion, see https://github.com/ocsigen/js_of_ocaml/issues/1042

Run "esy" -> see that the build hangs

Comment out the last few lines in bin/Hello.re, uncomment the ealier lines, run "esy" -> see the the build succeeds
