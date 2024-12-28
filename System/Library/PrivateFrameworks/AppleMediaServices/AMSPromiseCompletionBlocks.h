//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AMSPromiseCompletionBlocks : NSObject
{
    struct os_unfair_lock_s _completionBlockLock;	// 8 = 0x8
    NSMutableArray *_completionBlocks;	// 16 = 0x10
    _Bool _shouldCallImmediately;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004a30cc
- (void)flushCompletionBlocksWithPromiseResult:(id)arg1;	// IMP=0x00000000004a2eba
- (void)callSuccessBlock:(CDUnknownBlockType)arg1 withPromiseResult:(id)arg2;	// IMP=0x00000000004a2e0d
- (void)callErrorBlock:(CDUnknownBlockType)arg1 withPromiseResult:(id)arg2;	// IMP=0x00000000004a2d5d
- (void)callCompletionBlock:(CDUnknownBlockType)arg1 withPromiseResult:(id)arg2;	// IMP=0x00000000004a2cb9
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000004a2bbc
- (void)addErrorBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000004a2abf
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000004a2a43
- (id)init;	// IMP=0x00000000004a29e6

@end
