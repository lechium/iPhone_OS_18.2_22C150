//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class DRFlockContainer;
@protocol DRSessionViewDelegate;

@interface DRSessionView : UIView
{
    DRFlockContainer *_flockContainer;	// 8 = 0x8
    id <DRSessionViewDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000027ad2
@property(nonatomic) __weak id <DRSessionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0010000000027a50
- (void)layoutSubviews;	// IMP=0x0010000000027a04
@property(readonly, nonatomic) DRFlockContainer *flockContainer;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000027969

@end

