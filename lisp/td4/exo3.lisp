(let ((maxi nil))
	(defun exo3 (x)
		(cond
			((null maxi)
				(progn
					(setf maxi x)
					nil))
			((> x maxi)
				(progn
					(setf maxi x)
					t))
			(t
				(progn
					(setf maxi x)
					nil)))))