//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct ExternalStreamSessionCommandExecutor {
    CDUnknownFunctionPointerType *_vptr$ICommandable;
    void *mCommandQueues;
    int mQueueCount;
    struct log_category *mLogCategory;
    struct atomic<bool> mIsOverflowing;
};

struct SessionManager {
    id _field1;
    id _field2;
    struct VoiceManager *_field3;
    id _field4;
};

struct StreamRenderer;

struct VoiceManager;

struct atomic<bool> {
    struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> {
        _Atomic _Bool __a_value;
    } __a_;
};

struct log_category;

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct os_unfair_recursive_lock_s {
    struct os_unfair_lock_s ourl_lock;
    unsigned int ourl_count;
};

struct shared_ptr<caulk::synchronized<Phase::Controller::ExternalStreamFader>> {
    void *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unfair_recursive_lock {
    struct os_unfair_recursive_lock_s m_lock;
};

struct unique_ptr<Phase::Controller::StreamRenderer, std::default_delete<Phase::Controller::StreamRenderer>> {
    struct __compressed_pair<Phase::Controller::StreamRenderer *, std::default_delete<Phase::Controller::StreamRenderer>> {
        struct StreamRenderer *_field1;
    } _field1;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<unsigned long long, void (^)(NSUUID *, NSUUID *, bool), std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>>> {
    struct __hash_table<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, void (^)(NSUUID *, NSUUID *, bool)>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> {
            float __value_;
        } __p3_;
    } __table_;
};

#pragma mark Typedef'd Structures

typedef struct {
    MISSING_TYPE *_field1[4];
} CDStruct_f1db2b5e;

// Template types
typedef struct shared_ptr<caulk::synchronized<Phase::Controller::ExternalStreamFader>> {
    void *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_4516cf1a;

typedef struct unique_ptr<Phase::Controller::StreamRenderer, std::default_delete<Phase::Controller::StreamRenderer>> {
    struct __compressed_pair<Phase::Controller::StreamRenderer *, std::default_delete<Phase::Controller::StreamRenderer>> {
        struct StreamRenderer *_field1;
    } _field1;
} unique_ptr_9eb0da1f;
