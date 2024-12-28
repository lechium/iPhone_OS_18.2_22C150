//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DMCEnrollmentFlowController, NSData, NSString;

@interface MCPairedWatchManager : NSObject
{
    DMCEnrollmentFlowController *_enrollmentController;	// 8 = 0x8
    NSData *_pairingToken;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001d1b1
@property(copy, nonatomic) NSData *pairingToken; // @synthesize pairingToken=_pairingToken;
@property(retain, nonatomic) DMCEnrollmentFlowController *enrollmentController; // @synthesize enrollmentController=_enrollmentController;
- (id)_errorMissingMDMPayload;	// IMP=0x001000000001d0fc
- (id)_errorBadProfile;	// IMP=0x001000000001d07b
- (id)_errorInvalidServiceURL;	// IMP=0x001000000001cffa
- (id)_errorMissingServiceURL;	// IMP=0x001000000001cf79
- (id)_errorEnrollmentMalformed;	// IMP=0x001000000001cef8
- (id)_errorPhoneUnsupervised;	// IMP=0x001000000001ce77
- (id)_errorEnrollmentCannotBeStaged;	// IMP=0x001000000001cdf6
- (_Bool)_updateSupervision:(_Bool)arg1 cloudConfigReader:(id)arg2 cloudConfigWriter:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000001cc13
- (id)_serviceURLFromEnrollmentDictionary:(id)arg1 outError:(id *)arg2;	// IMP=0x001000000001ca45
- (id)_derCertificatesFromPersistentRefArray:(id)arg1;	// IMP=0x001000000001c7a9
- (void)installEnrollmentProfile:(id)arg1 devicePasscode:(id)arg2 personaID:(id)arg3 rmAccountIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000001c5cb
- (id)_organizationNameFromProfile:(id)arg1 payload:(id)arg2;	// IMP=0x001000000001c463
- (id)detailsFromMDMProfile:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001c160
- (id)getMachineInfoForEnrollmentType:(unsigned long long)arg1 enrollmentMethod:(unsigned long long)arg2;	// IMP=0x001000000001bfd7
- (void)updateMDMEnrollmentInfoForPairingWatch:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001be18
- (void)applyPairingWatchMDMEnrollmentData:(id)arg1 source:(id)arg2 usingProfileInstaller:(id)arg3 cloudConfigReader:(id)arg4 cloudConfigWriter:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000001b6a5
- (void)fetchStagedMDMEnrollmentDeclarationKeysForPairingWatchWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001b41f
- (void)fetchStagedMDMEnrollmentDataForPairingWatchWithPairingToken:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b174
- (void)fetchStagedMDMEnrollmentDataForPairingWatchWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001b0ad
- (void)unstageMDMEnrollmentInfoForPairingWatchWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001aee5
- (void)stageMDMEnrollmentInfoForPairingWatchWithProfileData:(id)arg1 orServiceURL:(id)arg2 anchorCertificates:(id)arg3 supervised:(_Bool)arg4 declarationKeys:(id)arg5 declarationConfiguration:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x001000000001aab5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
