//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSNumber, NSString, OspreyKeychain;

@interface OspreyConnectionPreferences : NSObject
{
    OspreyKeychain *_keychain;	// 8 = 0x8
    _Bool _certificateDataFetched;	// 16 = 0x10
    NSData *_certificateData;	// 24 = 0x18
    NSData *_deviceAttestationData;	// 32 = 0x20
    NSString *_connectionHost;	// 40 = 0x28
    NSNumber *_deviceAuthenticationVersion;	// 48 = 0x30
    NSNumber *_deviceAttestionVersion;	// 56 = 0x38
    NSDate *_deviceAttestionExpireOn;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000000520d
@property(copy, nonatomic) NSDate *deviceAttestionExpireOn; // @synthesize deviceAttestionExpireOn=_deviceAttestionExpireOn;
@property(copy, nonatomic) NSNumber *deviceAttestionVersion; // @synthesize deviceAttestionVersion=_deviceAttestionVersion;
@property(copy, nonatomic) NSNumber *deviceAuthenticationVersion; // @synthesize deviceAuthenticationVersion=_deviceAuthenticationVersion;
@property(copy, nonatomic) NSString *connectionHost; // @synthesize connectionHost=_connectionHost;
- (void)deleteDeviceAttestationData;	// IMP=0x000000000000510c
- (id)deviceAttestationData;	// IMP=0x000000000000504c
- (_Bool)setDeviceAttestationData:(id)arg1 withExpiration:(id)arg2;	// IMP=0x0000000000004efe
@property(readonly, nonatomic) _Bool isDeviceAttestionExpired;
- (id)_deviceAttestationDataKey;	// IMP=0x0000000000004e77
- (void)deleteCertificateData;	// IMP=0x0000000000004ddb
@property(retain, nonatomic) NSData *certificateData;
- (id)_certificateDataKey;	// IMP=0x0000000000004c74
- (void)resetCachedDeviceAttestation;	// IMP=0x0000000000004c1d
- (void)deleteAll;	// IMP=0x0000000000004bef
- (id)dictionaryRepresentation;	// IMP=0x0000000000004b64
- (id)initWithDictionary:(id)arg1 keychain:(id)arg2;	// IMP=0x0000000000004a30
- (id)initWithConnectionHost:(id)arg1 keychain:(id)arg2;	// IMP=0x0000000000004958

@end
