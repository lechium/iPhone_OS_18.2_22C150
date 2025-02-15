//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKComplication, CLKComplicationDescriptor, NSArray, NSDate, NSSet;

@protocol CLKComplicationClient
- (void)getPlaceholderTemplateForComplication:(CLKComplication *)arg1 withHandler:(void (^)(CLKComplicationTemplate *))arg2;
- (void)requestedUpdateBudgetExhausted;
- (void)requestedUpdateDidBegin;
- (void)getNextRequestedUpdateDateWithHandler:(void (^)(NSDate *))arg1;
- (void)getSupportedTimeTravelDirectionsForComplication:(CLKComplication *)arg1 withHandler:(void (^)(unsigned long long))arg2;
- (void)notifyDebugTimeoutWithCharging:(_Bool)arg1;
- (void)getWidgetMigrationConfigurationFrom:(CLKComplicationDescriptor *)arg1 withHandler:(void (^)(CLKComplicationWidgetMigrationConfiguration *))arg2;
- (void)handleSharedComplicationDescriptors:(NSArray *)arg1;
- (void)getComplicationDescriptorsWithHandler:(void (^)(NSArray *))arg1;
- (void)getLocalizableSampleTemplateForComplication:(CLKComplication *)arg1 withHandler:(void (^)(CLKComplicationTemplate *))arg2;
- (void)getTimelineEntriesForComplication:(CLKComplication *)arg1 afterDate:(NSDate *)arg2 limit:(unsigned long long)arg3 withHandler:(void (^)(NSArray *))arg4;
- (void)getCurrentTimelineEntryForComplication:(CLKComplication *)arg1 withHandler:(void (^)(CLKComplicationTimelineEntry *))arg2;
- (void)getAlwaysOnTemplateForComplication:(CLKComplication *)arg1 withHandler:(void (^)(CLKComplicationTemplate *))arg2;
- (void)getTimelineAnimationBehaviorForComplication:(CLKComplication *)arg1 withHandler:(void (^)(unsigned long long))arg2;
- (void)getPrivacyBehaviorForComplication:(CLKComplication *)arg1 withHandler:(void (^)(unsigned long long))arg2;
- (void)getTimelineEndDateForComplication:(CLKComplication *)arg1 withHandler:(void (^)(NSDate *))arg2;
- (void)setActiveComplications:(NSSet *)arg1;
@end

