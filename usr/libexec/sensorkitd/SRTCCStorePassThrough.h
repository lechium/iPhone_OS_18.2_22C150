//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SRTCCStorePassThrough : NSObject
{
}

+ (void)initialize;	// IMP=0x0020000000032850
- (_Bool)checkAccessForService:(id)arg1 auditToken:(CDStruct_6ad76789)arg2;	// IMP=0x0020000000032a70
- (void)requestAccessForService:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000032a50
- (long long)preflightAuthorizationStatusForService:(id)arg1;	// IMP=0x0010000000032a20
- (_Bool)setValue:(_Bool)arg1 forService:(id)arg2 bundleId:(id)arg3;	// IMP=0x0010000000032a00
- (_Bool)resetService:(id)arg1;	// IMP=0x00100000000329e0
- (_Bool)resetService:(id)arg1 forBundleId:(id)arg2;	// IMP=0x00100000000329c0
- (_Bool)setOverride:(_Bool)arg1 forService:(id)arg2;	// IMP=0x00100000000329a0
- (id)informationForBundleId:(id)arg1;	// IMP=0x0010000000032980
- (_Bool)isOverriddenForService:(id)arg1;	// IMP=0x00100000000328e0
- (id)bundleIdentifiersDisabledForService:(id)arg1;	// IMP=0x00100000000328c0
- (id)bundleIdentifiersForService:(id)arg1;	// IMP=0x00100000000328a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

