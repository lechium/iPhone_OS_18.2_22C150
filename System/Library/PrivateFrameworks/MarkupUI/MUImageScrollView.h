//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@protocol MUImageScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface MUImageScrollView : UIScrollView
{
}

- (void)centerContentIgnoringInsets;	// IMP=0x000000000002ffa8
- (void)_centerContentIfNecessaryAdjustingContentOffset:(_Bool)arg1;	// IMP=0x000000000002feb5

// Remaining properties
@property(nonatomic) __weak id <MUImageScrollViewDelegate> delegate; // @dynamic delegate;

@end

