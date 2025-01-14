//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCardSection-Protocol.h>

@class NSData, NSDictionary, NSString, SFFormattedText, SFImage, SFRichText;

@protocol SFSuggestionCardSection <SFCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(retain, nonatomic) SFFormattedText *trailingBottomText;
@property(retain, nonatomic) SFFormattedText *trailingMiddleText;
@property(retain, nonatomic) SFImage *thumbnail;
@property(retain, nonatomic) SFRichText *detailText;
@property(nonatomic) int suggestionType;
@property(copy, nonatomic) NSString *scopedSearchSectionBundleIdentifier;
@property(nonatomic) _Bool isContact;
@property(retain, nonatomic) SFRichText *suggestionText;
@property(copy, nonatomic) NSString *type;
@end

