//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSWiFiConfigurationData : NSObject
{
    _Bool _WEP;	// 8 = 0x8
    _Bool _hidden;	// 9 = 0x9
    NSString *_ssid;	// 16 = 0x10
    NSString *_password;	// 24 = 0x18
    NSString *_airplayBrokerID;	// 32 = 0x20
    NSString *_airplayBrokerPin;	// 40 = 0x28
    NSString *_captivePortalToken;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000029ba0
- (void).cxx_destruct;	// IMP=0x0000000000029c19
@property(copy, nonatomic) NSString *captivePortalToken; // @synthesize captivePortalToken=_captivePortalToken;
@property(copy, nonatomic) NSString *airplayBrokerPin; // @synthesize airplayBrokerPin=_airplayBrokerPin;
@property(copy, nonatomic) NSString *airplayBrokerID; // @synthesize airplayBrokerID=_airplayBrokerID;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic, getter=isWEP) _Bool WEP; // @synthesize WEP=_WEP;
@property(readonly, copy, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
@property(readonly, nonatomic) _Bool hasAirplayPayload;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000029a4c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000029814
@property(readonly, copy, nonatomic) NSString *extraPreviewText;
@property(readonly, nonatomic) long long type;
- (id)initWithSSID:(id)arg1 isWEP:(_Bool)arg2 password:(id)arg3 isHidden:(_Bool)arg4;	// IMP=0x0000000000029723

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

