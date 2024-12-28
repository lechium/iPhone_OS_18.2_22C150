//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/IDSBaseMessage.h>

@class NSArray, NSData, NSMutableArray, NSString;

@interface IDSAuthenticateUsersMessage : IDSBaseMessage
{
    NSData *_pushToken;	// 232 = 0xe8
    NSString *_realm;	// 240 = 0xf0
    NSMutableArray *_requests;	// 248 = 0xf8
    NSArray *_authenticationResponses;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x002000000026da27
@property(retain, nonatomic) NSArray *authenticationResponses; // @synthesize authenticationResponses=_authenticationResponses;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(copy) NSString *realm; // @synthesize realm=_realm;
@property(copy, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x001000000026d687
- (void)_addRequestWithID:(id)arg1 cert:(id)arg2 sig:(id)arg3 csr:(id)arg4 tag:(id)arg5;	// IMP=0x001000000026d4b6
- (void)addRequestWithID:(id)arg1 sig:(id)arg2 csr:(id)arg3 tag:(id)arg4;	// IMP=0x001000000026d48c
- (void)addRequestWithID:(id)arg1 cert:(id)arg2;	// IMP=0x001000000026d463
- (_Bool)allowsServerProvidedLenientAnisetteTimeout;	// IMP=0x001000000026d45b
- (double)anisetteHeadersTimeout;	// IMP=0x001000000026d44d
- (id)additionalMessageHeaders;	// IMP=0x001000000026d355
- (id)messageBody;	// IMP=0x001000000026d21d
- (id)requiredKeys;	// IMP=0x001000000026d1c4
- (id)bagKey;	// IMP=0x001000000026d1b7
- (_Bool)requiresPushTokenKeys;	// IMP=0x001000000026d1af
- (long long)responseCommand;	// IMP=0x001000000026d1a4
- (long long)command;	// IMP=0x001000000026d199
- (_Bool)wantsBAASigning;	// IMP=0x001000000026d191
- (_Bool)wantsBinaryPush;	// IMP=0x001000000026d189
- (_Bool)wantsCompressedBody;	// IMP=0x001000000026d181
- (_Bool)wantsHTTPHeaders;	// IMP=0x001000000026d179
- (_Bool)wantsBagKey;	// IMP=0x001000000026d171
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000026d05e
- (id)init;	// IMP=0x001000000026cf96

@end
