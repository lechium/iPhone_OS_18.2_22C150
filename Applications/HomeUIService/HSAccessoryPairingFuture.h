//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HFSetupPairingContext, NAPromise, NSString;
@protocol HFSetupPairingController, HFSetupPairingObserver;

@interface HSAccessoryPairingFuture : NSObject
{
    id <HFSetupPairingObserver> _pairingObserver;	// 8 = 0x8
    NAPromise *_promise;	// 16 = 0x10
    id <HFSetupPairingController> _pairingController;	// 24 = 0x18
    HFSetupPairingContext *_pairingContext;	// 32 = 0x20
    unsigned long long _phase;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000068a88
@property(nonatomic) unsigned long long phase; // @synthesize phase=_phase;
@property(retain, nonatomic) HFSetupPairingContext *pairingContext; // @synthesize pairingContext=_pairingContext;
@property(retain, nonatomic) id <HFSetupPairingController> pairingController; // @synthesize pairingController=_pairingController;
@property(retain, nonatomic) NAPromise *promise; // @synthesize promise=_promise;
@property(nonatomic) __weak id <HFSetupPairingObserver> pairingObserver; // @synthesize pairingObserver=_pairingObserver;
- (void)updateSetupPayload:(id)arg1;	// IMP=0x0010000000068965
@property(readonly, nonatomic) NSString *pairingStatusDescription;
@property(readonly, nonatomic) NSString *pairingStatusTitle;
- (void)pairingController:(id)arg1 didTransitionToPhase:(unsigned long long)arg2 statusTitle:(id)arg3 statusDescription:(id)arg4;	// IMP=0x0010000000068562
- (id)cancelPairingWithError:(id)arg1;	// IMP=0x00100000000682c5
- (id)cancelPairing;	// IMP=0x00100000000681bb
- (id)startPairingWithHome:(id)arg1;	// IMP=0x0010000000067efb
- (id)initWithPairingContext:(id)arg1 discoveredAccessory:(id)arg2 accessoryAlreadyStaged:(_Bool)arg3;	// IMP=0x0010000000067b01
- (id)initWithPairingContext:(id)arg1 accessoryAlreadyStaged:(_Bool)arg2;	// IMP=0x0010000000067ae7
- (id)initWithPairingContext:(id)arg1 discoveredAccessory:(id)arg2;	// IMP=0x0010000000067ad2
- (void)dealloc;	// IMP=0x0010000000067a64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
