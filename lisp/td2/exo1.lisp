(defun fun1a(l)
	(if(or(null (car l)) (null (car(cdr l))))
		0
		(if (= (-(car l) (car(cdr l))) 1)
			t
			(fun1a(cdr l)))))

(defun fun1b(l)
	(setf ret 0)
	(loop while (and(not(null(car(cdr l)))) (eq ret t))  do
		(if (= (-(car l) (car(cdr l))) 1)
			(setf ret t)
			(setf l (cdr l))))
	ret)