//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface CPLCloudKitTaskGroupThrottler : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_throttlers;	// 16 = 0x10
    double _minimumThrottlingInterval;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000043ed1
@property(nonatomic) double minimumThrottlingInterval; // @synthesize minimumThrottlingInterval=_minimumThrottlingInterval;
- (id)statusWithIndent:(id)arg1;	// IMP=0x0010000000043a5a
- (void)operationWithGroupName:(id)arg1 didFinishNow:(id)arg2 withError:(id)arg3;	// IMP=0x00100000000438ab
- (void)operation:(id)arg1 forTask:(id)arg2 didFinishWithError:(id)arg3;	// IMP=0x00100000000437e8
- (_Bool)shouldRunOperationsNow:(id)arg1 forGroupName:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000434e9
- (_Bool)shouldRunOperationsForTask:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000043432
- (id)init;	// IMP=0x00100000000433d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
