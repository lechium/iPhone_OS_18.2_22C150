//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSCountedSet, NSMutableDictionary;

@interface TransactionStore : NSObject
{
    MISSING_TYPE *_dispatchQueue;	// 8 = 0x8
    unsigned long long _handle;	// 16 = 0x10
    long long _holdTime;	// 24 = 0x18
    NSCountedSet *_transactionCount;	// 32 = 0x20
    NSMutableDictionary *_transactionStore;	// 40 = 0x28
}

+ (void)releaseKeepAliveTransaction:(id)arg1;	// IMP=0x0040000000066a6a
+ (void)takeKeepAliveTransaction:(id)arg1;	// IMP=0x0010000000066a01
+ (void)holdKeepAliveTransaction:(id)arg1 whilePerformingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000066976
+ (id)globalStore;	// IMP=0x001000000006622f
- (void).cxx_destruct;	// IMP=0x0020000000066fa9
- (void)releaseKeepAliveTransaction:(id)arg1;	// IMP=0x0010000000066d8e
- (void)takeKeepAliveTransaction:(id)arg1;	// IMP=0x0010000000066b61
- (void)holdKeepAliveTransaction:(id)arg1 whilePerformingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000066ad3
@property(readonly) unsigned long long transactionCount;
@property(readonly, copy) NSCountedSet *activeTransactions;
- (void)dealloc;	// IMP=0x0010000000066767
- (id)initWithHoldTime:(double)arg1;	// IMP=0x00100000000662b6
- (id)init;	// IMP=0x001000000006629c

@end

