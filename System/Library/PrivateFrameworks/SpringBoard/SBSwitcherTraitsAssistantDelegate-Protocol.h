//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSArray, NSString, SBDeviceApplicationSceneHandle, SBLayoutElement, SBTraitsPipelineManager, SBTraitsSceneParticipantDelegate, TRAParticipant, TRASettingsActuationContext;

@protocol SBSwitcherTraitsAssistantDelegate <NSObject>
- (void)actuateOrientationForTraitsDelegate:(SBTraitsSceneParticipantDelegate *)arg1 withContext:(TRASettingsActuationContext *)arg2 reasons:(long long)arg3;
- (SBDeviceApplicationSceneHandle *)sceneHandleForTraitsParticipant:(TRAParticipant *)arg1;
- (SBDeviceApplicationSceneHandle *)sceneHandleForLayoutElement:(SBLayoutElement *)arg1;
- (NSArray *)currentElementsParticipants;
- (SBTraitsPipelineManager *)traitsPipelineManager;
- (NSString *)stateCaptureTitlePreamble;
- (double)contentContainerAspectRatio;
- (_Bool)isOnExtendedDisplay;
- (_Bool)isChamoisUIEnabled;
@end
