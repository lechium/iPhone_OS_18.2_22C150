//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VUIPlaybackSettings : NSObject
{
    _Bool _cellularDataPlaybackEnabled;	// 8 = 0x8
    _Bool _cellularDataDownloadEnabled;	// 9 = 0x9
    _Bool _preferAVAdapterCompatibility;	// 10 = 0xa
    _Bool _useDefaultSubtitleDownloadLanguages;	// 11 = 0xb
    NSString *_preferredAudioLanguageCode;	// 16 = 0x10
    long long _preferredWifiDownloadQuality;	// 24 = 0x18
    long long _networkStatus;	// 32 = 0x20
    long long _preferredWifiPlaybackQuality;	// 40 = 0x28
    long long _preferredCellularPlaybackQuality;	// 48 = 0x30
    long long _preferredCellularDownloadQuality;	// 56 = 0x38
    NSArray *_preferredAudioDownloadLanguages;	// 64 = 0x40
    NSArray *_preferredSubtitleDownloadLanguages;	// 72 = 0x48
}

+ (id)sharedSettings;	// IMP=0x00100000000c8bbe
- (void).cxx_destruct;	// IMP=0x00000000000ca34e
@property(retain, nonatomic) NSArray *preferredSubtitleDownloadLanguages; // @synthesize preferredSubtitleDownloadLanguages=_preferredSubtitleDownloadLanguages;
@property(nonatomic) _Bool useDefaultSubtitleDownloadLanguages; // @synthesize useDefaultSubtitleDownloadLanguages=_useDefaultSubtitleDownloadLanguages;
@property(retain, nonatomic) NSArray *preferredAudioDownloadLanguages; // @synthesize preferredAudioDownloadLanguages=_preferredAudioDownloadLanguages;
@property(nonatomic) long long preferredCellularDownloadQuality; // @synthesize preferredCellularDownloadQuality=_preferredCellularDownloadQuality;
@property(nonatomic) long long preferredCellularPlaybackQuality; // @synthesize preferredCellularPlaybackQuality=_preferredCellularPlaybackQuality;
@property(nonatomic) long long preferredWifiPlaybackQuality; // @synthesize preferredWifiPlaybackQuality=_preferredWifiPlaybackQuality;
@property long long networkStatus; // @synthesize networkStatus=_networkStatus;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;	// IMP=0x00000000000ca202
- (id)_descriptionForExternalScreenType:(unsigned int)arg1;	// IMP=0x00000000000ca1e1
- (long long)_downloadQualityForString:(id)arg1;	// IMP=0x00000000000ca17b
- (long long)_playbackQualityForString:(id)arg1 forCellular:(_Bool)arg2;	// IMP=0x00000000000ca108
- (void)_updatePropertiesFromUserPrefs;	// IMP=0x00000000000c9c90
- (void)_handlePreferencesDidChangeNotification:(id)arg1;	// IMP=0x00000000000c9bba
- (void)_registerObserverForUserPrefsChange;	// IMP=0x00000000000c9b53
- (void)_sceneWillConnect:(id)arg1;	// IMP=0x00000000000c9a73
- (void)_externalScreenTypeDidChange:(id)arg1;	// IMP=0x00000000000c9912
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x00000000000c9900
- (void)_updateNetworkStatus;	// IMP=0x00000000000c96cb
- (void)updateSupplementaryAvailableAudioLanguageCodes:(id)arg1;	// IMP=0x00000000000c93c7
@property(nonatomic) long long preferredWifiDownloadQuality; // @synthesize preferredWifiDownloadQuality=_preferredWifiDownloadQuality;
@property(nonatomic) _Bool preferAVAdapterCompatibility; // @synthesize preferAVAdapterCompatibility=_preferAVAdapterCompatibility;
@property(retain, nonatomic) NSString *preferredAudioLanguageCode; // @synthesize preferredAudioLanguageCode=_preferredAudioLanguageCode;
@property(nonatomic) _Bool cellularDataDownloadEnabled; // @synthesize cellularDataDownloadEnabled=_cellularDataDownloadEnabled;
@property(nonatomic) _Bool cellularDataPlaybackEnabled; // @synthesize cellularDataPlaybackEnabled=_cellularDataPlaybackEnabled;
@property(readonly, nonatomic) long long preferredDownloadQualityForCurrentNetworkStatus;
@property(readonly, nonatomic) long long preferredPlaybackQualityForCurrentNetworkStatus;
- (void)dealloc;	// IMP=0x00000000000c9037
- (id)init;	// IMP=0x00000000000c8c13

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

