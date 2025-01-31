typedef struct
{
 	bool boolean_value;
  	char char_value;
  	char* string_value;
  	int int_value;
  	float float_value;
  	double double_value;
  	uint8_t uint8_value;
  	uint16_t uint16_value;
  	uint32_t uint32_value;
  	uint64_t uint64_value;
  	int8_t int8_value;
  	int16_t int16_value;
  	int32_t int32_value;
  	int64_t int64_value;
} test_struct;

struct other_test_struct {
    int *int_ptr;
    int array_of_4[4];
    size_t opaque_pointer;
    unknown_type unknown_value;
};

// examples of bugs which should be fixed
struct bugs_to_fix {
    // comments are transformed to fields
    // it also panics on empty lines
    // and comments like this: /* comment */
    __u32 found_in_kernel_sources;
    void *should_be_unsafe_pointer;
    // // int* pointers_like_this_not_handled_properly;
};