//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC13AppProtection29DefaultSubjectMonitorRegistry : NSObject
{
    MISSING_TYPE *observationToken;	// 8 = 0x8
    MISSING_TYPE *mutableState;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004b340
- (id)init;	// IMP=0x000000000004b2c0
- (id)addMonitor:(id)arg1 subjectMask:(unsigned long long)arg2 subscriptionOptions:(unsigned long long)arg3;	// IMP=0x000000000004b250
- (id)addMonitor:(id)arg1 subjectMask:(unsigned long long)arg2;	// IMP=0x000000000004ae10
- (id)addMonitor:(id)arg1;	// IMP=0x000000000004acc0

@end
