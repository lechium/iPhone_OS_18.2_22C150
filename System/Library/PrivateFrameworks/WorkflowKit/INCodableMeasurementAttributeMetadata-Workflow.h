//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INCodableMeasurementAttributeMetadata.h>

@class NSString;

@interface INCodableMeasurementAttributeMetadata (Workflow)
- (void)wf_updateWithParameterValue:(id)arg1;	// IMP=0x003000000061323c
- (void)wf_updateWithParameterState:(id)arg1;	// IMP=0x0030000000613119
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;	// IMP=0x0030000000612f47
- (_Bool)wf_processParameterValue:(id)arg1 forParameter:(id)arg2 parameterState:(id)arg3 codableAttribute:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0030000000612c1e
- (id)wf_updatedParameterDefinition:(id)arg1 forCodableAttribute:(id)arg2 localizer:(id)arg3;	// IMP=0x003000000061273b
- (Class)wf_parameterClass;	// IMP=0x003000000061272a
- (Class)wf_objectClass;	// IMP=0x0030000000612719
@property(readonly, nonatomic) NSString *wf_measurementType;
@end

