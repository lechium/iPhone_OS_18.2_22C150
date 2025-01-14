//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, SFActionItem, SFMediaItem, SFRichText;

@protocol SFMediaInfoCardSection <SFCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) int watchListItemType;
@property(retain, nonatomic) SFRichText *specialOfferButtonLabel;
@property(nonatomic) _Bool isMediaContainer;
@property(copy, nonatomic) NSString *watchListConfirmationText;
@property(copy, nonatomic) NSString *watchListContinuationText;
@property(copy, nonatomic) NSString *watchListButtonLabel;
@property(copy, nonatomic) NSString *watchListIdentifier;
@property(copy, nonatomic) NSArray *offers;
@property(retain, nonatomic) SFActionItem *playAction;
@property(copy, nonatomic) NSArray *details;
@property(retain, nonatomic) SFMediaItem *mediaItem;
@property(copy, nonatomic) NSString *type;
@end

