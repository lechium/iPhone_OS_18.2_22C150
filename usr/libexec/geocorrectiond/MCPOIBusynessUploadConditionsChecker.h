//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MCPOIBusynessUploadConditionsChecker : NSObject
{
}

+ (_Bool)isHorizontalAccuracySufficient:(id)arg1;	// IMP=0x002000000000c4e0
+ (_Bool)hasUserMoved:(id)arg1;	// IMP=0x001000000000c349
+ (_Bool)isLocationFresh:(id)arg1;	// IMP=0x001000000000c1e1
+ (_Bool)shouldUploadBasedOnTime;	// IMP=0x001000000000b931
+ (id)sharedConditionsCheckerInstance;	// IMP=0x001000000000b8dc
- (_Bool)shouldUsePlaceInference:(id)arg1 forLocation:(id)arg2;	// IMP=0x004000000000bf18
- (_Bool)shouldUseVisit:(id)arg1 forLocation:(id)arg2;	// IMP=0x001000000000bd0c
- (_Bool)shouldUploadBasedOnLocation:(id)arg1;	// IMP=0x001000000000bb99

@end

