#ifndef PAIR_H
#define PAIR_H

template <class T>
class Pair
{
	private:
		T pair1, pair2;
	public:
		Pair();
		Pair(T &pair1, T &pair2);
		~Pair();

		T getMax();
	
};

template<class T>
Pair<T>::Pair()
{
	this->pair1=0;
	this->pair2=0;
}

template<class T>
Pair<T>::Pair(T &pair1, T &pair2)
{
	this->pair1=pair1;
	this->pair2=pair2;
}

template<class T>
T Pair<T>::getMax()
{
	return (this->pair1>this->pair2)? this->pair1 : this->pair2;
}

template<class T>
Pair<T>::~Pair()
{
	
}

#endif