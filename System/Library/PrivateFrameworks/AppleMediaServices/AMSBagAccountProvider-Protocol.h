//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/NSObject-Protocol.h>

@class ACAccount, AMSPromise, NSString;

@protocol AMSBagAccountProvider <NSObject>
@property(readonly, nonatomic) ACAccount *account;
@property(readonly, nonatomic) NSString *identity;
- (AMSPromise *)bagStorefrontPromiseForAccountMediaType:(NSString *)arg1;
- (NSString *)bagStorefrontForAccountMediaType:(NSString *)arg1;
- (AMSPromise *)bagAccountPromiseForAccountMediaType:(NSString *)arg1;
- (ACAccount *)bagAccountForAccountMediaType:(NSString *)arg1;
- (_Bool)associatedAccountIsEqualToAccount:(ACAccount *)arg1 forMediaType:(NSString *)arg2;
@end

