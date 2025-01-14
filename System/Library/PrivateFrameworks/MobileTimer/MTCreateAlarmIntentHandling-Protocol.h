//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileTimer/NSObject-Protocol.h>

@class MTCreateAlarmIntent, NSArray;

@protocol MTCreateAlarmIntentHandling <NSObject>
- (void)provideRepeatScheduleOptionsCollectionForMTCreateAlarm:(MTCreateAlarmIntent *)arg1 withCompletion:(void (^)(INObjectCollection *, NSError *))arg2;
- (void)resolveRepeatScheduleForMTCreateAlarm:(MTCreateAlarmIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)resolveDateComponentsForMTCreateAlarm:(MTCreateAlarmIntent *)arg1 withCompletion:(void (^)(INDateComponentsResolutionResult *))arg2;
- (void)resolveLabelForMTCreateAlarm:(MTCreateAlarmIntent *)arg1 withCompletion:(void (^)(INStringResolutionResult *))arg2;
- (void)handleMTCreateAlarm:(MTCreateAlarmIntent *)arg1 completion:(void (^)(MTCreateAlarmIntentResponse *))arg2;

@optional
- (void)provideRepeatScheduleOptionsForMTCreateAlarm:(MTCreateAlarmIntent *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (NSArray *)defaultRepeatScheduleForMTCreateAlarm:(MTCreateAlarmIntent *)arg1;
- (void)confirmMTCreateAlarm:(MTCreateAlarmIntent *)arg1 completion:(void (^)(MTCreateAlarmIntentResponse *))arg2;
@end

