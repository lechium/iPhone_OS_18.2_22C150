//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDataString;

@protocol _INPBWorkoutAssociatedItem <NSObject>
@property(readonly, nonatomic) _Bool hasItemName;
@property(retain, nonatomic) _INPBDataString *itemName;
@property(nonatomic) _Bool hasItemLabel;
@property(nonatomic) int itemLabel;
@property(readonly, nonatomic) _Bool hasItemID;
@property(copy, nonatomic) NSString *itemID;
@property(nonatomic) _Bool hasContentRating;
@property(nonatomic) int contentRating;
- (int)StringAsItemLabel:(NSString *)arg1;
- (NSString *)itemLabelAsString:(int)arg1;
- (int)StringAsContentRating:(NSString *)arg1;
- (NSString *)contentRatingAsString:(int)arg1;
@end

