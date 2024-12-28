//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSNumber, NSString;

@interface IDSGetSIMAuthTokenMessage : FTIDSMessage
{
    NSString *_protocolVersion;	// 232 = 0xe8
    NSString *_hardwareVersion;	// 240 = 0xf0
    NSString *_osVersion;	// 248 = 0xf8
    NSString *_softwareVersion;	// 256 = 0x100
    NSString *_hostHardwareVersion;	// 264 = 0x108
    NSString *_hostOsVersion;	// 272 = 0x110
    NSString *_hostSoftwareVersion;	// 280 = 0x118
    NSString *_carrierNonce;	// 288 = 0x120
    NSString *_IMEI;	// 296 = 0x128
    NSNumber *_responseStatus;	// 304 = 0x130
    NSString *_responseCarrierToken;	// 312 = 0x138
    NSString *_responseMessage;	// 320 = 0x140
}

- (void).cxx_destruct;	// IMP=0x00200000004a6efc
@property(copy, nonatomic) NSString *responseMessage; // @synthesize responseMessage=_responseMessage;
@property(copy, nonatomic) NSString *responseCarrierToken; // @synthesize responseCarrierToken=_responseCarrierToken;
@property(copy, nonatomic) NSNumber *responseStatus; // @synthesize responseStatus=_responseStatus;
@property(copy, nonatomic) NSString *IMEI; // @synthesize IMEI=_IMEI;
@property(copy, nonatomic) NSString *carrierNonce; // @synthesize carrierNonce=_carrierNonce;
@property(copy, nonatomic) NSString *hostSoftwareVersion; // @synthesize hostSoftwareVersion=_hostSoftwareVersion;
@property(copy, nonatomic) NSString *hostOsVersion; // @synthesize hostOsVersion=_hostOsVersion;
@property(copy, nonatomic) NSString *hostHardwareVersion; // @synthesize hostHardwareVersion=_hostHardwareVersion;
@property(copy, nonatomic) NSString *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(copy, nonatomic) NSString *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(copy, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x00100000004a6c7c
- (_Bool)isMultipleAuthCertCapable;	// IMP=0x00100000004a6c74
- (id)bagKey;	// IMP=0x00100000004a6c67
- (id)requiredKeys;	// IMP=0x00100000004a6c4e
- (id)messageBody;	// IMP=0x00100000004a693e
- (id)additionalMessageHeaders;	// IMP=0x00100000004a6836
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000004a65b9

// Remaining properties
@property(copy, nonatomic) NSString *hostDeviceName;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N

@property(copy, nonatomic) NSString *hostLanguage;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N


@end
