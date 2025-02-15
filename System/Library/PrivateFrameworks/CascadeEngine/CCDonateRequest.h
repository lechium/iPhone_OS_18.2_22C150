//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CCDevice, CCDonateConnection, CCDonateRequestManager, NSString;
@protocol BMAccessAssertion;

__attribute__((visibility("hidden")))
@interface CCDonateRequest : NSObject
{
    CCDonateConnection *_connection;	// 8 = 0x8
    CCDonateRequestManager *_manager;	// 16 = 0x10
    unsigned long long _requestQueuedSignpostId;	// 24 = 0x18
    unsigned long long _requestHandledSignpostId;	// 32 = 0x20
    unsigned short _itemType;	// 40 = 0x28
    unsigned int _requestId;	// 44 = 0x2c
    NSString *_encodedDescriptors;	// 48 = 0x30
    NSString *_personaIdentifier;	// 56 = 0x38
    unsigned long long _version;	// 64 = 0x40
    NSString *_validity;	// 72 = 0x48
    CCDevice *_remoteDevice;	// 80 = 0x50
    id <BMAccessAssertion> _accessAssertion;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000017921
@property(readonly, nonatomic) id <BMAccessAssertion> accessAssertion; // @synthesize accessAssertion=_accessAssertion;
@property(readonly, nonatomic) CCDevice *remoteDevice; // @synthesize remoteDevice=_remoteDevice;
@property(readonly, nonatomic) NSString *validity; // @synthesize validity=_validity;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *personaIdentifier; // @synthesize personaIdentifier=_personaIdentifier;
@property(readonly, nonatomic) NSString *encodedDescriptors; // @synthesize encodedDescriptors=_encodedDescriptors;
@property(readonly, nonatomic) unsigned short itemType; // @synthesize itemType=_itemType;
@property(readonly, nonatomic) unsigned int requestId; // @synthesize requestId=_requestId;
- (id)_connectionTypeString;	// IMP=0x0000000000017882
- (unsigned long long)hash;	// IMP=0x0000000000017758
- (_Bool)isEqualToDonateRequest:(id)arg1;	// IMP=0x00000000000173d3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001736b
- (void)terminateWithType:(long long)arg1;	// IMP=0x000000000001721f
- (void)timeout;	// IMP=0x00000000000171b8
- (void)handle;	// IMP=0x0000000000016f21
- (id)description;	// IMP=0x0000000000016e6c
- (id)initWithConnection:(id)arg1 manager:(id)arg2 itemType:(unsigned short)arg3 encodedDescriptors:(id)arg4 personaIdentifier:(id)arg5 version:(unsigned long long)arg6 validity:(id)arg7 remoteDevice:(id)arg8 accessAssertion:(id)arg9;	// IMP=0x0000000000016c6d

@end

