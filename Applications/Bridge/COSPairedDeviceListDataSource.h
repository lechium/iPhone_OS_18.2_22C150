//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifierDataSource.h>

@class COSMigrationManager, NRDevice, NSArray, NSString, PSSpecifier;

@interface COSPairedDeviceListDataSource : PSSpecifierDataSource
{
    _Bool _tinkerOnly;	// 8 = 0x8
    NRDevice *_loadingDevice;	// 16 = 0x10
    PSSpecifier *_pairedDevicesGroupSpecifier;	// 24 = 0x18
    NSArray *_pairedDeviceSpecifiers;	// 32 = 0x20
    PSSpecifier *_tinkerDevicesGroupSpecifier;	// 40 = 0x28
    NSArray *_tinkerDeviceSpecifiers;	// 48 = 0x30
    COSMigrationManager *_migrationManager;	// 56 = 0x38
    PSSpecifier *_pairNew;	// 64 = 0x40
    PSSpecifier *_finishPairing;	// 72 = 0x48
    CDUnknownBlockType _displaySoftwareUpdate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000000efd22
@property(copy, nonatomic) CDUnknownBlockType displaySoftwareUpdate; // @synthesize displaySoftwareUpdate=_displaySoftwareUpdate;
@property(retain, nonatomic) PSSpecifier *finishPairing; // @synthesize finishPairing=_finishPairing;
@property(retain, nonatomic) PSSpecifier *pairNew; // @synthesize pairNew=_pairNew;
@property(retain, nonatomic) COSMigrationManager *migrationManager; // @synthesize migrationManager=_migrationManager;
@property(retain, nonatomic) NSArray *tinkerDeviceSpecifiers; // @synthesize tinkerDeviceSpecifiers=_tinkerDeviceSpecifiers;
@property(retain, nonatomic) PSSpecifier *tinkerDevicesGroupSpecifier; // @synthesize tinkerDevicesGroupSpecifier=_tinkerDevicesGroupSpecifier;
@property(retain, nonatomic) NSArray *pairedDeviceSpecifiers; // @synthesize pairedDeviceSpecifiers=_pairedDeviceSpecifiers;
@property(retain, nonatomic) PSSpecifier *pairedDevicesGroupSpecifier; // @synthesize pairedDevicesGroupSpecifier=_pairedDevicesGroupSpecifier;
@property(retain, nonatomic) NRDevice *loadingDevice; // @synthesize loadingDevice=_loadingDevice;
@property(nonatomic) _Bool tinkerOnly; // @synthesize tinkerOnly=_tinkerOnly;
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;	// IMP=0x00100000000efa40
- (void)startMigration;	// IMP=0x00100000000efa07
- (void)presentInternalFlow;	// IMP=0x00100000000ef9c3
- (void)presentNewPairingFlowIfPossible;	// IMP=0x00100000000ef969
- (void)deviceBecameActive;	// IMP=0x00100000000ef8d0
- (void)_updateSelectedWatchInGroupSpecifier:(id)arg1 deviceSpecifiers:(id)arg2;	// IMP=0x00100000000ef448
- (void)updateSelectedWatch;	// IMP=0x00100000000ef321
- (_Bool)_deviceRequiresUpdate:(id)arg1;	// IMP=0x00100000000ef140
- (void)loadSpecifiers;	// IMP=0x00100000000ed867
- (id)newDeviceSpecifierForNRDevice:(id)arg1 enableCell:(_Bool)arg2 deviceState:(id)arg3;	// IMP=0x00100000000ed5cb
- (id)_fakeList;	// IMP=0x00100000000ed1f7
- (id)_fakeWatchName:(unsigned long long)arg1;	// IMP=0x00100000000ed165
- (void)_reloadForDeviceStateChange:(id)arg1;	// IMP=0x00100000000ed153
- (void)magicSwitchStateChanged;	// IMP=0x00100000000ed141
- (void)dealloc;	// IMP=0x00100000000ed0b0
- (id)init;	// IMP=0x00100000000ecec1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

