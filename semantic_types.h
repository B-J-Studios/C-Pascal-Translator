
  struct nb_modif{
    int nb_short;
    int nb_long;
    int sign;
  };
typedef struct nb_modif nb_modif ;

  struct nb_vis{
    int nb_auto;
    int nb_register;
    int nb_static;
    int nb_extern;
  };
typedef struct nb_vis nb_vis ;

struct type_rep{
    char * b_type;
    nb_modif mod;
    nb_vis vis;
};
typedef struct type_rep type_rep ;

struct id_list{
    char* in_c;
    char* in_p;
    int   conf;
    struct id_list * next_id;
};
typedef struct id_list id_list;

struct s_list{
    char* op;
    struct s_list * next_op;
};
typedef struct s_list s_list;

struct op_type{
    s_list* preop;
    char* op;
    s_list* postop;
};
typedef struct op_type op_type;

struct decl_type{
    char* type;
    op_type ops;
    s_list* ids;
};
typedef struct decl_type decl_type;

struct decl_list{//declarations
    char* type;
    s_list* ids;
    struct decl_list* next;
};
typedef struct decl_list decl_list;

struct local_type{
  s_list *ops;
  decl_list *declarations;
};
typedef struct local_type local_type;

FILE *out;
