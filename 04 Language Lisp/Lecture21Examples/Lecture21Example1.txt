(+ 27/32 32/57)
;2563/1824

(* 2.342 3.2e4)
;74944.0

(* 2.342 9.212 -9.23 3/4) ; You can mix number types
;-149.34949

(/ 3 5) ; The return type stays as general as possible
;3/5

(/ 3.0 5) ; Here LISP had no choice: convert to a float
;0.6

(1+ 3)
;4

(string-upcase "How about that!")
;"HOW ABOUT THAT!"

(reverse "Four score and seven years ago")
;"oga sraey neves dna erocs ruoF"

(length "Four score and seven years ago")
;30

(sqrt 2)
;1.4142135

(sqrt -1.0)
;#C(0 1.0)

(SqRt -1.0) ; LISP symbols are case-insensitive
;#C(0 1.0)

(= 4 3) ; is 4 == 3 ?
;NIL

(< 3 9) ; is 3 < 9 ?
;T

(numberp "hello") ; is "foo" a number?
;NIL

(oddp 9) ; is 9 an odd number?
;T

(/ 1 0)
;*** - division by zero

(blah-blah-blah 1 0 "foo")
;*** - EVAL: the function BLAH-BLAH-BLAH is undefined

(+ 33 (* 2.3 4) 9)
;51.2

(+ (length "Hello World") 44)
;55

(* (+ 3 2.3) (/ 3 (- 9 4))) ; in C++: (3+2.3) * (3 / (9-4))
;3.1800003

(log (log (log 234231232234234123)))
;1.3052895

(+ (* (sin 0.3)
      (sin 0.3)) ; expressions may use multiple lines
   (* (cos 0.3)
      (cos 0.3))); sin(0.3)^2 + cos(0.3)^2
;1.0000001       ; = 1.  Rounding inaccuracy

(and (< 3 (*2 5))
       (not (>= 2 6))) ; (3 < 2 * 5) && !(2 >= 6)
;T

(print (+ 2 3 4 1))
;10
;10

(+ (* 2 3) (/ 3 2) 9)
;33/2