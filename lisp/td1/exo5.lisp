(defun fun5ai(x)
	(loop while(> x 0) do 
		(progn
			(format t ".")
			(setf x (- x 1)))))

(defun fun5ar(x)
	(if(= x 1)
		(format t ".")
	(progn
		(format t ".")
		(fun5ar(- x 1)))))

(defun fun5br(l)
	(cond
		((null l) 0)
		((if(eq (car l) "a")
			(+ 1 (fun5br(cdr l)))
			(fun5br(cdr l))))))

(defun fun5bi(l)
	(format t "IMPOSSIBLE A FAIRE"))