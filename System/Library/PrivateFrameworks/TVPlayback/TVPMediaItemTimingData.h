//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TVPMediaItemTimingData : NSObject
{
    _Bool _initialLoadingComplete;	// 8 = 0x8
    double _startTimeForPreparingForLoading;	// 16 = 0x10
    double _endTimeForPreparingForLoading;	// 24 = 0x18
    double _startTimeForLoadingAVAssetKeys;	// 32 = 0x20
    double _endTimeForLoadingAVAssetKeys;	// 40 = 0x28
    double _startTimeForPreparingForPlaybackInitiation;	// 48 = 0x30
    double _endTimeForPreparingForPlaybackInitiation;	// 56 = 0x38
    double _startTimeForAVPlayerItemLoading;	// 64 = 0x40
    double _endTimeForAVPlayerItemLoading;	// 72 = 0x48
    double _startTimeForBuffering;	// 80 = 0x50
    double _endTimeForBuffering;	// 88 = 0x58
    double _totalInitialLoadingTime;	// 96 = 0x60
}

@property(nonatomic) _Bool initialLoadingComplete; // @synthesize initialLoadingComplete=_initialLoadingComplete;
@property(nonatomic) double totalInitialLoadingTime; // @synthesize totalInitialLoadingTime=_totalInitialLoadingTime;
@property(nonatomic) double endTimeForBuffering; // @synthesize endTimeForBuffering=_endTimeForBuffering;
@property(nonatomic) double startTimeForBuffering; // @synthesize startTimeForBuffering=_startTimeForBuffering;
@property(nonatomic) double endTimeForAVPlayerItemLoading; // @synthesize endTimeForAVPlayerItemLoading=_endTimeForAVPlayerItemLoading;
@property(nonatomic) double startTimeForAVPlayerItemLoading; // @synthesize startTimeForAVPlayerItemLoading=_startTimeForAVPlayerItemLoading;
@property(nonatomic) double endTimeForPreparingForPlaybackInitiation; // @synthesize endTimeForPreparingForPlaybackInitiation=_endTimeForPreparingForPlaybackInitiation;
@property(nonatomic) double startTimeForPreparingForPlaybackInitiation; // @synthesize startTimeForPreparingForPlaybackInitiation=_startTimeForPreparingForPlaybackInitiation;
@property(nonatomic) double endTimeForLoadingAVAssetKeys; // @synthesize endTimeForLoadingAVAssetKeys=_endTimeForLoadingAVAssetKeys;
@property(nonatomic) double startTimeForLoadingAVAssetKeys; // @synthesize startTimeForLoadingAVAssetKeys=_startTimeForLoadingAVAssetKeys;
@property(nonatomic) double endTimeForPreparingForLoading; // @synthesize endTimeForPreparingForLoading=_endTimeForPreparingForLoading;
@property(nonatomic) double startTimeForPreparingForLoading; // @synthesize startTimeForPreparingForLoading=_startTimeForPreparingForLoading;

@end

