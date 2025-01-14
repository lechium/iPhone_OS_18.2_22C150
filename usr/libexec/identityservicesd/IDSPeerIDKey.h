//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSURI, NSString;

@interface IDSPeerIDKey : NSObject
{
    _Bool _hasMatchingURIs;	// 8 = 0x8
    NSString *_service;	// 16 = 0x10
    IDSURI *_fromURI;	// 24 = 0x18
    IDSURI *_toURI;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000173392
+ (id)peerIDKeyWithService:(id)arg1 fromURI:(id)arg2 toURI:(id)arg3;	// IMP=0x0010000000172eb1
- (void).cxx_destruct;	// IMP=0x00200000001735a9
@property(nonatomic) _Bool hasMatchingURIs; // @synthesize hasMatchingURIs=_hasMatchingURIs;
@property(readonly, nonatomic) IDSURI *toURI; // @synthesize toURI=_toURI;
@property(readonly, nonatomic) IDSURI *fromURI; // @synthesize fromURI=_fromURI;
@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000173496
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000017339a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000173387
- (id)description;	// IMP=0x00100000001732ca
- (unsigned long long)hash;	// IMP=0x0010000000173214
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000173064
- (id)initWithService:(id)arg1 fromURI:(id)arg2 toURI:(id)arg3;	// IMP=0x0010000000172f3d

@end

