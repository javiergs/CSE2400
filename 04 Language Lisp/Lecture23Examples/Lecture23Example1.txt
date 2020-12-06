(defun do-hello-world () "Hello, World!")
;DO-HELLO-WORLD
(do-hello-world)
;"Hello, World!"

(defun add-four (x) (+ x 4))
;ADD-FOUR
(add-four 7)
;11

(defun hypotenuse (length width)
   (sqrt (+ (* length length) (* width width))))
;HYPOTENUSE
(hypotenuse 7 9)
;11.4017

(defun first-n-chars (string n reverse-iT)
        (if reverse-iT)
          (subseq (reverse string) 0 n)
          (subseq string 0 n)))
;FIRST-N-CHARS
(first-n-chars "hello world" 5 nil)
;"hello"
(first-n-chars "hello world" 5 t)
;"dlrow"
(first-n-chars "hello world" 5 2013)
;"dlrow"

(defun factorial (n)
(let ((sum 1))
   (dotimes (i n)
     (setf sum (* sum (1+ i)))
   )
   sum
)
)
;FACTORIAL

(defun factorial (n)
   (if (<= n 0)
      1
      (*n (factorial (- n 1)))
   )
)
;FACTORIAL