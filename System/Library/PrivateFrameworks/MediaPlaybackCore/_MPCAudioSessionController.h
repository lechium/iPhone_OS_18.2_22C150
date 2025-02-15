//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioSession, NSString;

__attribute__((visibility("hidden")))
@interface _MPCAudioSessionController : NSObject
{
    AVAudioSession *_audioSession;	// 8 = 0x8
    id _lostObserver;	// 16 = 0x10
    id _resetObserver;	// 24 = 0x18
    NSString *_category;	// 32 = 0x20
    unsigned long long _categoryOptions;	// 40 = 0x28
    unsigned long long _routeSharingPolicy;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000104fd7
@property(nonatomic) unsigned long long routeSharingPolicy; // @synthesize routeSharingPolicy=_routeSharingPolicy;
@property(nonatomic) unsigned long long categoryOptions; // @synthesize categoryOptions=_categoryOptions;
@property(nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) id resetObserver; // @synthesize resetObserver=_resetObserver;
@property(retain, nonatomic) id lostObserver; // @synthesize lostObserver=_lostObserver;
@property(retain, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
- (void)tearDownObservations;	// IMP=0x0000000000104e76
- (void)setupObservations;	// IMP=0x0000000000104c5d
- (void)restoreSessionSettingsFromSnapshot;	// IMP=0x0000000000104bef
- (void)snapshotSessionSettings;	// IMP=0x0000000000104b00
- (void)updateAudioSession:(id)arg1 options:(unsigned long long)arg2 routeSharingPolicy:(unsigned long long)arg3;	// IMP=0x0000000000104a74
- (void)dealloc;	// IMP=0x0000000000104a36
- (id)init;	// IMP=0x00000000001049a9

@end

