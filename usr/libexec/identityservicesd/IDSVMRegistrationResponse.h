//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface IDSVMRegistrationResponse : NSObject
{
    unsigned long long _version;	// 8 = 0x8
    NSString *_language;	// 16 = 0x10
    NSString *_hardwareVersion;	// 24 = 0x18
    NSString *_osVersion;	// 32 = 0x20
    NSString *_softwareVersion;	// 40 = 0x28
    NSString *_deviceName;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000124bcc
- (void).cxx_destruct;	// IMP=0x0020000000124e62
@property(readonly, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(readonly, nonatomic) NSString *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(readonly, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(readonly, nonatomic) NSString *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000124d62
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000124bd4
@property(readonly, nonatomic) NSData *dataRepresentation;
- (id)initWithDataRepresentation:(id)arg1;	// IMP=0x0010000000124a34
- (id)initWithVersion:(unsigned long long)arg1 language:(id)arg2 hardwareVersion:(id)arg3 osVersion:(id)arg4 softwareVersion:(id)arg5 deviceName:(id)arg6;	// IMP=0x001000000012492c
- (id)init;	// IMP=0x00100000001247b4

@end
