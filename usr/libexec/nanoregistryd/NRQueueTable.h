//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NRQueueTable : NSObject
{
    NSObject<OS_dispatch_queue> *_queueTableQueue;	// 8 = 0x8
    NSMutableDictionary *_queueTable;	// 16 = 0x10
}

+ (id)sharedTable;	// IMP=0x0040000000023930
- (void).cxx_destruct;	// IMP=0x00200000000241be
- (void)removeQueue:(id)arg1;	// IMP=0x00100000000240d5
- (id)queueWithDispatchQueue:(id)arg1;	// IMP=0x0010000000023dd4
- (void)enumerateQueuesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023b26
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0010000000023985
- (id)init;	// IMP=0x0010000000023885

@end
