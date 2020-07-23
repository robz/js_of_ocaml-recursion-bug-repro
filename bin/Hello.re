/* js_of_ocaml compiles */
/*
 let rec f1 = () => f2()
 and f2 = () => f1();
 */

/* js_of_ocaml compiles */
/*
 let rec f1 = () => f1();
 */

/* js_of_ocaml does not compile */
let rec f1 = () => f1()
and f2 = () => f1();
