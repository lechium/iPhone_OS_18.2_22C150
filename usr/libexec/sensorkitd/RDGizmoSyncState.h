//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface RDGizmoSyncState : NSObject
{
    _Bool _requiredAppInstalled_deprecated;	// 8 = 0x8
    NSDictionary *_recordingStates;	// 16 = 0x10
    NSDictionary *_serviceStartTimes;	// 24 = 0x18
    unsigned long long _prerequisites;	// 32 = 0x20
    NSDictionary *_sensorConfigurations;	// 40 = 0x28
    unsigned long long _capabilities;	// 48 = 0x30
}

- (void)dealloc;	// IMP=0x0020000000021e90

@end

