//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/LSPropertyList.h>

@class NSSet, NSString;

@interface LSPropertyList (PFAdditionsInternal)
- (id)pf_roleManifest;	// IMP=0x00200000000038ca
@property(readonly, nonatomic) NSString *pf_defaultRole;
@property(readonly, nonatomic) NSSet *pf_supportedRoles;
- (_Bool)pf_wantsLocation;	// IMP=0x002000000000bd1d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
