//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AEAccessibilityServerPrimitives, AEObservation, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AEAccessibilityServerBackedAssessmentStateReader : NSObject
{
    _Bool _active;	// 8 = 0x8
    id <AEAccessibilityServerPrimitives> _accessibilityServerPrimitives;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    id <AEObservation> _guidedAccessActiveStateChangeObservation;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000065b6
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (id)initWithAccessibilityServerPrimitives:(id)arg1 queue:(id)arg2;	// IMP=0x000000000000637a
- (void)dealloc;	// IMP=0x0000000000006306

@end

