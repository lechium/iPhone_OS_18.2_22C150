//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PDSharingManagementRevokeShareRequest
{
    _Bool _shouldCascade;	// 16 = 0x10
    NSString *_dpanIdentifier;	// 24 = 0x18
    NSString *_shareIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000005204f1
@property(nonatomic) _Bool shouldCascade; // @synthesize shouldCascade=_shouldCascade;
@property(retain, nonatomic) NSString *shareIdentifier; // @synthesize shareIdentifier=_shareIdentifier;
@property(retain, nonatomic) NSString *dpanIdentifier; // @synthesize dpanIdentifier=_dpanIdentifier;
- (id)urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;	// IMP=0x0010000000520299

@end

