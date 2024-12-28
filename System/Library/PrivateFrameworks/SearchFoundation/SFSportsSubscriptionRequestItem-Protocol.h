//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFDomainSubscriptionRequestItem-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol SFSportsSubscriptionRequestItem <SFDomainSubscriptionRequestItem>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *leagueIdentifier;
@property(copy, nonatomic) NSString *sportIdentifier;
@property(copy, nonatomic) NSString *canonicalIdentifier;
@end
