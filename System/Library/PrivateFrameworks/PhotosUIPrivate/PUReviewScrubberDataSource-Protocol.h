//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSIndexPath, PUReviewScrubber;

@protocol PUReviewScrubberDataSource <NSObject>
- (_Bool)reviewScrubber:(PUReviewScrubber *)arg1 shouldProvideFeedbackForCellAtIndexPath:(NSIndexPath *)arg2;
- (unsigned long long)reviewScrubber:(PUReviewScrubber *)arg1 numberOfItemsInSection:(unsigned long long)arg2;

@optional
- (unsigned long long)numberOfSectionsInReviewScrubber:(PUReviewScrubber *)arg1;
@end

