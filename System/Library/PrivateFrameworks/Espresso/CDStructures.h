//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct __tree_end_node<std::__tree_node_base<void *>*> {
    void *__left_;
};

struct _mxnetTools_imageHeader_t_ {
    unsigned int flag;
    float label;
    struct _mxnetTools_imageID_t_ imageID;
};

struct _mxnetTools_imageID_t_ {
    unsigned long long ID[2];
};

struct _mxnetTools_recordHeader_t_ {
    unsigned int magic;
    unsigned int lrecord;
};

struct abstract_blob_container;

struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
        struct __rep {
            union {
                struct __short {
                    struct {
                        unsigned int __is_long_:1;
                        unsigned int __size_:7;
                    } ;
                    char __padding_[0];
                    char __data_[23];
                } __s;
                struct __long {
                    struct {
                        unsigned int __is_long_:1;
                        unsigned int __cap_:63;
                    } ;
                    unsigned long long __size_;
                    char *__data_;
                } __l;
                struct __raw {
                    unsigned long long __words[3];
                } __r;
            } ;
        } __value_;
    } __r_;
};

struct map<int, ETDataPoint *, std::less<int>, std::allocator<std::pair<const int, ETDataPoint *>>> {
    struct __tree<std::__value_type<int, ETDataPoint *>, std::__map_value_compare<int, std::__value_type<int, ETDataPoint *>, std::less<int>>, std::allocator<std::__value_type<int, ETDataPoint *>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<int, ETDataPoint *>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, ETDataPoint *>, std::less<int>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct map<std::string, std::shared_ptr<Espresso::blob<float, 2>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 2>>>>> {
    struct __tree<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 2>>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 2>>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 2>>>>> {
        void *__begin_node_;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 2>>>, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<Espresso::blob<float, 2>>>, std::less<std::string>>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct mutex {
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } __m_;
};

struct shared_ptr<Espresso::abstract_blob_container> {
    struct abstract_blob_container *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<std::string, Espresso::layer_shape, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, Espresso::layer_shape>>> {
    struct __hash_table<std::__hash_value_type<std::string, Espresso::layer_shape>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, Espresso::layer_shape>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_map<std::string, std::shared_ptr<Espresso::blob<float, 1>>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 1>>>>> {
    struct __hash_table<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::hash<std::string>, std::equal_to<std::string>>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::equal_to<std::string>, std::hash<std::string>>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<std::string, std::allocator<std::string>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::string *, std::allocator<std::string>> {
        void *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct unordered_map<std::string, Espresso::layer_shape, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, Espresso::layer_shape>>> {
    struct __hash_table<std::__hash_value_type<std::string, Espresso::layer_shape>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, Espresso::layer_shape>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>>> {
            float __value_;
        } __p3_;
    } __table_;
} unordered_map_4a701e3f;

typedef struct unordered_map<std::string, std::shared_ptr<Espresso::blob<float, 1>>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 1>>>>> {
    struct __hash_table<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::hash<std::string>, std::equal_to<std::string>>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 1>>>, std::equal_to<std::string>, std::hash<std::string>>> {
            float __value_;
        } __p3_;
    } __table_;
} unordered_map_1368fecc;

typedef struct vector<std::string, std::allocator<std::string>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::string *, std::allocator<std::string>> {
        void *__value_;
    } __end_cap_;
} vector_bfe5b09a;

