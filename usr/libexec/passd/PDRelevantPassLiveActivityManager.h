//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface PDRelevantPassLiveActivityManager : NSObject
{
    MISSING_TYPE *databaseManager;	// 8 = 0x8
    MISSING_TYPE *cardFileManager;	// 16 = 0x10
    MISSING_TYPE *currentGroups;	// 24 = 0x18
    MISSING_TYPE *dismissedGroupIdentifiers;	// 32 = 0x20
    MISSING_TYPE *defaults;	// 40 = 0x28
    MISSING_TYPE *dismissedGroupIdentifiersKey;	// 48 = 0x30
    MISSING_TYPE *groupsLock;	// 64 = 0x40
    MISSING_TYPE *dismissedLock;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0040000000582690
- (id)init;	// IMP=0x0010000000582630
- (void)passUpdated:(id)arg1;	// IMP=0x0010000000582590
- (id)updateLiveActivitiesForCandidatePasses:(id)arg1;	// IMP=0x001000000057f1e0
- (void)endAllActivities;	// IMP=0x001000000057e590
- (_Bool)areActivitiesEnabled;	// IMP=0x001000000057e230
- (id)initWithDatabaseManager:(id)arg1 cardFileManager:(id)arg2;	// IMP=0x001000000057e160

@end
