//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface PDCreateShareContext : NSObject
{
    NSString *_primaryInviteIdentifier;	// 8 = 0x8
    NSMutableArray *_invites;	// 16 = 0x10
    NSMutableDictionary *_credentialShareForInviteIdentifier;	// 24 = 0x18
    NSMutableDictionary *_handleForInviteIdentifier;	// 32 = 0x20
    NSMutableDictionary *_transportIdentifierForInviteIdentifier;	// 40 = 0x28
    NSMutableDictionary *_shareURLForInviteIdentifier;	// 48 = 0x30
    NSString *_expectedPairedReaderIdentifier;	// 56 = 0x38
    NSString *_expectedProvisioningCredentialHash;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000002ebd81
@property(retain, nonatomic) NSString *expectedProvisioningCredentialHash; // @synthesize expectedProvisioningCredentialHash=_expectedProvisioningCredentialHash;
@property(retain, nonatomic) NSString *expectedPairedReaderIdentifier; // @synthesize expectedPairedReaderIdentifier=_expectedPairedReaderIdentifier;
- (void)enumerateAllInvites:(CDUnknownBlockType)arg1;	// IMP=0x00100000002ebb3b
- (void)enumerateSecondaryInvites:(CDUnknownBlockType)arg1;	// IMP=0x00100000002eb89e
- (id)secondaryInvites;	// IMP=0x00100000002eb79c
- (id)primaryInvite;	// IMP=0x00100000002eb693
- (void)setShareURL:(id)arg1 forInvite:(id)arg2;	// IMP=0x00100000002eb61a
- (void)setTransportIdentifier:(id)arg1 forInvite:(id)arg2;	// IMP=0x00100000002eb5a1
- (void)setHandle:(id)arg1 forInvite:(id)arg2;	// IMP=0x00100000002eb4b1
- (void)_addInvite:(id)arg1 forCredentialShare:(id)arg2 primary:(_Bool)arg3;	// IMP=0x00100000002eb3db
- (void)addInvite:(id)arg1 forCredentialShare:(id)arg2 primary:(_Bool)arg3;	// IMP=0x00100000002eb3c9
- (void)addInvite:(id)arg1 primary:(_Bool)arg2;	// IMP=0x00100000002eb3b2
- (id)init;	// IMP=0x00100000002eb2f8

@end
