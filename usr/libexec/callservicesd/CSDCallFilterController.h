//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface CSDCallFilterController : NSObject
{
    struct os_unfair_lock_s _accessorLock;	// 8 = 0x8
    NSMutableArray *_filters;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000002159de
@property(readonly, nonatomic) NSMutableArray *filters; // @synthesize filters=_filters;
@property(readonly, nonatomic) struct os_unfair_lock_s accessorLock; // @synthesize accessorLock=_accessorLock;
- (_Bool)willRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00100000002158a4
- (_Bool)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3;	// IMP=0x001000000021576d
- (_Bool)shouldFilterIncomingCall:(id)arg1 from:(id)arg2;	// IMP=0x00100000002152ab
- (_Bool)isUnknownCaller:(id)arg1;	// IMP=0x00100000002151a9
- (_Bool)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3;	// IMP=0x001000000021504c
- (long long)filterStatusForAddresses:(id)arg1 withBundleIdentifier:(id)arg2;	// IMP=0x0010000000214e58
- (_Bool)containsRestrictedHandle:(id)arg1;	// IMP=0x0010000000214d56
- (_Bool)containsRecentsRestrictedHandle:(id)arg1;	// IMP=0x0010000000214c54
- (_Bool)containsOutgoingRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3;	// IMP=0x0010000000214b1d
- (void)removeCallFilter:(id)arg1;	// IMP=0x0010000000214a91
- (void)addCallFilter:(id)arg1;	// IMP=0x0010000000214a05
- (id)init;	// IMP=0x00100000002149a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
