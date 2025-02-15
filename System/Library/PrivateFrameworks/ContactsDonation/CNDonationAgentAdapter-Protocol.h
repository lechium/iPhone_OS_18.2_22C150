//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsDonation/NSObject-Protocol.h>

@class ACAccount, CNEither, CNFuture, NSArray, NSString;

@protocol CNDonationAgentAdapter <NSObject>
- (CNFuture *)removeAllRejections;
- (CNFuture *)rejectValuesWithClusterIdentifier:(NSString *)arg1;
- (CNFuture *)rejectValueWithDonationIdentifier:(NSString *)arg1;
- (CNFuture *)changeFromAccount:(ACAccount *)arg1 toAccount:(ACAccount *)arg2;
- (CNFuture *)meCardDonations;
- (CNEither *)donatedMeCardEither;
- (CNFuture *)fetchDonatedMeCard;
- (CNFuture *)removeDonatedMeCardValuesForIdentifiers:(NSArray *)arg1;
- (CNFuture *)donateMeCardValues:(NSArray *)arg1;
@end

