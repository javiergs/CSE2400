(if (<= 3 2) (* 3 9) (+ 4 2 3))
;if (3<=2) {return 3*9;} else {return 4 + 2 + 3;}
;9

(if (> 2 3) 9)
;if (2>3) {return 9;} else {return nil}
;NIL

(if (= 2 2) (if (> 3 2) 4 6) 9)
;4

(+ 4 (if (= 2 2) (*9 2) 7) )
;22

(if (> 3 2)
    (progn (print "hello")
        (print "yo")
        (print "whassup?")
        (+ 2 2))
    (+ 1 2 3))
;"hello"
;"yo"
;"whassup?"
;4

(dotimes (x 4) (print "hello"))
;"hello"
;"hello"
;"hello"
;"hello"
;NIL

(setf bag2)
;2

(dotimes (x 3) (setf bag (* bag bag)))
;NIL

(print bag)
;256

(setf x (* 3 2))
;6

x
;6

(setf y (+ x 3))
;9

(setf x 4)
 (let ((x 3))   ; x declared local
     (print x)
     (setf x 9) ; change the value of x
     (printx)
     (+ x x))  ; this is the returned value
;3
;9
;18

x ; outside the let, we're back to global again
;4

(let ((x 3) (y (+ 4 9))) (* x y))
;39

(let ((x 3))
    (print x)
    (let (x)
      (print x)
      (let ((x "hello"))
       (print x))
      (print x))
    (print x)
    (print "end"))
;3
;NIL
;"hello"
;NIL
;3
;"end"
;"end"