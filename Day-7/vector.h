

template<typename T>

class Vector{
     
     T *arr;
     int cs;
     int ms;
public:
      
      Vector(int max_size=1){
          cs=0;
          ms=max_size;
          arr=new T[ms];
          
      }
      void push_back(const T d){
          //Two cases
        if(cs==ms){           
          
          //create a new array and delete the old one ,double the capacity
          T *oldarr=arr;
          ms=2*ms;
          arr=T int[ms];
          //copy the elements
          for(int i=0;i<cs;i++){
               arr[i]=oldarr[i];
          }
          //Delete the old arr
          delete [] oldarr;
          
          }
          
          arr[cs]=d;
          cs++;
          
          
      }
      
      void pop_back()
      {
          if(cs>=0){
               cs--;
          }
      }
      bool isEmpty() const{
          return cs==0;//return true when cs=0
      }
      
      
      T front() const{
          return arr[0];
      }
      
      T back() const{
          return arr[cs-1];
          
      }
      
      T at(int i) const{
          return arr[i];
      }
      
      T size() const{
          return cs;
      }
      
      T capacity() const{
          return ms;
      }
      
      //operator overloading
      T operator[] (int i) const{
          return arr[i];
      }
      
          
};
