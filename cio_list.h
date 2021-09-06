#ifndef CIOLib_List
#define CIOLib_List
template <typename _Tp>
	class list{
		public:
			int size(){
				return P_size;
			}
			void pushnum(_Tp num){
				P_size++;
				listarray[P_size] = num;
			}
			void pressnum(_Tp num){
				P_size++;
				for (int i = P_size; i >= 2; i--){
					listarray[i] = listarray[i - 1];
				}
				listarray[0] = num;
			}
			void insertnum(_Tp num, int id){
				P_size++;
				for (int i = P_size; i >= id + 1; i--){
					listarray[i] = listarray[i - 1];
				}
				listarray[id] = num;
			}
			bool empty(){
				if (P_size == 0)
					return true;
				return false;
			}
			_Tp getnum(int id){
				return listarray[id];
			}
			void pop(){
				if (this->empty()) throw listarray;
				for (int i = 1; i <= P_size - 1; i++){
					listarray[i] = listarray[i + 1];
				}
				P_size = P_size - 1;
			}
			void drawout(){
				if (this->empty()) throw listarray;
				P_size = P_size - 1; 
			}
			void deletenum(int id){
				for (int i = id; i <= P_size - 1; i++){
					listarray[i] = listarray[i + 1];
				}
				P_size = P_size - 1;
			}
			void setnum(int id, _Tp num){
				listarray[id] = num;
			}
		private:
			bool P_exist;
			int P_size;
			_Tp *listarray = new _Tp [P_size];
	};
#endif
