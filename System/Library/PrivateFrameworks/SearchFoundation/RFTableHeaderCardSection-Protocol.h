//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary;

@protocol RFTableHeaderCardSection <SFCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) int vertical_alignment;
@property(nonatomic) int should_repeat_header_in_flow_layout;
@property(copy, nonatomic) NSArray *compact_cells;
@property(copy, nonatomic) NSArray *cells;
@property(copy, nonatomic) NSArray *columns;
@end

