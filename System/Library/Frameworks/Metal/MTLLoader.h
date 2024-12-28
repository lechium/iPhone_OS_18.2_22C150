//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MTLLoader : NSObject
{
    void *_global;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_claimQueue;	// 16 = 0x10
    struct unordered_map<MTLLoadedFile *, id, std::hash<MTLLoadedFile *>, std::equal_to<MTLLoadedFile *>, std::allocator<std::pair<MTLLoadedFile *const, id>>> _claims;	// 24 = 0x18
}

+ (_Bool)deserializePipelinesFromAIRNTHeaderAtOffset:(unsigned long long)arg1 headerSize:(unsigned long long)arg2 singleHeaderExpected:(_Bool)arg3 reader:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00600000000f6b33
+ (_Bool)deserializeObjectFromAIRNTHeaderAtSection:(CDStruct_98a1d94c *)arg1 reader:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00600000000f63d7
+ (_Bool)deserializeHashesFromAIRNTHeaderAtOffset:(unsigned long long)arg1 headerSize:(unsigned long long)arg2 singleHeaderExpected:(_Bool)arg3 reader:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00600000000f62c6
+ (_Bool)isAIRHeaderExtLoadCommand:(const void *)arg1 headerOffset:(unsigned long long *)arg2 headerSize:(unsigned long long *)arg3 headerSection:(unsigned int *)arg4;	// IMP=0x00600000000f62b0
+ (_Bool)ReadHashTable:(unsigned long long)arg1 begin:(unsigned int)arg2 end:(unsigned int)arg3 hashList:(void *)arg4 reader:(CDUnknownBlockType)arg5 errorHandler:(CDUnknownBlockType)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x00600000000f5e64
- (id).cxx_construct;	// IMP=0x00000000000ff36b
- (void).cxx_destruct;	// IMP=0x00000000000ff35d
- (oneway void)dealloc;	// IMP=0x00000000000f97ed
- (id)init;	// IMP=0x00000000000f9763

@end
