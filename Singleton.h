#pragma once
template<typename T>
class Singleton
{
protected:
	Singleton()
	{

	}
	~Singleton()
	{

	}
	Singleton& operator=(const Singleton&) = delete;
	Singleton(const Singleton& a) = delete;


public:
	static T* Getlns()
	{
		if (instance == nullptr)
		{
			instance = new T();
		}
		return instance;
	}

private:
	static T* instance;
};
