//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAbsintheSigner, AKAppleIDAuthenticationContext, AKAttestationSigner, AKClient, AKNativeAnisetteService, NSString;

@interface AKAnisetteProvisioningService : NSObject
{
    AKClient *_client;	// 8 = 0x8
    AKAppleIDAuthenticationContext *_context;	// 16 = 0x10
    AKNativeAnisetteService *_nativeAnisetteService;	// 24 = 0x18
    AKAbsintheSigner *_absintheSigner;	// 32 = 0x20
    AKAttestationSigner *_attestationSigner;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000073f1f
@property(retain, nonatomic) AKAttestationSigner *attestationSigner; // @synthesize attestationSigner=_attestationSigner;
@property(retain, nonatomic) AKAbsintheSigner *absintheSigner; // @synthesize absintheSigner=_absintheSigner;
- (id)_clientAnisetteService;	// IMP=0x0010000000073eae
- (id)_pairedDeviceAnisetteService;	// IMP=0x0010000000073e95
- (id)_nativeAnisetteService;	// IMP=0x0010000000073e46
- (id)_helperServiceForDevice:(id)arg1;	// IMP=0x0010000000073d9d
- (void)eraseAnisetteForDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000073bf1
- (void)syncAnisetteWithSIMData:(id)arg1 device:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000073a30
- (void)provisionAnisetteForDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000073884
- (void)legacyAnisetteDataForDSID:(id)arg1 device:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000736c3
- (void)_fetchAnisetteDataAndProvisionIfNecessary:(_Bool)arg1 device:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000735ac
- (oneway void)postAttestationAnalyticsWithData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000072f1f
- (oneway void)resetDeviceIdentityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000072e15
- (void)fetchAnisetteDataAndProvisionIfNecessary:(_Bool)arg1 device:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000072d15
- (oneway void)setTimeAdjustmentWithServerTime:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000072be6
- (void)_attestationDataForRequestData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000072b5b
- (void)attestationDataForRequestData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000072a6b
- (void)attestationDataForDevice:(id)arg1 withRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000727e9
- (id)anisetteDataForDevice:(id)arg1 provisionIfNecessary:(_Bool)arg2;	// IMP=0x00100000000725c0
- (id)initWithClient:(id)arg1 authenticationContext:(id)arg2;	// IMP=0x0010000000072529
- (id)initWithClient:(id)arg1 context:(id)arg2;	// IMP=0x00100000000724ca
- (id)initWithClient:(id)arg1;	// IMP=0x0010000000072402
- (void)signaturesForData:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000740f5
- (void)absintheSignatureForData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000073f68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

