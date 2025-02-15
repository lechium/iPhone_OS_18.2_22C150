//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Cards/NSCopying-Protocol.h>
#import <Cards/NSObject-Protocol.h>

@class INInteraction, NSArray, NSSet, NSString;
@protocol SFCardSection;

@protocol CRCardSection <NSObject, NSCopying>
@property(readonly, nonatomic) NSString *cardSectionIdentifier;

@optional
@property(readonly, nonatomic) NSArray *resolvedCardSections;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,N

@property(readonly, nonatomic) _Bool hasNextCard;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) NSArray *actionCommands;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,N

@property(readonly, nonatomic) id <SFCardSection> backingCardSection;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<SFCardSection>",?,R,N

- (NSSet *)parametersForInteraction:(INInteraction *)arg1;
@end

