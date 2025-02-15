//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADPeerInfo, NSError, NSString, NSUUID;

@interface ADDeviceRouterResult : NSObject
{
    ADPeerInfo *_peerInfo;	// 8 = 0x8
    NSUUID *_contextIdentifier;	// 16 = 0x10
    long long _proximity;	// 24 = 0x18
    NSString *_commandRelayProxyIdentifier;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000023fe2c
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x001000000023fddf
- (void).cxx_destruct;	// IMP=0x002000000023fabc
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSString *commandRelayProxyIdentifier; // @synthesize commandRelayProxyIdentifier=_commandRelayProxyIdentifier;
@property(readonly, nonatomic) long long proximity; // @synthesize proximity=_proximity;
@property(readonly, copy, nonatomic) NSUUID *contextIdentifier; // @synthesize contextIdentifier=_contextIdentifier;
@property(readonly, copy, nonatomic) ADPeerInfo *peerInfo; // @synthesize peerInfo=_peerInfo;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000023f9b6
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000023f838
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000023f82d
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000023f650
- (unsigned long long)hash;	// IMP=0x001000000023f5a8
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x001000000023f50d
- (id)description;	// IMP=0x001000000023f4f9
- (id)initWithPeerInfo:(id)arg1 contextIdentifier:(id)arg2 proximity:(long long)arg3 commandRelayProxyIdentifier:(id)arg4 error:(id)arg5;	// IMP=0x001000000023f3ed
- (id)init;	// IMP=0x001000000023f3d9
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x001000000023f205
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x001000000023fe34

@end

