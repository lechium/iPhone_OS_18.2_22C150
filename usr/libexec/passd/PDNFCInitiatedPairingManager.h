//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PDAssertionManager, PDCarKeyRequirementsChecker, PDFieldDetectorManager, PDRemoteInterfacePresenter, PKDAManager;

@interface PDNFCInitiatedPairingManager : NSObject
{
    PDFieldDetectorManager *_fieldDetectorManager;	// 8 = 0x8
    PDCarKeyRequirementsChecker *;	// 16 = 0x10
    PKDAManager *_daManager;	// 24 = 0x18
    PDRemoteInterfacePresenter *_remoteInterfacePresenter;	// 32 = 0x20
    PDAssertionManager *_assertionManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000432c7e
- (void)_probeTerminalForPairingStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000432bd3
- (void)_updateFieldDetectionState;	// IMP=0x0010000000432ae8
- (void)fieldDetectorManager:(id)arg1 didEnterFieldWithProperties:(id)arg2;	// IMP=0x0010000000432a86
- (void)_requestNativePairingWithSupportedTerminal:(id)arg1;	// IMP=0x00100000004328ad
- (_Bool)_canAttemptNativePairing;	// IMP=0x00100000004327ab
- (void)_nativelyPairToTerminalWithFieldPropertiesIfPossible:(id)arg1;	// IMP=0x0010000000432453
- (void)initiateNativePairingIfPossibleFromTCIs:(id)arg1 brandCode:(long long)arg2;	// IMP=0x0010000000432332
- (void)dealloc;	// IMP=0x00100000004322f5
- (id)initWithFieldDetectorManager:(id)arg1 daManager:(id)arg2 carKeyRequirementsChecker:(id)arg3 remoteInterfacePresenter:(id)arg4 assertionManager:(id)arg5;	// IMP=0x0010000000432149

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

