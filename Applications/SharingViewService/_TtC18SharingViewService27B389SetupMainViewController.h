//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, SPPairingSession;

@interface _TtC18SharingViewService27B389SetupMainViewController
{
    MISSING_TYPE *__doNotReference;	// 8 = 0x8
    MISSING_TYPE *inFlightOperations;	// 16 = 0x10
    MISSING_TYPE *appleIDInfo;	// 24 = 0x18
    MISSING_TYPE *timeout;	// 64 = 0x40
    MISSING_TYPE *multiThreshold;	// 72 = 0x48
    MISSING_TYPE *presentationConfig;	// 0 = 0x0
    MISSING_TYPE *om;	// 2147484672 = 0x80000400
    MISSING_TYPE *beaconManager;	// 0 = 0x0
    MISSING_TYPE *dismissed;	// 1953718111 = 0x74735f5f
    MISSING_TYPE *retain;	// 0 = 0x0
    MISSING_TYPE *vcNav;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *startVC;	// 0 = 0x0
    MISSING_TYPE *roleVC;	// 1220192 = 0x129e60
    MISSING_TYPE *namingVC;	// 3522 = 0xdc2
    MISSING_TYPE *linkingVC;	// 1220192 = 0x129e60
    MISSING_TYPE *loadingVC;	// 0 = 0x0
    MISSING_TYPE *spManager;	// 2147484680 = 0x80000408
    MISSING_TYPE *requestedPairingData;	// 6 = 0x6
    MISSING_TYPE *reenabledProxCard;	// 1935892319 = 0x73635f5f
    MISSING_TYPE *didTapStart;	// 103 = 0x67
    MISSING_TYPE *didAgreeToLinking;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *needsMulti;	// 0 = 0x0
    MISSING_TYPE *followupController;	// 1223728 = 0x12ac30
    MISSING_TYPE *central;	// 74384 = 0x12290
    MISSING_TYPE *periph;	// 1223728 = 0x12ac30
    MISSING_TYPE *connectionState;	// 0 = 0x0
    MISSING_TYPE *mapSnapshotter;	// 2 = 0x2
    MISSING_TYPE *selectedRoleIndex;	// 0 = 0x0
    MISSING_TYPE *doneVC;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *errorVC;	// 1852339301 = 0x6e687465
    MISSING_TYPE *nfcVC;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *appleIDVC;	// 0 = 0x0
    MISSING_TYPE *hsa2VC;	// 1298112 = 0x13cec0
    MISSING_TYPE *pairLockedVC;	// 51743 = 0xca1f
    MISSING_TYPE *sessionError;	// 1298112 = 0x13cec0
    MISSING_TYPE *session;	// 0 = 0x0
    MISSING_TYPE *assetBundle;	// 2 = 0x2
    MISSING_TYPE *location;	// 0 = 0x0
    MISSING_TYPE *shownError;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *remainingCharacteristicsToDiscover;	// 1887007839 = 0x7079745f
    MISSING_TYPE *discoveredChars;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *readValues;	// 0 = 0x0
    MISSING_TYPE *discoveredMainService;	// 1349856 = 0x1498e0
    MISSING_TYPE *startedCharacteristicDiscovery;	// 9982 = 0x26fe
    MISSING_TYPE *sentDisconnect;	// 1349856 = 0x1498e0
    MISSING_TYPE *writeManager;	// 0 = 0x0
    MISSING_TYPE *sentReadRequest;	// 0 = 0x0
    MISSING_TYPE *sentSecondReadRequest;	// 0 = 0x0
    MISSING_TYPE *storeS1;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *targetS1Length;	// 1701406303 = 0x6569665f
    MISSING_TYPE *fnameDisplay;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *vbVersionStr;	// 0 = 0x0
    MISSING_TYPE *handledS1S2PayloadRead;	// 1359840 = 0x14bfe0
    MISSING_TYPE *sessionVerified;	// 11116 = 0x2b6c
    MISSING_TYPE *nfcUUID;	// 1359840 = 0x14bfe0
    MISSING_TYPE *needsNFCUI;	// 0 = 0x0
    MISSING_TYPE *nfcConfig;	// 0 = 0x0
    MISSING_TYPE *endpoint;	// 0 = 0x0
    MISSING_TYPE *xpcAgent;	// 1868783455 = 0x6f635f5f
    MISSING_TYPE *locationShifter;	// 0 = 0x0
    MISSING_TYPE *customRoleName;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *customRoleEmoji;	// 0 = 0x0
    MISSING_TYPE *payloadValue;	// 0 = 0x0
    MISSING_TYPE *roleCategories;	// 1370960 = 0x14eb50
    MISSING_TYPE *pairState;	// 17720 = 0x4538
    MISSING_TYPE *findMyFinalizeState;	// 1370960 = 0x14eb50
    MISSING_TYPE *mapConfigurationState;	// 0 = 0x0
    MISSING_TYPE *mapViewController;	// 0 = 0x0
    MISSING_TYPE *fbOtions;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x002000000003ad00
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000003acb0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000003a650
@property(nonatomic, readonly) SPPairingSession *accessibilitySession;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000039c30
- (void)dismiss:(int)arg1;	// IMP=0x00100000000374b0
- (void)handleButtonActions:(id)arg1;	// IMP=0x0010000000037430
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000036dc0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000034e40
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000033ee0
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
- (void)b389NFCPromptUpdateConfiguration:(id)arg1;	// IMP=0x001000000003ba70
- (void)setResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000003b610
- (void)centralManager:(id)arg1 didLosePeripheral:(id)arg2 forType:(id)arg3;	// IMP=0x001000000004dab0
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x001000000004da90
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x001000000004da70
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;	// IMP=0x001000000004da00
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x001000000004d9b0
- (void)pairingAgent:(id)arg1 peerDidRequestPairing:(id)arg2 type:(long long)arg3 passkey:(id)arg4;	// IMP=0x001000000004dc20
- (void)pairingAgent:(id)arg1 peerDidCompletePairing:(id)arg2;	// IMP=0x001000000004dbb0
- (void)pairingAgent:(id)arg1 peerDidFailToCompletePairing:(id)arg2 error:(id)arg3;	// IMP=0x001000000004db30
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x001000000004e420
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x001000000004e3a0
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;	// IMP=0x001000000004e320
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;	// IMP=0x001000000004e2b0

@end
