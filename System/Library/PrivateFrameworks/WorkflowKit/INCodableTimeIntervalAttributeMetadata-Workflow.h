//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INCodableTimeIntervalAttributeMetadata.h>

@interface INCodableTimeIntervalAttributeMetadata (Workflow)
- (id)unitNamesWithMinimumUnit:(long long)arg1 maximumUnit:(long long)arg2;	// IMP=0x00600000005141b1
- (id)unitNameForUnit:(long long)arg1;	// IMP=0x0060000000514192
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;	// IMP=0x0060000000514031
- (_Bool)wf_processParameterValue:(id)arg1 forParameter:(id)arg2 parameterState:(id)arg3 codableAttribute:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0060000000513dcd
- (id)wf_updatedParameterDefinition:(id)arg1 forCodableAttribute:(id)arg2 localizer:(id)arg3;	// IMP=0x0060000000513b65
- (Class)wf_parameterClass;	// IMP=0x0060000000513b54
- (Class)wf_objectClass;	// IMP=0x0060000000513b43
@end

