//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSMutableSet, NSString;

@interface CLCapabilityMonitor : CLIntersiloService
{
    struct unique_ptr<CLDarwinNotifier_Type::Client, std::default_delete<CLDarwinNotifier_Type::Client>> _darwinClient;	// 8 = 0x8
    struct unique_ptr<CLTelephonyService_Type::Client, std::default_delete<CLTelephonyService_Type::Client>> _telephonyClient;	// 16 = 0x10
    _Bool _supervised;	// 24 = 0x18
    _Bool _iCloudManagedAppleID;	// 25 = 0x19
    _Bool _iTunesManagedAppleID;	// 26 = 0x1a
    _Bool _installedEducationProfile;	// 27 = 0x1b
    _Bool _stewieSupported;	// 28 = 0x1c
    NSMutableSet *_capabilityChangeClients;	// 32 = 0x20
}

+ (id)getSilo;	// IMP=0x0020000000977506
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000009774ed
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000977490
- (id).cxx_construct;	// IMP=0x00200000009790dd
- (void).cxx_destruct;	// IMP=0x001000000097908b
@property(retain, nonatomic) NSMutableSet *capabilityChangeClients; // @synthesize capabilityChangeClients=_capabilityChangeClients;
@property(nonatomic) _Bool stewieSupported; // @synthesize stewieSupported=_stewieSupported;
@property(nonatomic) _Bool installedEducationProfile; // @synthesize installedEducationProfile=_installedEducationProfile;
@property(nonatomic) _Bool iTunesManagedAppleID; // @synthesize iTunesManagedAppleID=_iTunesManagedAppleID;
@property(nonatomic) _Bool iCloudManagedAppleID; // @synthesize iCloudManagedAppleID=_iCloudManagedAppleID;
@property(nonatomic) _Bool supervised; // @synthesize supervised=_supervised;
- (_Bool)syncgetForceCacheUpdate;	// IMP=0x0010000000979004
- (void)stopMonitoringCapabilityChangeForClient:(byref id)arg1;	// IMP=0x0010000000978fad
- (void)startMonitoringCapabilityChangeForClient:(byref id)arg1;	// IMP=0x0010000000978f56
- (void)onCapabilityChange;	// IMP=0x0010000000978ee5
- (void)updateLocationDictionaryCachedCapabilities;	// IMP=0x0010000000978c9f
- (_Bool)hasCapability:(id)arg1;	// IMP=0x0010000000978b04
- (void)onTelephonyNotification:(struct Notification)arg1 data:(struct NotificationData)arg2;	// IMP=0x00100000009789f5
- (void)onDarwinNotification:(int)arg1 data:(CDStruct_2920cfb7)arg2;	// IMP=0x001000000097864f
- (void)updateITunesManagedAppleID;	// IMP=0x00100000009783f5
- (void)updateInstalledEducationProfile;	// IMP=0x0010000000977fe2
- (void)updateICloudManagedAppleID;	// IMP=0x0010000000977b45
- (void)updateSupervised;	// IMP=0x00100000009778cc
- (void)endService;	// IMP=0x00100000009777fc
- (void)beginService;	// IMP=0x001000000097759f
- (id)init;	// IMP=0x0010000000977562

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
