(defun rever (l)
	(cond
		((null l) l)
		(t (append(rever(cdr l)) (list (car l))))))