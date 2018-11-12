(defun fun4(l)
	(cond
		((null l) nil)
		((listp(car l)) t)
		(t (fun4(cdr l)))))