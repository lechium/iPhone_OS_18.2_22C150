//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKit/NSObject-Protocol.h>

@class CLKDevice, NSArray, NSDictionary, NSString;

@protocol NTKFaceComplicationConfiguration <NSObject>
+ (NSString *)defaultLocalizedNameForComplicationSlot:(NSString *)arg1;
- (NSArray *)richComplicationSlotsForDevice:(CLKDevice *)arg1;
- (NSArray *)orderedComplicationSlots;
- (_Bool)complicationExistenceInvalidatesSnapshot;
- (NSString *)localizedNameForComplicationSlot:(NSString *)arg1;
- (NSString *)defaultSelectedComplicationSlotForDevice:(CLKDevice *)arg1;
- (NSDictionary *)complicationSlotDescriptors;

@optional
- (unsigned long long)dateComplicationSlotSupportedStylesForDevice:(CLKDevice *)arg1;
- (NSString *)dateComplicationSlotForDevice:(CLKDevice *)arg1;
@end

