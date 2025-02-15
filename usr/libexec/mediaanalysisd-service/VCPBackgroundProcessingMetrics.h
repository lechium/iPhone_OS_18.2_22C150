//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, PHPhotoLibrary, VCPDatabaseWriter;

@interface VCPBackgroundProcessingMetrics : NSObject
{
    long long _numImageFullyAnalyzedToday;	// 8 = 0x8
    long long _numLivePhotoFullyAnalyzedToday;	// 16 = 0x10
    long long _numMovieFullyAnalyzedToday;	// 24 = 0x18
    long long _movieDurationFullyAnalyzedToday;	// 32 = 0x20
    long long _numImageFullyAnalyzedLatestVersion;	// 40 = 0x28
    long long _numLivePhotoFullyAnalyzedLatestVersion;	// 48 = 0x30
    long long _numMovieFullyAnalyzedLatestVersion;	// 56 = 0x38
    long long _movieDurationFullyAnalyzedLatestVersion;	// 64 = 0x40
    long long _timeFullyAnalyzingImageLatestVersion;	// 72 = 0x48
    long long _timeFullyAnalyzingLivePhotoLatestVersion;	// 80 = 0x50
    long long _timeFullyAnalyzingMovieLatestVersion;	// 88 = 0x58
    long long _numImagePartiallyAnalyzedToday;	// 96 = 0x60
    long long _numLivePhotoPartiallyAnalyzedToday;	// 104 = 0x68
    long long _numMoviePartiallyAnalyzedToday;	// 112 = 0x70
    long long _movieDurationPartiallyAnalyzedToday;	// 120 = 0x78
    long long _numImagePartiallyAnalyzedLatestVersion;	// 128 = 0x80
    long long _numLivePhotoPartiallyAnalyzedLatestVersion;	// 136 = 0x88
    long long _numMoviePartiallyAnalyzedLatestVersion;	// 144 = 0x90
    long long _movieDurationPartiallyAnalyzedLatestVersion;	// 152 = 0x98
    long long _timePartiallyAnalyzingImageLatestVersion;	// 160 = 0xa0
    long long _timePartiallyAnalyzingLivePhotoLatestVersion;	// 168 = 0xa8
    long long _timePartiallyAnalyzingMovieLatestVersion;	// 176 = 0xb0
    long long _timeRunningWithPendingToday;	// 184 = 0xb8
    long long _numOfTimesScheduledWithPendingToday;	// 192 = 0xc0
    long long _timeRunningWithPendingLatestVersion;	// 200 = 0xc8
    long long _numOfTimesScheduledWithPendingLatestVersion;	// 208 = 0xd0
    long long _timeRunningWithoutPendingToday;	// 216 = 0xd8
    long long _numOfTimesScheduledWithoutPendingToday;	// 224 = 0xe0
    long long _timeRunningWithoutPendingLatestVersion;	// 232 = 0xe8
    long long _numOfTimesScheduledWithoutPendingLatestVersion;	// 240 = 0xf0
    long long _numOfTimesScheduledDatabaseCreation;	// 248 = 0xf8
    long long _analyzingTimeDatabaseCreation;	// 256 = 0x100
    PHPhotoLibrary *_photolibrary;	// 264 = 0x108
    VCPDatabaseWriter *_database;	// 272 = 0x110
    NSDate *_start;	// 280 = 0x118
    _Bool _hasPendingAnalysis;	// 288 = 0x120
    _Bool _hasFullyAnalyzedImage;	// 289 = 0x121
    _Bool _hasFullyAnalyzedLivePhoto;	// 290 = 0x122
    _Bool _hasFullyAnalyzedMovie;	// 291 = 0x123
    _Bool _hasPartiallyAnalyzedImage;	// 292 = 0x124
    _Bool _hasPartiallyAnalyzedLivePhoto;	// 293 = 0x125
    _Bool _hasPartiallyAnalyzedMovie;	// 294 = 0x126
    _Bool _isMetricsLoaded;	// 295 = 0x127
}

+ (id)sharedMetricsWithPhotoLibrary:(id)arg1;	// IMP=0x00400000000c24f3
- (void);	// IMP=0x00200000000c3c6f
- (int)persist;	// IMP=0x00100000000c346c
- (int)reportAnalyzedAsset:(id)arg1 withAnalysis:(id)arg2 andProcessingTime:(double)arg3;	// IMP=0x00100000000c30d0
- (int)loadMetrics;	// IMP=0x00100000000c26ee
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x00100000000c2471

@end

