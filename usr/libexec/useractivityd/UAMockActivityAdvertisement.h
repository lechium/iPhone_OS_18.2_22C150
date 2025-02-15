//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, SFPeerDevice;

@interface UAMockActivityAdvertisement : NSObject
{
    long long _advertisementVersion;	// 8 = 0x8
    NSData *_advertisementPayload;	// 16 = 0x10
    NSDictionary *_options;	// 24 = 0x18
    SFPeerDevice *_device;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000006e7b4
- (void).cxx_destruct;	// IMP=0x002000000006ebbc
@property(retain) SFPeerDevice *device; // @synthesize device=_device;
@property(copy) NSDictionary *options; // @synthesize options=_options;
@property(copy) NSData *advertisementPayload; // @synthesize advertisementPayload=_advertisementPayload;
@property long long advertisementVersion; // @synthesize advertisementVersion=_advertisementVersion;
- (id)description;	// IMP=0x001000000006e9ed
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000006e8c3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000006e7bc
- (id)init;	// IMP=0x001000000006e785

@end

