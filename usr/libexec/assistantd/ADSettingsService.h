//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AFInstanceContext;
@protocol CSSiriRecordingInfoProviding;

@interface ADSettingsService
{
    AFInstanceContext *_instanceContext;	// 8 = 0x8
    id <CSSiriRecordingInfoProviding> _recordingInfoProvider;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000175259
@property(readonly, nonatomic) id <CSSiriRecordingInfoProviding> recordingInfoProvider; // @synthesize recordingInfoProvider=_recordingInfoProvider;
- (void)_setBoolSetting:(id)arg1 currentValueBlock:(CDUnknownBlockType)arg2 setValueBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000174f36
- (id)_wrapBoolSettingValue:(_Bool)arg1;	// IMP=0x0010000000174ecc
- (void)_setNoiseManagement:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001742a4
- (void)_getNoiseManagement:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000173bd7
- (void)_getPlaybackAudioRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000173ac5
- (void)_setVoiceOver:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001739de
- (void)_getVoiceOver:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001738da
- (void)_registerCommandHandlersWithRegistry:(id)arg1;	// IMP=0x00100000001737de
- (id)initWithRecordingInfoProvider:(id)arg1 instanceContext:(id)arg2;	// IMP=0x0010000000173707

@end

