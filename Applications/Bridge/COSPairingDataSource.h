//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class COSPairingController, FAFamilyMember, MISSING_TYPE;

@interface COSPairingDataSource
{
    MISSING_TYPE *_allowsMarkAsMissing;	// 8 = 0x8
    _Bool _tinkerDevice;	// 9 = 0x9
    _Bool _migrationDevice;	// 10 = 0xa
    _Bool _enableUnpairButtons;	// 11 = 0xb
    FAFamilyMember *_deviceUser;	// 16 = 0x10
    COSPairingController *_pairingController;	// 24 = 0x18
}

+ (_Bool)useConnectedDevice;	// IMP=0x0040000000012b41
- (void).cxx_destruct;	// IMP=0x0020000000014280
@property(nonatomic) _Bool enableUnpairButtons; // @synthesize enableUnpairButtons=_enableUnpairButtons;
@property(nonatomic) _Bool migrationDevice; // @synthesize migrationDevice=_migrationDevice;
@property(nonatomic) _Bool tinkerDevice; // @synthesize tinkerDevice=_tinkerDevice;
@property(nonatomic) _Bool allowsMarkAsMissing; // @synthesize allowsMarkAsMissing=_allowsMarkAsMissing;
@property(retain, nonatomic) FAFamilyMember *deviceUser; // @synthesize deviceUser=_deviceUser;
- (void)loadSpecifiers;	// IMP=0x0010000000013128
- (id)specifiersForSpecifier:(id)arg1 observer:(id)arg2;	// IMP=0x0010000000013052
- (void)confirmUnpairingForSpecifier:(id)arg1;	// IMP=0x0010000000012ff4
- (id)deviceUserAppleID:(id)arg1;	// IMP=0x0010000000012fa4
- (void)confirmUnpairingMissingForSpecifier:(id)arg1;	// IMP=0x0010000000012f46
- (void)tinkeriForgot;	// IMP=0x0010000000012f11
- (void)jumpToFindMyApp;	// IMP=0x0010000000012edc
- (_Bool)shouldQueryWatchForDetails;	// IMP=0x0010000000012b49

@end

