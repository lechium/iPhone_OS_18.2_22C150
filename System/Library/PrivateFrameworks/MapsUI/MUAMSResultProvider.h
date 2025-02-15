//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MUAMSResultCache;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MUAMSResultProvider : NSObject
{
    MUAMSResultCache *_amsResultCache;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000167074
- (void)_finishWithResults:(id)arg1 error:(id)arg2 onCallbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000166f8c
- (void)fetchResultsForBundleIds:(id)arg1 options:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000166567
- (void)fetchResultsForAdamIds:(id)arg1 options:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000165aab
- (id)initWithCache:(id)arg1;	// IMP=0x0000000000165a19

@end

