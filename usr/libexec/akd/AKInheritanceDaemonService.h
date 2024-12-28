//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AAAFoundation/AAFService.h>

@class NSString;

@interface AKInheritanceDaemonService : AAFService
{
}

- (void)_executeRequestWithContext:(id)arg1 urlBagKey:(id)arg2 shouldSignWithIdentityToken:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00200000000abe46
- (void)_setupBeneficiaryAliasWithInheritanceContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000abb8d
- (void)updateBeneficiaryWithInheritanceContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000aba35
- (void)removeBeneficiaryWithInheritanceContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ab8dd
- (void)setupBeneficiaryWithInheritanceContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ab6c6
- (void)fetchManifestOptionsWithInheritanceContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ab588
- (void)configureExportedInterface:(id)arg1;	// IMP=0x00100000000ab220
- (id)exportedProtocol;	// IMP=0x00100000000ab20f
- (id)exportedObject;	// IMP=0x00100000000ab206
- (id)serviceName;	// IMP=0x00100000000ab1f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
