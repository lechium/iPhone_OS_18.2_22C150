//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PSDSchedulerPowerLogger : NSObject
{
}

- (id)stringForPowerLogEvent:(unsigned long long)arg1;	// IMP=0x002000000001a9e8
- (void)didFinishSession;	// IMP=0x001000000001a9e2
- (void)didStartSyncSessionWithActivityCount:(unsigned long long)arg1 isResuming:(_Bool)arg2;	// IMP=0x001000000001a9dc
- (void)didFinishActivity:(id)arg1;	// IMP=0x001000000001a9d6
- (void)didStartActivity:(id)arg1;	// IMP=0x001000000001a9d0
- (void)scheduler:(id)arg1 didUpdateSyncSessionWithUpdate:(id)arg2;	// IMP=0x001000000001a8c8
- (void)scheduler:(id)arg1 willStartSyncSession:(id)arg2;	// IMP=0x001000000001a726

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
