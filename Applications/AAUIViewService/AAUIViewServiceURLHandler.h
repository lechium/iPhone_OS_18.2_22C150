//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AAUIViewServiceURLHandler : NSObject
{
    CDUnknownBlockType _destroySessionBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000002c82
@property(copy, nonatomic) CDUnknownBlockType destroySessionBlock; // @synthesize destroySessionBlock=_destroySessionBlock;
- (void)_handleMailImportURL:(id)arg1;	// IMP=0x00100000000029ec
- (void)_presentInheritanceInvitationWithBeneficiaryID:(id)arg1 fallBackURL:(id)arg2;	// IMP=0x0010000000002729
- (void)_presentCustodianInvitationWithUUID:(id)arg1 fallBackURL:(id)arg2;	// IMP=0x0010000000002463
- (void)_openCustomDomainURL:(id)arg1 domainState:(id)arg2;	// IMP=0x001000000000214d
- (void)_openCustomDomainManageURL;	// IMP=0x00100000000020cc
- (void)_openPrivateEmailManageURL;	// IMP=0x001000000000204b
- (_Bool)handleUniversalLinkInUserActivity:(id)arg1;	// IMP=0x0010000000001b60
- (id)_buildURLInfoFromActivity:(id)arg1;	// IMP=0x00100000000019a1

@end
