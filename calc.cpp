
namespace Calcs {
	template <typename T> 
	T add( const T &i1, const T& i2)
	{
		return i1 + i2;
	}

	template <typename T>
	T mul(const T& i1, const T&i2)
	{
		return i1 *i2;
	}
	
	template <typename T>
	T div(const T &i1, const T&i2)
	{
		return (i1 / i2);
	}
	
	template <typename T> 
	T subtract( const T &i1, const T& i2)
	{
		return i1 - i2;
	}
	
}