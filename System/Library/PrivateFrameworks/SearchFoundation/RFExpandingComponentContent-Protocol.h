//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, RFLongItemStandardCardSection, RFReferenceFootnoteCardSection;

@protocol RFExpandingComponentContent <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(retain, nonatomic) RFReferenceFootnoteCardSection *reference_footnote_card_section;
@property(retain, nonatomic) RFLongItemStandardCardSection *long_item_standard_card_section;
@end

