//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriSetup/NSObject-Protocol.h>

@class AFVoiceInfo, SUICVoiceSelectionPresenter;

@protocol SUICVoiceSelectionPresenterDelegate <NSObject>
- (void)presenter:(SUICVoiceSelectionPresenter *)arg1 didChangeVoiceSelection:(AFVoiceInfo *)arg2;

@optional
- (void)presenter:(SUICVoiceSelectionPresenter *)arg1 didChangeAudioOutputPowerLevel:(float)arg2;
@end
