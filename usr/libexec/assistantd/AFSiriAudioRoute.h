//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AFSiriAudioRoute : NSObject
{
    NSString *_productID;	// 8 = 0x8
    NSString *_btAddress;	// 16 = 0x10
    unsigned long long _availableAnnouncementRequestTypes;	// 24 = 0x18
    NSDictionary *_avscRouteDescription;	// 32 = 0x20
    long long _announcePlatformForRoute;	// 40 = 0x28
    NSString *_connectedBTProductID;	// 48 = 0x30
    long long _ringerSwitchState;	// 56 = 0x38
    _Bool _hearingAidsAnnounceEnabled;	// 64 = 0x40
    _Bool _builtInSpeakerAnnounceEnabled;	// 65 = 0x41
    _Bool _isRouteCurrentlyPicked;	// 66 = 0x42
    _Bool _isDoAPCapable;	// 67 = 0x43
    _Bool _isHeadsetInEar;	// 68 = 0x44
    _Bool _headsetSupportsIED;	// 69 = 0x45
    _Bool _headsetSupportsFauxIED;	// 70 = 0x46
    _Bool _inEarDetectEnabledSpecified;	// 71 = 0x47
    _Bool _inEarDetectEnabled;	// 72 = 0x48
    _Bool _headsetSupportsAnnounceCalls;	// 73 = 0x49
    _Bool _isTipiRoute;	// 74 = 0x4a
    _Bool _isOtherDeviceConnected;	// 75 = 0x4b
    _Bool _isInTriangleMode;	// 76 = 0x4c
    _Bool _shouldTakeRouteFromOtherConnectedDevice;	// 77 = 0x4d
    _Bool _shouldDeferToOtherConnectedDevice;	// 78 = 0x4e
    _Bool _isHearingAidsRoute;	// 79 = 0x4f
    _Bool _isBuiltInSpeakerRoute;	// 80 = 0x50
    _Bool _isGenuineAppleAccessory;	// 81 = 0x51
    NSString *_avAudioRouteName;	// 88 = 0x58
    NSString *_name;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000e7969
@property(nonatomic) long long announcePlatformForRoute; // @synthesize announcePlatformForRoute=_announcePlatformForRoute;
@property(retain, nonatomic) NSDictionary *avscRouteDescription; // @synthesize avscRouteDescription=_avscRouteDescription;
@property(nonatomic) unsigned long long availableAnnouncementRequestTypes; // @synthesize availableAnnouncementRequestTypes=_availableAnnouncementRequestTypes;
@property(retain, nonatomic) NSString *connectedBTProductID; // @synthesize connectedBTProductID=_connectedBTProductID;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *btAddress; // @synthesize btAddress=_btAddress;
@property(retain, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000e787e
- (_Bool)isEqualToRoute:(id)arg1;	// IMP=0x00100000000e7668
- (unsigned long long)hash;	// IMP=0x00100000000e757c
- (_Bool)hasAuthenticationCapability;	// IMP=0x00100000000e7547
- (id)routeName;	// IMP=0x00100000000e7539
- (_Bool)isRouteCurrentlyPicked;	// IMP=0x00100000000e7530
- (long long)_announcementPlatform;	// IMP=0x00100000000e74ee
- (_Bool)_isHearingAidsRoute;	// IMP=0x00100000000e74e6
- (_Bool)_isBuiltInSpeakerRoute;	// IMP=0x00100000000e74de
- (_Bool)isThirdPartyBluetoothHeadset;	// IMP=0x00100000000e74d6
- (unsigned long long)_getRouteCapabilities;	// IMP=0x00100000000e74ce
- (void)_initializeInternalState;	// IMP=0x00100000000e74c8
- (id)initWithRouteDescription:(id)arg1 hearingAidsAnnounceEnabled:(_Bool)arg2 builtInSpeakerAnnounceEnabled:(_Bool)arg3 ringerSwitchState:(long long)arg4;	// IMP=0x00100000000e7499

@end

