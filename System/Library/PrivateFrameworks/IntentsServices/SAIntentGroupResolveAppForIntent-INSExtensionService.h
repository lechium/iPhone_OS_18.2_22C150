//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAIntentGroupResolveAppForIntent.h>

@interface SAIntentGroupResolveAppForIntent (INSExtensionService)
- (_Bool)ins_shouldUseExtendedFlowTimeout;	// IMP=0x00600000000025f0
- (long long)ins_analyticsEndEventType;	// IMP=0x00600000000025e5
- (long long)ins_analyticsBeginEventType;	// IMP=0x00600000000025da
- (void)ins_resolveAppForIntent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x006000000000240b
- (void)ins_setJSONEncodedIntent:(id)arg1;	// IMP=0x00600000000023f9
- (void)ins_setProtobufEncodedIntent:(id)arg1;	// IMP=0x00600000000023e7
- (id)ins_protobufEncodedIntent;	// IMP=0x00600000000023d5
- (id)ins_jsonEncodedIntent;	// IMP=0x00600000000023c3
@end
