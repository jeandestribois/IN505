(defun min_max(l)
	(cond 
		((null l) l)
		((null (cdr l)) (list (car l) (car l)))
		(t (min_maxbis (cdr l) (car l) (car l)))))

(defun min_maxbis (l mini maxi)
	(cond
		((null l) (list mini maxi))
		((< (car l) mini) (min_maxbis (cdr l) (car l) maxi))
		((> (car l) maxi) (min_maxbis (cdr l) mini (car l)))
		(t (min_maxbis (cdr l) mini maxi))))
