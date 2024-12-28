//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@protocol NCSizeObservingViewDelegate;

__attribute__((visibility("hidden")))
@interface NCSizeObservingView : UIView
{
    _Bool _delegateInterestedInSizeChanges;	// 8 = 0x8
    id <NCSizeObservingViewDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000169d
@property(nonatomic) __weak id <NCSizeObservingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000000158f
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000000149a

@end
