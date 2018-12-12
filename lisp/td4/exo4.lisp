(defun exo4(nom)
	(let 
		((res ()))
		(with-open-file (stream nom)
			(loop for line = (read-line stream nil 'eof)
				until (eq line 'eof)
				do (print line)))))