//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSURL;

@interface COSPairingCompatibility : NSObject
{
    MISSING_TYPE *_blockTinkerPairing;	// 8 = 0x8
    _Bool _blockYorktownPairing;	// 9 = 0x9
    _Bool _yorktownForceSU;	// 10 = 0xa
    _Bool _failSafeUpdateRequested;	// 11 = 0xb
    _Bool _updateInRevLockFlow;	// 12 = 0xc
    _Bool _runUpdateInSetup;	// 13 = 0xd
    _Bool _pairingShouldContinue;	// 14 = 0xe
    _Bool _requiresZeroDayUpdate;	// 15 = 0xf
    NSURL *_zeroDayUpdateLearnMoreLink;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000012abe7
@property(readonly, nonatomic) NSURL *zeroDayUpdateLearnMoreLink; // @synthesize zeroDayUpdateLearnMoreLink=_zeroDayUpdateLearnMoreLink;
@property(readonly, nonatomic) _Bool requiresZeroDayUpdate; // @synthesize requiresZeroDayUpdate=_requiresZeroDayUpdate;
@property(readonly, nonatomic) _Bool pairingShouldContinue; // @synthesize pairingShouldContinue=_pairingShouldContinue;
@property(readonly, nonatomic) _Bool runUpdateInSetup; // @synthesize runUpdateInSetup=_runUpdateInSetup;
@property(readonly, nonatomic) _Bool updateInRevLockFlow; // @synthesize updateInRevLockFlow=_updateInRevLockFlow;
@property(readonly, nonatomic) _Bool failSafeUpdateRequested; // @synthesize failSafeUpdateRequested=_failSafeUpdateRequested;
@property(readonly, nonatomic) _Bool yorktownForceSU; // @synthesize yorktownForceSU=_yorktownForceSU;
@property(readonly, nonatomic) _Bool blockYorktownPairing; // @synthesize blockYorktownPairing=_blockYorktownPairing;
@property(readonly, nonatomic) _Bool blockTinkerPairing; // @synthesize blockTinkerPairing=_blockTinkerPairing;
- (_Bool)_checkIfShouldUpdateInRevLockFlowForWatchPairingVersion:(unsigned long long)arg1 watchChipID:(id)arg2;	// IMP=0x001000000012ab28
- (_Bool)_productTypeIsYorktownEnabled:(id)arg1;	// IMP=0x001000000012a9ed
- (_Bool)_productTypeIsTinkerEnabled:(id)arg1;	// IMP=0x001000000012a80d
- (id)_findZeroDayPlist;	// IMP=0x001000000012a5e4
- (_Bool)_isVersion:(unsigned long long)arg1 withinStart:(id)arg2 andEnd:(id)arg3 isWatch:(_Bool)arg4;	// IMP=0x001000000012a4ee
- (void)_setupZeroDayForcedUpdateForProductType:(id)arg1 systemVersion:(unsigned long long)arg2 zeroDayCriteria:(id)arg3;	// IMP=0x0010000000129f48
- (void)_setUpdateStateForPairingCode:(unsigned long long)arg1 watchChipID:(id)arg2 watchRequestsFailSafe:(_Bool)arg3 isWatchAhead:(_Bool)arg4;	// IMP=0x0010000000129e8d
- (void)_setYorktownCompatibilityFlagsFromForProductType:(id)arg1 watchPairingVersion:(long long)arg2 yorktownPairing:(_Bool)arg3;	// IMP=0x0010000000129e4d
- (void)_setShouldBlockTinkerForProductType:(id)arg1 tinkerPairing:(_Bool)arg2;	// IMP=0x0010000000129e27
- (void)reset;	// IMP=0x0010000000129dc7
- (void)_setCompatiblityCriteriaWithProductType:(id)arg1 systemVersion:(unsigned long long)arg2 watchPairingVersion:(long long)arg3 watchChipIDNumber:(id)arg4 shouldForceSoftwareUpdateCheck:(_Bool)arg5 zeroDayCriteria:(id)arg6;	// IMP=0x00100000001299b7
- (void)setCompatiblityCriteriaWithMetadata:(id)arg1 scannedPairingVersion:(unsigned long long)arg2 zeroDayCriteria:(id)arg3;	// IMP=0x00100000001298b4
- (void)setCompatiblityCriteriaWithMetadata:(id)arg1 scannedPairingVersion:(unsigned long long)arg2;	// IMP=0x00100000001297f5
- (void)setCompatiblityCriteriaWithDevice:(id)arg1 zeroDayCriteria:(id)arg2;	// IMP=0x001000000012967a
- (void)setCompatiblityCriteriaWithDevice:(id)arg1;	// IMP=0x00100000001295ca

@end
