//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface EmbeddingCache : NSObject
{
    int _parentDirFd;	// 8 = 0x8
    int _indexType;	// 12 = 0xc
    struct datastore_info *_dsi;	// 16 = 0x10
    NSString *_dbName;	// 24 = 0x18
    struct {
        unsigned int hitCount;
        unsigned int missCount;
    } _stats;	// 32 = 0x20
    CDStruct_f408d906 _fifo;	// 40 = 0x28
}

+ (id)initInstanceWithType:(int)arg1 name:(id)arg2;	// IMP=0x004000000000cf34
+ (id)sharedInstanceWithType:(int)arg1;	// IMP=0x001000000000ceaf
+ (id)embeddingCaches;	// IMP=0x001000000000c760
- (void).cxx_destruct;	// IMP=0x002000000000d646
@property CDStruct_f408d906 fifo; // @synthesize fifo=_fifo;
- (unsigned int)itemCount;	// IMP=0x001000000000d5ef
- (unsigned int)hitRate;	// IMP=0x001000000000d5d7
- (id)get:(const char *)arg1;	// IMP=0x001000000000d543
- (_Bool)put:(const char *)arg1 value:(id)arg2;	// IMP=0x001000000000d31b
- (void)deleteFromDb:(unsigned int)arg1;	// IMP=0x001000000000d298
- (void)flush;	// IMP=0x001000000000cc58
- (void)closeAndDeleteStore:(id)arg1;	// IMP=0x001000000000cbf0
- (id)initWithParentFd:(int)arg1 indexType:(int)arg2 dbName:(id)arg3;	// IMP=0x001000000000ca88
- (void)populateFifoStore;	// IMP=0x001000000000c9f6
- (void)setProtectionClassForFolder:(int)arg1 protectionClass:(int)arg2;	// IMP=0x001000000000c9e1
- (id)dbFetchValueWithKey:(long long)arg1;	// IMP=0x001000000000c8cf
- (_Bool)dbWriteValueWithKey:(long long)arg1 data:(const void *)arg2 dataLen:(int)arg3;	// IMP=0x001000000000c7b5

@end
