(defun taille(l)
	(if(null l)
		0
		(+ 1 (taille (cdr l)))))
	
(defun fun2(l)
	(let ((n (taille l)))
	(if(> n 4)
		(car(cdr(cdr(cdr l))))
		'("liste trop petite"))))