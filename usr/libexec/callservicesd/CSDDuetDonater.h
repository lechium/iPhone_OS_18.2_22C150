//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CSDDuetDonater : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *maxDuration;	// 16 = 0x10
    MISSING_TYPE *silenceUnknownCallersEnabledObserver;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00400000002c0991
- (id)init;	// IMP=0x00100000002c2998
- (void)reportingController:(id)arg1 statusChangedForCall:(id)arg2 totalCallCount:(unsigned long long)arg3;	// IMP=0x00100000002c124d
- (void)reportingController:(id)arg1 addedActivatedLink:(id)arg2;	// IMP=0x00100000002c0dc0
- (void)dealloc;	// IMP=0x00100000002c0974
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000002c08ec

@end
