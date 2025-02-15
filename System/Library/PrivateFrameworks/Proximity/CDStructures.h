//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct BtProxData {
    double _field1;
    double _field2;
    unsigned int _field3;
};

struct Estimator;

struct NeighborMeasurements {
    basic_string_6b4a5e99 _field1;
    double _field2;
    _Bool _field3;
    _Bool _field4;
    double _field5;
    double _field6;
    _Bool _field7;
    int _field8;
    _Bool _field9;
    double _field10;
    _Bool _field11;
    _Bool _field12;
};

struct ResponderSuperframeCompleteEvent {
    unsigned short _field1;
    unsigned short _field2;
    unsigned char _field3;
    double _field4;
    struct array<unsigned char, 8UL> _field5;
    unsigned short _field6;
    unsigned short _field7;
    unsigned short _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
    unsigned char _field14;
    double _field15;
    unsigned char _field16;
    unsigned char _field17;
    unsigned char _field18;
    unsigned char _field19;
    struct vector<Rose::ResponderSuperframeRxPacketInfo, std::allocator<Rose::ResponderSuperframeRxPacketInfo>> _field20;
};

struct ResponderSuperframeRxPacketInfo;

struct ResponderSuperframeStats {
    double _field1;
    unsigned short _field2;
    struct ResponderSuperframeCompleteEvent _field3;
    struct optional<double> _field4;
};

struct SharingImportanceManager;

struct SharingImportanceMeasurements {
    struct vector<NeighborMeasurements, std::allocator<NeighborMeasurements>> userSharingInput;
};

struct array<unsigned char, 8UL> {
    unsigned char _field1[8];
};

struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
        struct __rep {
            union {
                struct __short {
                    struct {
                        unsigned int :1;
                        unsigned int :7;
                    } _field1;
                    char _field2[0];
                    char _field3[23];
                } _field1;
                struct __long {
                    struct {
                        unsigned int :1;
                        unsigned int :63;
                    } _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct deque<BtProxData, std::allocator<BtProxData>> {
    struct __split_buffer<BtProxData *, std::allocator<BtProxData *>> {
        struct BtProxData **__first_;
        struct BtProxData **__begin_;
        struct BtProxData **__end_;
        struct __compressed_pair<BtProxData **, std::allocator<BtProxData *>> {
            struct BtProxData **__value_;
        } __end_cap_;
    } __map_;
    unsigned long long __start_;
    struct __compressed_pair<unsigned long, std::allocator<BtProxData>> {
        unsigned long long __value_;
    } __size_;
};

struct optional<double> {
    union {
        char _field1;
        double _field2;
    } _field1;
    _Bool _field2;
};

struct shared_ptr<rose::ResponderSuperframeStats> {
    struct ResponderSuperframeStats *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<SharingImportanceManager, std::default_delete<SharingImportanceManager>> {
    struct __compressed_pair<SharingImportanceManager *, std::default_delete<SharingImportanceManager>> {
        struct SharingImportanceManager *__value_;
    } __ptr_;
};

struct unique_ptr<SingleThresholdProx::Estimator, std::default_delete<SingleThresholdProx::Estimator>> {
    struct __compressed_pair<SingleThresholdProx::Estimator *, std::default_delete<SingleThresholdProx::Estimator>> {
        struct Estimator *__value_;
    } __ptr_;
};

struct vector<NeighborMeasurements, std::allocator<NeighborMeasurements>> {
    struct NeighborMeasurements *__begin_;
    struct NeighborMeasurements *__end_;
    struct __compressed_pair<NeighborMeasurements *, std::allocator<NeighborMeasurements>> {
        struct NeighborMeasurements *__value_;
    } __end_cap_;
};

struct vector<Rose::ResponderSuperframeRxPacketInfo, std::allocator<Rose::ResponderSuperframeRxPacketInfo>> {
    struct ResponderSuperframeRxPacketInfo *_field1;
    struct ResponderSuperframeRxPacketInfo *_field2;
    struct __compressed_pair<Rose::ResponderSuperframeRxPacketInfo *, std::allocator<Rose::ResponderSuperframeRxPacketInfo>> {
        struct ResponderSuperframeRxPacketInfo *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct basic_string<char, std::char_traits<char>, std::allocator<char>> {
    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> {
        struct __rep {
            union {
                struct __short {
                    struct {
                        unsigned int :1;
                        unsigned int :7;
                    } _field1;
                    char _field2[0];
                    char _field3[23];
                } _field1;
                struct __long {
                    struct {
                        unsigned int :1;
                        unsigned int :63;
                    } _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
} basic_string_6b4a5e99;

