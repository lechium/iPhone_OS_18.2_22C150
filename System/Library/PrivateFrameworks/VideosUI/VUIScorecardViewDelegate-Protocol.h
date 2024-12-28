//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSString, UIImage, VUIScorecardView;

@protocol VUIScorecardViewDelegate <NSObject>
- (struct UIEdgeInsets)marginsForRow:(long long)arg1 atIndex:(long long)arg2;
- (double)maximumWidthForScorecardView:(VUIScorecardView *)arg1;
- (NSString *)scoreValue:(VUIScorecardView *)arg1 inRow:(long long)arg2 atIndex:(long long)arg3;
- (long long)numberOfScoreValuesForScorecardView:(VUIScorecardView *)arg1 inRow:(long long)arg2;
- (long long)numberOfRowsInScorecardView:(VUIScorecardView *)arg1;
- (long long)styleForScorecardView:(VUIScorecardView *)arg1;

@optional
- (int)backgroundBlendModeForScoreValueInRow:(long long)arg1 atIndex:(long long)arg2;
- (UIImage *)backgroundImageForScorecardViewMaterial:(VUIScorecardView *)arg1;
@end
