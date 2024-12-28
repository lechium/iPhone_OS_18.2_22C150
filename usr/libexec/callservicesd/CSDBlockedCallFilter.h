//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface CSDBlockedCallFilter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000010a032
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)willRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x001000000010a020
- (_Bool)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3;	// IMP=0x001000000010a018
- (_Bool)shouldFilterIncomingCall:(id)arg1 from:(id)arg2;	// IMP=0x001000000010a010
- (_Bool)isUnknownCaller:(id)arg1;	// IMP=0x001000000010a008
- (_Bool)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3;	// IMP=0x001000000010a000
- (long long)filterStatusForAddresses:(id)arg1 withBundleIdentifier:(id)arg2;	// IMP=0x0010000000109ff8
- (_Bool)containsRestrictedHandle:(id)arg1;	// IMP=0x0010000000109ff0
- (_Bool)containsRecentsRestrictedHandle:(id)arg1;	// IMP=0x0010000000109fe8
- (_Bool)containsOutgoingRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3;	// IMP=0x0010000000109fe0
- (id)initWithQueue:(id)arg1;	// IMP=0x0010000000109f75

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
