//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CBPeripheralManager, NSString;

@interface AKProximityPiggybackRequestingEngine
{
    CBPeripheralManager *_peripheralManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000007da8f
- (void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3;	// IMP=0x001000000007d939
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;	// IMP=0x001000000007d80d
- (void)peripheralManagerDidUpdateState:(id)arg1;	// IMP=0x001000000007d7a2
- (_Bool)isActivated;	// IMP=0x001000000007d78d
- (void)invalidate;	// IMP=0x001000000007d729
- (void)activate;	// IMP=0x001000000007d586
- (void)prepareWithController:(id)arg1 queue:(id)arg2;	// IMP=0x001000000007d4e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
