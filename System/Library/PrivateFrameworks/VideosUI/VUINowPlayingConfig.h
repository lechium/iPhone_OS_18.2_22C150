//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface VUINowPlayingConfig : NSObject
{
    _Bool _showsUpNextInHUDForVOD;	// 8 = 0x8
    _Bool _refetchesUpNextDataForLive;	// 9 = 0x9
    _Bool _refetchesUpNextDataForVOD;	// 10 = 0xa
    _Bool _showsUpNextInHUDForLive;	// 11 = 0xb
    _Bool _showsStillWatchingAlert;	// 12 = 0xc
    _Bool _allowQOSReportingForiTunesLibraryPlayback;	// 13 = 0xd
    _Bool _convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero;	// 14 = 0xe
    _Bool _shouldSendLiveStreamStartAndEndTimesToAVKit;	// 15 = 0xf
    _Bool _shouldAdjustLiveStreamStartTimeToMatchSeekableRangeStartTime;	// 16 = 0x10
    _Bool _shouldAdjustLiveStreamEndTimeToMatchSeekableRangeEndTime;	// 17 = 0x11
    _Bool _showsLongLoadingAlert;	// 18 = 0x12
    _Bool _showsLozengeForLivePlayback;	// 19 = 0x13
    double _stillWatchingAlertDuration;	// 24 = 0x18
    double _alertIdleTimeout;	// 32 = 0x20
    NSArray *_mediaTypesExcludedFromReporting;	// 40 = 0x28
    NSArray *_mediaCharacteristicsToLocalize;	// 48 = 0x30
    NSArray *_audioIDPrefixes;	// 56 = 0x38
    NSDictionary *_mediaLocalizationKeyMapping;	// 64 = 0x40
    double _liveSportsStartFromBeginningOffset;	// 72 = 0x48
    double _liveStreamStartTimeAdjustmentSlopFactor;	// 80 = 0x50
    double _liveStreamStartAndEndTimeBadMetadataCutoff;	// 88 = 0x58
    double _liveStreamOverrunExtension;	// 96 = 0x60
    double _prerollFadeInEndOffset;	// 104 = 0x68
    double _longLoadingTimeout;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000001e5bcb
@property(nonatomic) _Bool showsLozengeForLivePlayback; // @synthesize showsLozengeForLivePlayback=_showsLozengeForLivePlayback;
@property(nonatomic) double longLoadingTimeout; // @synthesize longLoadingTimeout=_longLoadingTimeout;
@property(nonatomic) _Bool showsLongLoadingAlert; // @synthesize showsLongLoadingAlert=_showsLongLoadingAlert;
@property(nonatomic) double prerollFadeInEndOffset; // @synthesize prerollFadeInEndOffset=_prerollFadeInEndOffset;
@property(nonatomic) double liveStreamOverrunExtension; // @synthesize liveStreamOverrunExtension=_liveStreamOverrunExtension;
@property(nonatomic) double liveStreamStartAndEndTimeBadMetadataCutoff; // @synthesize liveStreamStartAndEndTimeBadMetadataCutoff=_liveStreamStartAndEndTimeBadMetadataCutoff;
@property(nonatomic) double liveStreamStartTimeAdjustmentSlopFactor; // @synthesize liveStreamStartTimeAdjustmentSlopFactor=_liveStreamStartTimeAdjustmentSlopFactor;
@property(nonatomic) _Bool shouldAdjustLiveStreamEndTimeToMatchSeekableRangeEndTime; // @synthesize shouldAdjustLiveStreamEndTimeToMatchSeekableRangeEndTime=_shouldAdjustLiveStreamEndTimeToMatchSeekableRangeEndTime;
@property(nonatomic) _Bool shouldAdjustLiveStreamStartTimeToMatchSeekableRangeStartTime; // @synthesize shouldAdjustLiveStreamStartTimeToMatchSeekableRangeStartTime=_shouldAdjustLiveStreamStartTimeToMatchSeekableRangeStartTime;
@property(nonatomic) _Bool shouldSendLiveStreamStartAndEndTimesToAVKit; // @synthesize shouldSendLiveStreamStartAndEndTimesToAVKit=_shouldSendLiveStreamStartAndEndTimesToAVKit;
@property(nonatomic) double liveSportsStartFromBeginningOffset; // @synthesize liveSportsStartFromBeginningOffset=_liveSportsStartFromBeginningOffset;
@property(copy, nonatomic) NSDictionary *mediaLocalizationKeyMapping; // @synthesize mediaLocalizationKeyMapping=_mediaLocalizationKeyMapping;
@property(copy, nonatomic) NSArray *audioIDPrefixes; // @synthesize audioIDPrefixes=_audioIDPrefixes;
@property(copy, nonatomic) NSArray *mediaCharacteristicsToLocalize; // @synthesize mediaCharacteristicsToLocalize=_mediaCharacteristicsToLocalize;
@property(nonatomic) _Bool convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero; // @synthesize convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero=_convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero;
@property(nonatomic) _Bool allowQOSReportingForiTunesLibraryPlayback; // @synthesize allowQOSReportingForiTunesLibraryPlayback=_allowQOSReportingForiTunesLibraryPlayback;
@property(copy, nonatomic) NSArray *mediaTypesExcludedFromReporting; // @synthesize mediaTypesExcludedFromReporting=_mediaTypesExcludedFromReporting;
@property(nonatomic) double alertIdleTimeout; // @synthesize alertIdleTimeout=_alertIdleTimeout;
@property(nonatomic) double stillWatchingAlertDuration; // @synthesize stillWatchingAlertDuration=_stillWatchingAlertDuration;
@property(nonatomic) _Bool showsStillWatchingAlert; // @synthesize showsStillWatchingAlert=_showsStillWatchingAlert;
@property(nonatomic) _Bool showsUpNextInHUDForLive; // @synthesize showsUpNextInHUDForLive=_showsUpNextInHUDForLive;
@property(nonatomic) _Bool refetchesUpNextDataForVOD; // @synthesize refetchesUpNextDataForVOD=_refetchesUpNextDataForVOD;
@property(nonatomic) _Bool refetchesUpNextDataForLive; // @synthesize refetchesUpNextDataForLive=_refetchesUpNextDataForLive;
@property(nonatomic) _Bool showsUpNextInHUDForVOD; // @synthesize showsUpNextInHUDForVOD=_showsUpNextInHUDForVOD;
- (id)init;	// IMP=0x00000000001e5842

@end
