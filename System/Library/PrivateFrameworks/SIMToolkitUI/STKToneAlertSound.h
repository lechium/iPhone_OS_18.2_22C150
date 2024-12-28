//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TLAlert;

__attribute__((visibility("hidden")))
@interface STKToneAlertSound
{
    TLAlert *_alert;	// 32 = 0x20
    long long _alertType;	// 40 = 0x28
    _Bool _finishedSoundNormally;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000013b81
- (void)_reallyStopSound;	// IMP=0x0000000000013aab
- (void)_reallyPlaySound;	// IMP=0x000000000001378a
- (id)initWithType:(long long)arg1 duration:(double)arg2;	// IMP=0x0000000000013746

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
