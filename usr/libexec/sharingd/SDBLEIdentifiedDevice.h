//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSUUID, RPIdentity;

@interface SDBLEIdentifiedDevice : NSObject
{
    NSData *_authTag;	// 8 = 0x8
    NSData *_btAddr;	// 16 = 0x10
    unsigned long long _discoveryFlags;	// 24 = 0x18
    NSUUID *_identifier;	// 32 = 0x20
    RPIdentity *_identity;	// 40 = 0x28
    unsigned long long _lastUpdateTicks;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000024473b
@property(nonatomic) unsigned long long lastUpdateTicks; // @synthesize lastUpdateTicks=_lastUpdateTicks;
@property(retain, nonatomic) RPIdentity *identity; // @synthesize identity=_identity;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long discoveryFlags; // @synthesize discoveryFlags=_discoveryFlags;
@property(copy, nonatomic) NSData *btAddr; // @synthesize btAddr=_btAddr;
@property(copy, nonatomic) NSData *authTag; // @synthesize authTag=_authTag;

@end

