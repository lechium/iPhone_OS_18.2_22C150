//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIResponder.h>

@class CHHistoryDataProvider, CHWorkoutFormattingManager, FIPauseRingsCoordinator, FIUIFormattingManager, HKHealthStore, MISSING_TYPE;

@interface CHFitnessAppDelegate : UIResponder
{
    MISSING_TYPE *phoneSceneConfigurationName;	// 8 = 0x8
    MISSING_TYPE *iPadSceneConfigurationName;	// 24 = 0x18
    MISSING_TYPE *healthStore;	// 40 = 0x28
    MISSING_TYPE *historyDataProvider;	// 48 = 0x30
    MISSING_TYPE *fitnessUIFormattingManager;	// 56 = 0x38
    MISSING_TYPE *workoutFormattingManager;	// 64 = 0x40
    MISSING_TYPE *pauseRingsCoordinator;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000004fe120
- (id)init;	// IMP=0x00100000004fe0d0
@property(nonatomic, readonly) FIPauseRingsCoordinator *pauseRingsCoordinator; // @synthesize pauseRingsCoordinator;
@property(nonatomic, readonly) CHWorkoutFormattingManager *workoutFormattingManager; // @synthesize workoutFormattingManager;
@property(nonatomic, readonly) FIUIFormattingManager *fitnessUIFormattingManager; // @synthesize fitnessUIFormattingManager;
@property(nonatomic, readonly) CHHistoryDataProvider *historyDataProvider; // @synthesize historyDataProvider;
@property(nonatomic, readonly) HKHealthStore *healthStore; // @synthesize healthStore;
- (_Bool)application:(id)arg1 runTest:(id)arg2 options:(id)arg3;	// IMP=0x00100000004115b0
- (id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;	// IMP=0x00100000004fe1b0
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00100000004fe1a0

@end
