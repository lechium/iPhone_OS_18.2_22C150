//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSMPFullLegacyIdentity, IDSMPPublicLegacyIdentity;

@interface IDSUTunControlChannelIdentityPair : NSObject
{
    IDSMPFullLegacyIdentity *_localFullIdentity;	// 8 = 0x8
    IDSMPPublicLegacyIdentity *_remotePublicIdentity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001693c4
@property(readonly, nonatomic) IDSMPPublicLegacyIdentity *remotePublicIdentity; // @synthesize remotePublicIdentity=_remotePublicIdentity;
@property(readonly, nonatomic) IDSMPFullLegacyIdentity *localFullIdentity; // @synthesize localFullIdentity=_localFullIdentity;
- (id)description;	// IMP=0x00100000001692e4
- (id)initWithLocalFullIdentity:(id)arg1 remotePublicIdentity:(id)arg2;	// IMP=0x001000000016924b

@end

