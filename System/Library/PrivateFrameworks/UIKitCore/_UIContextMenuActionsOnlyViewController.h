//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class UITargetedPreview;

__attribute__((visibility("hidden")))
@interface _UIContextMenuActionsOnlyViewController : UIViewController
{
    UITargetedPreview *_sourcePreview;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000177b9b1
@property(retain, nonatomic) UITargetedPreview *sourcePreview; // @synthesize sourcePreview=_sourcePreview;
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000177b984
- (_Bool)_defersToPresentingViewControllerForSupportedInterfaceOrientations;	// IMP=0x000000000177b97c
- (struct CGSize)preferredContentSize;	// IMP=0x000000000177b71a
- (void)viewDidLoad;	// IMP=0x000000000177b683
- (id)initWithTargetedPreview:(id)arg1;	// IMP=0x000000000177b617

@end

