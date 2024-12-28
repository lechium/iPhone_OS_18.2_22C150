//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccount.h>

@class NSNumber, NSString;

@interface ACAccount (SSExtensions)
- (_Bool)_ss_isDuplicate:(id)arg1;	// IMP=0x003000000012e3f2
@property(copy, nonatomic, setter=_ss_setSecureToken:) NSString *_ss_secureToken;
@property(readonly, nonatomic) _Bool _ss_isLocalAccount;
@property(readonly, nonatomic) _Bool _ss_isiTunesAccount;
@property(readonly, nonatomic) _Bool _ss_isIDMSAccount;
@property(readonly, nonatomic) _Bool _ss_isiCloudAccount;
@property(readonly, nonatomic) _Bool _ss_isAppleAuthenticationAccount;
@property(readonly, nonatomic) NSString *_ss_hashedDescription;
@property(readonly, nonatomic) NSNumber *_ss_DSID;
@property(readonly, nonatomic) NSString *_ss_altDSID;
@end
