(defun my_eq(x y)
	(if(and(atom x) (atom y))
		(if(eq x y)
			t
			(string= x y))
		(eq x y)))

(defun fun7(l1 l2)
	(cond
		((or (atom l1) (atom l2))
			(my_eq l1 l2))
		((eq l1 l2)
			t)
		(t
			(and(fun7 (car l1) (car l2)) (fun7 (cdr l1) (cdr l2))))))