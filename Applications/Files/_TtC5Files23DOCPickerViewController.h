//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

@interface _TtC5Files23DOCPickerViewController : UIViewController
{
    MISSING_TYPE *source;	// 8 = 0x8
    MISSING_TYPE *configuration;	// 16 = 0x10
    MISSING_TYPE *placeholderViewController;	// 24 = 0x18
    MISSING_TYPE *delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x004000000046c070
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000046c010
- (void)_displayLocationsMenuFromRect:(struct CGRect)arg1;	// IMP=0x001000000046bf70
- (void)_stitchFileCreationAtURL:(id)arg1;	// IMP=0x001000000046bf10
- (void)_dismissWithOption:(id)arg1;	// IMP=0x001000000046bf00
- (void)_didSelectPicker;	// IMP=0x001000000046bef0
- (void)_dismissViewController;	// IMP=0x001000000046be60
- (void)_didSelectURL:(id)arg1;	// IMP=0x001000000046bde0
- (void)viewDidLoad;	// IMP=0x001000000046ad70
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000046a740

@end
