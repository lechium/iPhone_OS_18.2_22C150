//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UILabel, _UIBackdropView;

@interface SCATPromptView : UIView
{
    UILabel *_promptLabel;	// 8 = 0x8
    _UIBackdropView *_backdropView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000b3b09
- (void)layoutSubviews;	// IMP=0x00100000000b3919
- (void)_updatePromptBackdropViewMask;	// IMP=0x00100000000b36f7
@property(copy, nonatomic) NSString *prompt;

@end

