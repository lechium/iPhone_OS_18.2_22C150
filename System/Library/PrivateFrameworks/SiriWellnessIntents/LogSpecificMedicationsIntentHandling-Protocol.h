//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriWellnessIntents/NSObject-Protocol.h>

@class LogSpecificMedicationsIntent;

@protocol LogSpecificMedicationsIntentHandling <NSObject>
- (void)handleLogSpecificMedications:(LogSpecificMedicationsIntent *)arg1 completion:(void (^)(LogSpecificMedicationsIntentResponse *))arg2;

@optional
- (void)confirmLogSpecificMedications:(LogSpecificMedicationsIntent *)arg1 completion:(void (^)(LogSpecificMedicationsIntentResponse *))arg2;
@end

