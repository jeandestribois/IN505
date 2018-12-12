(defun minmaxvec(v)
	(cond
		((= (length v) 0) nil)
		((= (length v) 1) (list (svref v 0)(svref v 0)))
		(t(minmax v 1 (svref v 0) (svref v 0)))))

(defun minmax (v i mini maxi)
	(cond
		((= (length v) i) (list mini maxi))
		((> mini (svref v i)) (minmax v (+ i 1) (svref v i) maxi))
		((< maxi (svref v i)) (minmax v (+ i 1) mini (svref v i)))
		(t (minmax v (+ i 1) mini maxi))))