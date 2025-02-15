//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IXApplicationIdentity, NSUUID;

@interface IXAppInstallCoordinatorSeed : NSObject
{
    unsigned int _creatorEUID;	// 8 = 0x8
    NSUUID *_uniqueIdentifier;	// 16 = 0x10
    unsigned long long _creator;	// 24 = 0x18
    unsigned long long _intent;	// 32 = 0x20
    IXApplicationIdentity *_identity;	// 40 = 0x28
    unsigned long long _installationDomain;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000006e27f
- (void).cxx_destruct;	// IMP=0x002000000006e959
@property(nonatomic) unsigned long long installationDomain; // @synthesize installationDomain=_installationDomain;
@property(retain, nonatomic) IXApplicationIdentity *identity; // @synthesize identity=_identity;
@property(nonatomic) unsigned long long intent; // @synthesize intent=_intent;
@property(nonatomic) unsigned int creatorEUID; // @synthesize creatorEUID=_creatorEUID;
@property(nonatomic) unsigned long long creator; // @synthesize creator=_creator;
@property(retain, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006e7ad
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000006e5ce
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000006e287

@end

