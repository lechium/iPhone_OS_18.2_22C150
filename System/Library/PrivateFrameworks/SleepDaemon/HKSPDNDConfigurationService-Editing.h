//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/HKSPDNDConfigurationService.h>

@class NSString;
@protocol HKSPSleepFocusModeBridgeDelegate;

@interface HKSPDNDConfigurationService (Editing)
- (_Bool)_actuallyUpdateModeConfiguration:(id)arg1 state:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00200000000657db
- (_Bool)_updateSleepFocusModeWithState:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0020000000065615
- (_Bool)_createSleepFocusModeInState:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0020000000065459
- (_Bool)configureSleepFocusModeWithState:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0020000000065372
- (_Bool)removeSleepFocusMode:(id *)arg1;	// IMP=0x00200000000652fa
- (_Bool)createSleepFocusModeInState:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0020000000065217

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(nonatomic) __weak id <HKSPSleepFocusModeBridgeDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

