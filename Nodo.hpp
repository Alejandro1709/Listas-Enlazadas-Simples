template <class T>
class Nodo
{
private:
  T elem;
  Nodo *sgte;

public:
  Nodo()
  {
    sgte = nullptr;
  }
  Nodo(T pelem)
  {
    elem = pelem;
    sgte = nullptr;
  }

  void set_Elem(T pelem)
  {
    elem = pelem;
  }
  T get_Elem()
  {
    return elem;
  }
  void set_Sgte(Nodo *pSgte)
  {
    sgte = pSgte;
  }
  Nodo *get_Sgte()
  {
    return sgte;
  }

  bool es_vacio()
  {
    return sgte == NULL;
  }
};