//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class BSDescriptionBuilder, NSString, TRAParticipant;
@protocol TRAPreferencesUpdating, TRASettingsActuationContextProviding, TRASettingsValidating;

@protocol TRAParticipantDelegate <NSObject>
- (void)didChangeSettingsForParticipant:(TRAParticipant *)arg1 context:(id <TRASettingsActuationContextProviding>)arg2;
- (void)updatePreferencesForParticipant:(TRAParticipant *)arg1 updater:(id <TRAPreferencesUpdating>)arg2;

@optional
- (void)appendDescriptionForParticipant:(TRAParticipant *)arg1 withBuilder:(BSDescriptionBuilder *)arg2 multilinePrefix:(NSString *)arg3;
- (void)participantWillInvalidate:(TRAParticipant *)arg1;
- (void)validateSettingsForParticipant:(TRAParticipant *)arg1 validator:(id <TRASettingsValidating>)arg2;
@end

