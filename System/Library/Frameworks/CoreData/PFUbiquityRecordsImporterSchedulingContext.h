//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface PFUbiquityRecordsImporterSchedulingContext : NSObject
{
    NSMutableSet *_scheduledLogLocations;	// 8 = 0x8
    NSMutableSet *_pendingLogLocations;	// 16 = 0x10
    NSMutableSet *_failedLogLocations;	// 24 = 0x18
    NSMutableSet *_ignoredLogLocations;	// 32 = 0x20
    NSMutableDictionary *_logLocationsToEncounteredErrors;	// 40 = 0x28
    int _lock;	// 48 = 0x30
}

- (id)description;	// IMP=0x00000000003655ee
- (void)dealloc;	// IMP=0x0000000000365574
- (id)initWithPendingLogLocations:(id)arg1;	// IMP=0x0000000000365539
- (id)init;	// IMP=0x00000000003654ad

@end
