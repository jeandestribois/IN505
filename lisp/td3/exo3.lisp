(defun pos_up_i(l)
	(let
		((i 0)
		 (tmp nil)
		 (ret nil))
		(progn
			(list tmp (car l))
			(setf ret tmp)
			(loop while (atom(cdr l)) do
				(progn
					(setf i (+ i 1))
					(setf l (cdr l))
					(append tmp (+ (car l) i))))
			ret)))

(defun pos_up_r(l &optional(i 0))
	(cond
		((null l) l)
		(t (append (list (+ (car l) i))
			(pos_up_r (cdr l) (+ i 1))))))

(defun pos_up_m(l)
	(cond
		((null l) l)
		((consp l)
			(cons (car l)
				(pos_up_m (mapcar '1+ (cdr l)))))))