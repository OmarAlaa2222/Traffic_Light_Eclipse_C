#define SET_BIT(REG,BIT_NO) REG=(((1<<BIT_NO)) | REG )





#define CLEAR_BIT(REG,BIT_NO)  REG=((~(1<<BIT_NO)) & REG )





#define TOGGLE_BIT(REG,BIT_NO) REG=(((1<<BIT_NO)) ^ REG ) 




#define GET_BIT(REG,BIT_NO) (((REG>>BIT_NO)) & 1)


