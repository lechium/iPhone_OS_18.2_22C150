//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HapticServerConfig;

__attribute__((visibility("hidden")))
@interface HapticCommandConverter : NSObject
{
    HapticServerConfig *_serverConfig;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000018bf6
@property(readonly) HapticServerConfig *serverConfig; // @synthesize serverConfig=_serverConfig;
- (id)CHtoAVParameterCurve:(id)arg1;	// IMP=0x000000000001855c
- (id)eventForParameterCurveEntry:(id)arg1;	// IMP=0x0000000000018362
- (id)eventForDynamicParameterEntry:(id)arg1;	// IMP=0x0000000000016dc1
- (id)eventForEventEntry:(id)arg1 engine:(id)arg2 privileged:(_Bool)arg3;	// IMP=0x0000000000015cc7
- (id)eventForSPIEventType:(unsigned long long)arg1 time:(double)arg2 eventParams:(id)arg3 duration:(double)arg4;	// IMP=0x00000000000150a3
- (id)eventForContinuousHapticEventType:(int)arg1 time:(double)arg2 params:(id)arg3 duration:(double)arg4;	// IMP=0x0000000000014109
- (unsigned long long)continuousHapticEventTypeForDefaultSharpness:(_Bool)arg1;	// IMP=0x000000000001408f
- (unsigned long long)continuousHapticEventTypeFromSharpness:(float)arg1 sustained:(_Bool)arg2;	// IMP=0x0000000000013f87
- (id)eventForLegacyTransientHapticAtTime:(double)arg1 params:(id)arg2 duration:(double)arg3;	// IMP=0x0000000000012e18
- (id)eventForTransientHapticAtTime:(double)arg1 params:(id)arg2 duration:(double)arg3;	// IMP=0x00000000000120c1
- (unsigned long long)eventTypeForBuiltInAudioEventType:(unsigned long long)arg1;	// IMP=0x0000000000011ec8
- (unsigned long long)transientHapticEventTypeForDefaultSharpness;	// IMP=0x0000000000011e54
- (unsigned long long)transientHapticEventTypeFromSharpness:(float)arg1;	// IMP=0x0000000000011d6c
- (id)eventForAudioEventType:(unsigned long long)arg1 time:(double)arg2 eventParams:(id)arg3 duration:(double)arg4;	// IMP=0x0000000000010ccf
- (float)limitDynamicParameter:(id)arg1 value:(float)arg2 parameter:(id)arg3;	// IMP=0x0000000000010b5b
- (float)limitEventParameter:(id)arg1 value:(float)arg2 parameter:(id)arg3 eventType:(id)arg4;	// IMP=0x00000000000109e3
- (id)initWithServerConfig:(id)arg1;	// IMP=0x0000000000010964

@end

