(defun fun5(l)
	(if (null l)
		l
		(let
			((max1 (car(cdr(min_max l)))) (max2 (car(cdr(min_max(remove max1 l))))))
			(* max1 max2))))