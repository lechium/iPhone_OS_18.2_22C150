//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMAccount, NSArray, NSMutableArray, NSString, RPCompanionLinkDevice;
@protocol BMRapportDeviceCommunicationClient;

@interface BMRapportDevice : NSObject
{
    NSString *_rapportIdentifier;	// 8 = 0x8
    NSString *_bmDeviceIdentifier;	// 16 = 0x10
    RPCompanionLinkDevice *_device;	// 24 = 0x18
    id <BMRapportDeviceCommunicationClient> _client;	// 32 = 0x20
    NSMutableArray *_requestQueue;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000039dd0
- (void).cxx_destruct;	// IMP=0x0020000000039f4b
@property(retain, nonatomic) NSMutableArray *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(retain, nonatomic) id <BMRapportDeviceCommunicationClient> client; // @synthesize client=_client;
@property(retain, nonatomic) RPCompanionLinkDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) NSString *bmDeviceIdentifier; // @synthesize bmDeviceIdentifier=_bmDeviceIdentifier;
@property(readonly, nonatomic) NSString *rapportIdentifier; // @synthesize rapportIdentifier=_rapportIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000039e65
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000039dd8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000039db1
- (id)description;	// IMP=0x0010000000039c31
- (unsigned long long)hash;	// IMP=0x0010000000039bed
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000039b3d
- (void)handleInvalidationWithError:(id)arg1;	// IMP=0x0010000000039895
- (void)invalidateClientWithError:(id)arg1;	// IMP=0x00100000000397fe
@property(readonly, nonatomic) long long platform;
@property(readonly, nonatomic) NSArray *serviceTypes;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *shortenedRapportIdentifier;
@property(readonly, nonatomic) BMAccount *account;
- (id)initWithRPCompanionLinkDevice:(id)arg1;	// IMP=0x0010000000039565

@end
