//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifierDataSource.h>

@class NRDevice, NSArray, NSNumber, NSObject, NSSManager, NSString;
@protocol OS_dispatch_queue;

@interface COSAboutDataSource : PSSpecifierDataSource
{
    _Bool _hasStartedFetchingInfo;	// 8 = 0x8
    _Bool _hasFetchedAboutInfo;	// 9 = 0x9
    _Bool _hasFetchedUsageData;	// 10 = 0xa
    _Bool _errorOccurredFetchingAboutInfo;	// 11 = 0xb
    _Bool _errorOccurredFetchingUsageData;	// 12 = 0xc
    _Bool _displayNetworkProgressIndicator;	// 13 = 0xd
    _Bool _showRegulatoryModelNumber;	// 14 = 0xe
    _Bool _showMarketingBehaviorDescription;	// 15 = 0xf
    _Bool _deviceHasCellularCapability;	// 16 = 0x10
    _Bool _hasFetchedRemoteBundleInfo;	// 17 = 0x11
    _Bool _errorOccurredFetchingRemoteBundleInfo;	// 18 = 0x12
    _Bool _hasReceivedCellularPlanUpdate;	// 19 = 0x13
    NSSManager *_nssManager;	// 24 = 0x18
    NRDevice *_device;	// 32 = 0x20
    NSNumber *_numberOfApps;	// 40 = 0x28
    NSNumber *_numberOfSongs;	// 48 = 0x30
    NSNumber *_numberOfPhotos;	// 56 = 0x38
    unsigned long long _storageAvailable;	// 64 = 0x40
    unsigned long long _storageCapacity;	// 72 = 0x48
    NSString *_carrierName;	// 80 = 0x50
    NSString *_carrierVersion;	// 88 = 0x58
    NSArray *_simICCIDs;	// 96 = 0x60
    unsigned long long _iccidDisplayIndex;	// 104 = 0x68
    struct __CTServerConnection *_ctConnection;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_ctQueue;	// 120 = 0x78
}

+ (_Bool)useConnectedDevice;	// IMP=0x0020000000051779
- (void).cxx_destruct;	// IMP=0x0020000000054ccf
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ctQueue; // @synthesize ctQueue=_ctQueue;
@property(nonatomic) struct __CTServerConnection *ctConnection; // @synthesize ctConnection=_ctConnection;
@property(nonatomic) _Bool hasReceivedCellularPlanUpdate; // @synthesize hasReceivedCellularPlanUpdate=_hasReceivedCellularPlanUpdate;
@property(nonatomic) _Bool errorOccurredFetchingRemoteBundleInfo; // @synthesize errorOccurredFetchingRemoteBundleInfo=_errorOccurredFetchingRemoteBundleInfo;
@property(nonatomic) _Bool hasFetchedRemoteBundleInfo; // @synthesize hasFetchedRemoteBundleInfo=_hasFetchedRemoteBundleInfo;
@property(nonatomic) unsigned long long iccidDisplayIndex; // @synthesize iccidDisplayIndex=_iccidDisplayIndex;
@property(retain, nonatomic) NSArray *simICCIDs; // @synthesize simICCIDs=_simICCIDs;
@property(retain, nonatomic) NSString *carrierVersion; // @synthesize carrierVersion=_carrierVersion;
@property(retain, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property(nonatomic) _Bool deviceHasCellularCapability; // @synthesize deviceHasCellularCapability=_deviceHasCellularCapability;
@property(nonatomic) _Bool showMarketingBehaviorDescription; // @synthesize showMarketingBehaviorDescription=_showMarketingBehaviorDescription;
@property(nonatomic) _Bool showRegulatoryModelNumber; // @synthesize showRegulatoryModelNumber=_showRegulatoryModelNumber;
@property(nonatomic) unsigned long long storageCapacity; // @synthesize storageCapacity=_storageCapacity;
@property(nonatomic) unsigned long long storageAvailable; // @synthesize storageAvailable=_storageAvailable;
@property(retain, nonatomic) NSNumber *numberOfPhotos; // @synthesize numberOfPhotos=_numberOfPhotos;
@property(retain, nonatomic) NSNumber *numberOfSongs; // @synthesize numberOfSongs=_numberOfSongs;
@property(retain, nonatomic) NSNumber *numberOfApps; // @synthesize numberOfApps=_numberOfApps;
@property(nonatomic) _Bool displayNetworkProgressIndicator; // @synthesize displayNetworkProgressIndicator=_displayNetworkProgressIndicator;
@property(nonatomic) _Bool errorOccurredFetchingUsageData; // @synthesize errorOccurredFetchingUsageData=_errorOccurredFetchingUsageData;
@property(nonatomic) _Bool errorOccurredFetchingAboutInfo; // @synthesize errorOccurredFetchingAboutInfo=_errorOccurredFetchingAboutInfo;
@property(nonatomic) _Bool hasFetchedUsageData; // @synthesize hasFetchedUsageData=_hasFetchedUsageData;
@property(nonatomic) _Bool hasFetchedAboutInfo; // @synthesize hasFetchedAboutInfo=_hasFetchedAboutInfo;
@property(nonatomic) _Bool hasStartedFetchingInfo; // @synthesize hasStartedFetchingInfo=_hasStartedFetchingInfo;
@property(retain, nonatomic) NRDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) NSSManager *nssManager; // @synthesize nssManager=_nssManager;
- (void)showUserManual:(id)arg1;	// IMP=0x001000000005484f
- (void)tappedAppleLegalLink;	// IMP=0x001000000005480c
- (void)updateICCIDSpecifier:(id)arg1;	// IMP=0x0010000000054702
- (id)getICCID:(id)arg1;	// IMP=0x001000000005466a
- (id)getDeviceDetail:(id)arg1;	// IMP=0x001000000005449a
- (void)updateDeviceDetailSpecifier:(id)arg1;	// IMP=0x00100000000543e4
- (id)getLocalizedArtworkDeviceDescription:(id)arg1;	// IMP=0x00100000000542ee
- (id)getIMEI:(id)arg1;	// IMP=0x001000000005420e
- (id)getCarrierInfo:(id)arg1;	// IMP=0x00100000000541a5
- (id)getBTAddress:(id)arg1;	// IMP=0x00100000000540bd
- (id)getWiFiAddress:(id)arg1;	// IMP=0x0010000000053fd5
- (id)getSerialNumber:(id)arg1;	// IMP=0x0010000000053f0d
- (void)updateModelSpecifier:(id)arg1;	// IMP=0x0010000000053e57
- (id)getDeviceModel:(id)arg1;	// IMP=0x0010000000053cad
- (id)getSystemVersion:(id)arg1;	// IMP=0x0010000000053bd4
- (void)setDeviceName:(id)arg1 specifier:(id)arg2;	// IMP=0x0010000000053a2f
- (id)getDeviceName:(id)arg1;	// IMP=0x0010000000053919
- (id)getStorageCapacity:(id)arg1;	// IMP=0x00100000000538bf
- (id)getStorageAvailable:(id)arg1;	// IMP=0x0010000000053865
- (id)getNumberOfApps:(id)arg1;	// IMP=0x00100000000537fc
- (id)getNumberOfPhotos:(id)arg1;	// IMP=0x0010000000053793
- (id)getNumberOfSongs:(id)arg1;	// IMP=0x001000000005372a
- (id)guardedUint64StringValue:(unsigned long long)arg1;	// IMP=0x0010000000053687
- (id)dash;	// IMP=0x0010000000053660
- (void)handleRetrievedICCIDs:(id)arg1;	// IMP=0x00100000000535f3
- (void)handleRemoteBundleInfo:(id)arg1 success:(_Bool)arg2;	// IMP=0x0010000000053409
- (void)handleUsageData:(id)arg1 error:(id)arg2;	// IMP=0x00100000000531fd
- (void)handleAboutInfo:(id)arg1 error:(id)arg2;	// IMP=0x0010000000052f60
- (void)hideNetworkActivityIndicatorOnceRemoteQueriesHaveCompleted;	// IMP=0x0010000000052ef2
- (void)displayNetworkActivityIndicator:(_Bool)arg1;	// IMP=0x0010000000052e5a
- (void)queryDevice;	// IMP=0x00100000000527cf
- (void)loadSpecifiers;	// IMP=0x00100000000519d5
- (id)specifiersForSpecifier:(id)arg1 observer:(id)arg2;	// IMP=0x001000000005189e
- (void)checkDeviceHasCellularCapability;	// IMP=0x0010000000051874
- (void)dealloc;	// IMP=0x0010000000051813
- (id)init;	// IMP=0x0010000000051789
- (_Bool)shouldQueryWatchForDetails;	// IMP=0x0010000000051781

@end
