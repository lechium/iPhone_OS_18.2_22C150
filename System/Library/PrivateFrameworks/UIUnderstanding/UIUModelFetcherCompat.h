//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface UIUModelFetcherCompat : NSObject
{
    MISSING_TYPE *log;	// 2596 = 0xa24
    MISSING_TYPE *dispatchGroup;	// 463120 = 0x71110
    MISSING_TYPE *dispatchQueue;	// 0 = 0x0
    MISSING_TYPE *catalogDownloaded;	// 0 = 0x0
    MISSING_TYPE *mindnetPortrait;	// 0 = 0x0
    MISSING_TYPE *mindnetSquare;	// 1868783455 = 0x6f635f5f
    MISSING_TYPE *elementDetectionTV;	// 0 = 0x0
    MISSING_TYPE *clickabilityPortrait;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *clickabilitySquare;	// 0 = 0x0
    MISSING_TYPE *iconClassification;	// 465728 = 0x71b40
    MISSING_TYPE *screenSimilarityPortrait;	// 11390 = 0x2c7e
    MISSING_TYPE *screenSimilaritySquare;	// 465728 = 0x71b40
    MISSING_TYPE *focusElement;	// 0 = 0x0
}

+ (id)sharedFetcher;	// IMP=0x0060000000040f30
- (void).cxx_destruct;	// IMP=0x0000000000042ab0
- (id)init;	// IMP=0x0000000000042a60
- (_Bool)startAssetDownloadWithModelSet:(long long)arg1 timeout:(double)arg2;	// IMP=0x0000000000040ee0
- (_Bool)areAssetsPresent;	// IMP=0x0000000000040a60

@end
