//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMSystemTVProviderDeclaration.h>

@class NSString;

@interface CEMSystemTVProviderDeclaration (DMDAdditions)
- (id)dmf_statusForResult:(id)arg1 context:(id)arg2;	// IMP=0x00200000000097dd
- (id)dmf_removeRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000097c8
- (id)dmf_replaceRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000097b6
- (id)dmf_installRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000974f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
