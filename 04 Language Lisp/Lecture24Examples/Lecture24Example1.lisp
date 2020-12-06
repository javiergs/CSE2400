(quote (hello world 1 2 3))
;(HELLO WORLD 1 2 3)

'(hello world 1 2 3)
;(HELLO WORLD 1 2 3)

(quote (what is (going on) here?))
;(WHAT IS (GOING ON) HERE?)

(quote my-symbol)
;MY-SYMBOL

(quote (+ 4 (* 3 2 9)))
;(+ 4 (* 3 2 9))

(setf myList '((A B) C (D)))
;((A B) C (D))

(car (car myList)) ; (first (first))
;A

(cdr( car myList)) ; (rest (first))
;(B)

(car (cdr myList)) ; (first (rest))
C

(setf myList2 '(A (B () (C () () )) (D (E () () ) () ) ) )
; (A (B NIL (C NIL NIL)) (D (E NIL NIL) NIL))

(car( car myList2)) ; (first (first (L))
; Error: Cannot take CAR of A.

(cdr( car myList2)) ; (rest (first (L))
; Error: Cannot take CDR of A.

(car (cdr myList2)) ; (first (rest (L))
; (B NIL (C NIL NIL))

(dolist (x '(a b c d e)) (print x))
;A
;B
;C
;D
;E
;NIL

(defun my-reverse (list)
  (let (new-list) ; empty list
    (dolist (x list)
      (setf new-list (cons x new-list))
    )
    new-list)
)
;MY-REVERSE

(my-reverse '(a b c d e f g))
(G F E D C B A)

(print (first (my-reverse '(a b c d e f g))))
;G

(print (last (my-reverse '(a b c d e f g))))
;(A)

(defun find-even (L); returns leftmost number
  (if (null L)
    nil
     (if (evenp (first L))
        (first L)
        (find-even (rest L))
     )
   )
)

(defun recursive-list-length (L); recursive function that traverses list and counts its elements
   (if (null L)
     0
     (1+ (recursive-list-length (rest L)))
   )
)

;defines a function (get N L) that returns the N member
; of list L -assumming that the elements are numbered from
; zero onwards
(defun get(N L)
   (if (null L)
      nil
      (if (zerop N)
         (first L)
         (get (1- N) (rest L))
      )
   )
)
