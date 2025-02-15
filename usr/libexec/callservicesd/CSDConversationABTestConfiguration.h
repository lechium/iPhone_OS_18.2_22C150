//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;
@protocol CSDConversationServerBag;

@interface CSDConversationABTestConfiguration : NSObject
{
    _Bool _isShortMKIEnabled;	// 8 = 0x8
    _Bool _isAuthTagEnabled;	// 9 = 0x9
    _Bool _isTLEEnabled;	// 10 = 0xa
    id <CSDConversationServerBag> _serverBag;	// 16 = 0x10
    NSUUID *_groupUUID;	// 24 = 0x18
    unsigned long long _authTagSampleRate;	// 32 = 0x20
    unsigned long long _TLESampleRate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000dfc9d
@property(nonatomic) unsigned long long TLESampleRate; // @synthesize TLESampleRate=_TLESampleRate;
@property(nonatomic) unsigned long long authTagSampleRate; // @synthesize authTagSampleRate=_authTagSampleRate;
@property(readonly, nonatomic) NSUUID *groupUUID; // @synthesize groupUUID=_groupUUID;
@property(retain, nonatomic) id <CSDConversationServerBag> serverBag; // @synthesize serverBag=_serverBag;
@property(nonatomic) _Bool isTLEEnabled; // @synthesize isTLEEnabled=_isTLEEnabled;
@property(nonatomic) _Bool isAuthTagEnabled; // @synthesize isAuthTagEnabled=_isAuthTagEnabled;
@property(nonatomic) _Bool isShortMKIEnabled; // @synthesize isShortMKIEnabled=_isShortMKIEnabled;
- (void)_generateABTestConfiguration;	// IMP=0x00100000000df8c4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000df802
- (id)description;	// IMP=0x00100000000df65f
- (id)initWithGroupUUID:(id)arg1;	// IMP=0x00100000000df52d

@end

