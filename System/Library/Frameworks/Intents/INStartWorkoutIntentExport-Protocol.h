//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INSpeakableString, INWorkoutCustomization, NSArray, NSNumber;

@protocol INStartWorkoutIntentExport <NSObject, JSExport>
@property(copy, nonatomic) INWorkoutCustomization *customization;
@property(nonatomic) long long sequenceLabel;
@property(copy, nonatomic) NSNumber *isVoiceOnly;
@property(copy, nonatomic) NSNumber *isBuiltInWorkoutType;
@property(copy, nonatomic) NSArray *associatedItems;
@property(copy, nonatomic) NSNumber *isOpenEnded;
@property(nonatomic) long long workoutLocationType;
@property(nonatomic) long long workoutGoalUnitType;
@property(copy, nonatomic) NSNumber *goalValue;
@property(copy, nonatomic) INSpeakableString *workoutName;
- (id)init;
@end

