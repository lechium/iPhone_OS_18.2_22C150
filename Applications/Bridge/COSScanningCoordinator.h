//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSTimer;
@protocol COSScanningCoordinatorDelegate;

@interface COSScanningCoordinator : NSObject
{
    _Bool _inProgress;	// 8 = 0x8
    _Bool _pairingStarted;	// 9 = 0x9
    _Bool _registeredForCompatibilityState;	// 10 = 0xa
    int _pairingStartedNotificationToken;	// 12 = 0xc
    id <COSScanningCoordinatorDelegate> _delegate;	// 16 = 0x10
    NSString *_deviceSetupName;	// 24 = 0x18
    NSString *_oobIdentifier;	// 32 = 0x20
    unsigned long long _pairingVersionFromCode;	// 40 = 0x28
    NSTimer *_discoveryTimeoutTimer;	// 48 = 0x30
    unsigned long long _retryMetadataReadCounter;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000f9637
@property(nonatomic) unsigned long long retryMetadataReadCounter; // @synthesize retryMetadataReadCounter=_retryMetadataReadCounter;
@property(retain, nonatomic) NSTimer *discoveryTimeoutTimer; // @synthesize discoveryTimeoutTimer=_discoveryTimeoutTimer;
@property(nonatomic) int pairingStartedNotificationToken; // @synthesize pairingStartedNotificationToken=_pairingStartedNotificationToken;
@property(nonatomic) _Bool registeredForCompatibilityState; // @synthesize registeredForCompatibilityState=_registeredForCompatibilityState;
@property(nonatomic) _Bool pairingStarted; // @synthesize pairingStarted=_pairingStarted;
@property(nonatomic) unsigned long long pairingVersionFromCode; // @synthesize pairingVersionFromCode=_pairingVersionFromCode;
@property(copy, nonatomic) NSString *oobIdentifier; // @synthesize oobIdentifier=_oobIdentifier;
@property(copy, nonatomic) NSString *deviceSetupName; // @synthesize deviceSetupName=_deviceSetupName;
@property(nonatomic) __weak id <COSScanningCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool inProgress; // @synthesize inProgress=_inProgress;
- (_Bool)checkIfShouldUpdateInRevLockFlowForWatchPairingVersion:(unsigned long long)arg1 watchChipID:(id)arg2;	// IMP=0x00100000000f94e6
- (int)registerNotifyTokenWithName:(id)arg1 withQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f9406
- (void)discoveryDidTimeout;	// IMP=0x00100000000f9389
- (void)enteredCompatibilityState:(id)arg1;	// IMP=0x00100000000f8d7f
- (void)nanoRegistryStatusChanged:(id)arg1;	// IMP=0x00100000000f89fd
- (void)pairingRequestAttempted:(id)arg1;	// IMP=0x00100000000f877a
- (void)didBeginToPair:(id)arg1;	// IMP=0x00100000000f85ee
- (void)stopObservingCompatibilityState;	// IMP=0x00100000000f8502
- (void)startObservingCompatibilityState;	// IMP=0x00100000000f840f
- (void)_nanoRegistryHPPairingComplete;	// IMP=0x00100000000f8372
- (void)_nanoRegistryManualPairingComplete;	// IMP=0x00100000000f82d5
- (void)nanoRegistryPairingComplete:(_Bool)arg1;	// IMP=0x00100000000f81d3
- (void)nanoRegistryPairingComplete;	// IMP=0x00100000000f81bf
- (_Bool)hasStartedPairing;	// IMP=0x00100000000f81b6
- (void)beginNanoRegistryPair;	// IMP=0x00100000000f7b09
- (void)receivedWatchPairingExtendedMetadata:(id)arg1 withIDContext:(id)arg2;	// IMP=0x00100000000f735a
- (void)continueWithFetchingExtendedMetadataFromNanoRegistryWithIDContext:(id)arg1;	// IMP=0x00100000000f6fd0
- (void)startPairingWithScannedCode:(id)arg1;	// IMP=0x00100000000f6251

@end
