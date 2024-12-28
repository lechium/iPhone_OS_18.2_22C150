//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (GameKitErrors)
+ (id)gkNotConnectedToInternetError;	// IMP=0x0020000000033819
+ (id)gkPrivacyNoticeNotAcceptedError;	// IMP=0x0020000000033789
+ (id)gkUnauthenticatedError;	// IMP=0x0020000000033770
+ (id)serverErrorForCode:(long long)arg1 withReason:(id)arg2;	// IMP=0x002000000003368c
+ (id)serverErrorForCode:(long long)arg1 withUserInfo:(id)arg2;	// IMP=0x0020000000033666
+ (id)userErrorForServerCode:(long long)arg1 reason:(id)arg2 userInfo:(id)arg3;	// IMP=0x00200000000335d7
+ (id)userErrorForServerCode:(long long)arg1 reason:(id)arg2;	// IMP=0x0020000000033578
+ (id)userErrorForServerError:(id)arg1 userInfo:(id)arg2;	// IMP=0x00200000000331d3
+ (id)userErrorForServerError:(id)arg1;	// IMP=0x002000000003317b
+ (id)userErrorForCode:(long long)arg1 underlyingErrors:(id)arg2;	// IMP=0x00200000000330a0
+ (id)userErrorForCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x0020000000032fc5
+ (id)userErrorForCode:(long long)arg1 description:(id)arg2;	// IMP=0x0020000000032edc
+ (id)userErrorForCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0020000000032b9c
+ (id)_gkUserErrorForGameSessionErrorCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x00200000000afeb5
- (_Bool)isGKServerError;	// IMP=0x0010000000033b1b
- (_Bool)isGKClientError;	// IMP=0x0010000000033ad0
- (id)getUnderlyingErrorWithServerStatusCode:(int)arg1;	// IMP=0x00100000000338b3
@property(readonly, nonatomic) _Bool gkIsNotConnectedToInternetError;
@property(readonly, nonatomic) _Bool gkIsUnauthenticatedError;
- (_Bool)gkRequiresCredentialRenewal;	// IMP=0x0010000000033c25
- (_Bool)gkIsServerUnauthenticatedError;	// IMP=0x0010000000033bbb
- (_Bool)isGKCompoundError;	// IMP=0x0010000000033b66
@end
