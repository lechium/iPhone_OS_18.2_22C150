//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSURI, MISSING_TYPE, NSString;

@interface _TtC17identityservicesd34IDSGroupEncryptionControllerMember : NSObject
{
    MISSING_TYPE *uri;	// 8 = 0x8
    MISSING_TYPE *kind;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004e8390
- (id)init;	// IMP=0x00100000004e8330
@property(nonatomic) _Bool isLightweight;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000004e7e20
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) long long hash;
@property(nonatomic, readonly) IDSURI *uri; // @synthesize uri;

@end
