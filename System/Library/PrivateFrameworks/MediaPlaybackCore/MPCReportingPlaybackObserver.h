//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface MPCReportingPlaybackObserver : NSObject
{
    NSOperationQueue *_recordEventOperationQueue;	// 8 = 0x8
    _Bool _offline;	// 16 = 0x10
}

+ (id)sharedReportingPlaybackObserver;	// IMP=0x00100000002941c1
- (void).cxx_destruct;	// IMP=0x0000000000293ac7
- (id)_newReportingPlaybackActivityEventForPlayActivityEvent:(id)arg1 eventSource:(id)arg2;	// IMP=0x0000000000293a0c
- (void)recordPlayActivityEvents:(id)arg1 forEventSource:(id)arg2;	// IMP=0x0000000000292757
- (id)newPlayActivityEvent;	// IMP=0x000000000029258c
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;	// IMP=0x0000000000292503
- (id)_init;	// IMP=0x0000000000292411

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

