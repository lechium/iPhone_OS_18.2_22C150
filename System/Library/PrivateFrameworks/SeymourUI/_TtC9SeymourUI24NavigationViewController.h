//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationController.h>

@class MISSING_TYPE;

@interface _TtC9SeymourUI24NavigationViewController : UINavigationController
{
    MISSING_TYPE *rootViewController;	// 8 = 0x8
    MISSING_TYPE *menuGestureRecognizer;	// 16 = 0x10
    MISSING_TYPE *onShouldBeginRecognizing;	// 24 = 0x18
    MISSING_TYPE *onMenuTapped;	// 40 = 0x28
    MISSING_TYPE *viewControllerAppearanceCompletion;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000029dc20
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000029dbc0
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;	// IMP=0x000000000029daf0
- (void)menuButtonTapped;	// IMP=0x000000000029c9b0
- (void)viewDidLoad;	// IMP=0x000000000029c910
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000029c890
- (id)initWithRootViewController:(id)arg1;	// IMP=0x000000000029c860
- (id)init;	// IMP=0x000000000029c5c0
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000029e2b0
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000029e350

@end
