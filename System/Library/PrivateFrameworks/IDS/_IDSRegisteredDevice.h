//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSNumber, NSString;

@interface _IDSRegisteredDevice : NSObject
{
    _Bool _defaultLocalDevice;	// 8 = 0x8
    _Bool _locallyPresent;	// 9 = 0x9
    _Bool _defaultPariedDevice;	// 10 = 0xa
    _Bool _isActivePairedDevice;	// 11 = 0xb
    _Bool _isHSATrustedDevice;	// 12 = 0xc
    NSString *_deviceName;	// 16 = 0x10
    NSString *_hardwareVersion;	// 24 = 0x18
    NSString *_idsIdentifierOverride;	// 32 = 0x20
    NSString *_selfHandle;	// 40 = 0x28
    NSString *_nsuuid;	// 48 = 0x30
    NSNumber *_pairingProtocolVersion;	// 56 = 0x38
    NSNumber *_minimumCompatibilityVersion;	// 64 = 0x40
    NSNumber *_maximumCompatibilityVersion;	// 72 = 0x48
    NSNumber *_pairingType;	// 80 = 0x50
    NSData *_pushToken;	// 88 = 0x58
    NSDictionary *_privateDeviceData;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000013ae49
@property(retain, nonatomic) NSDictionary *privateDeviceData; // @synthesize privateDeviceData=_privateDeviceData;
@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(retain, nonatomic) NSNumber *pairingType; // @synthesize pairingType=_pairingType;
@property(retain, nonatomic) NSNumber *maximumCompatibilityVersion; // @synthesize maximumCompatibilityVersion=_maximumCompatibilityVersion;
@property(retain, nonatomic) NSNumber *minimumCompatibilityVersion; // @synthesize minimumCompatibilityVersion=_minimumCompatibilityVersion;
@property(retain, nonatomic) NSNumber *pairingProtocolVersion; // @synthesize pairingProtocolVersion=_pairingProtocolVersion;
@property(retain, nonatomic) NSString *nsuuid; // @synthesize nsuuid=_nsuuid;
@property(retain, nonatomic) NSString *selfHandle; // @synthesize selfHandle=_selfHandle;
@property(retain, nonatomic) NSString *idsIdentifierOverride; // @synthesize idsIdentifierOverride=_idsIdentifierOverride;
@property(retain, nonatomic) NSString *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(nonatomic) _Bool isHSATrustedDevice; // @synthesize isHSATrustedDevice=_isHSATrustedDevice;
@property(nonatomic) _Bool isActivePairedDevice; // @synthesize isActivePairedDevice=_isActivePairedDevice;
@property(nonatomic) _Bool defaultPariedDevice; // @synthesize defaultPariedDevice=_defaultPariedDevice;
@property(nonatomic) _Bool locallyPresent; // @synthesize locallyPresent=_locallyPresent;
@property(nonatomic) _Bool defaultLocalDevice; // @synthesize defaultLocalDevice=_defaultLocalDevice;
- (id)dictionaryRepresentation;	// IMP=0x000000000013a845
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000139dd2
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000139890

@end
