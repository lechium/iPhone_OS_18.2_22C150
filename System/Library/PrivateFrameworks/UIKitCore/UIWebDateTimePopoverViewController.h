//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@protocol UIWebFormControl;

__attribute__((visibility("hidden")))
@interface UIWebDateTimePopoverViewController : UIViewController
{
    id <UIWebFormControl> _innerWebDateTimeControl;	// 8 = 0x8
}

@property(retain, nonatomic) id <UIWebFormControl> _innerWebDateTimeControl; // @synthesize _innerWebDateTimeControl;
- (void)loadView;	// IMP=0x0000000000b53b9f
- (void)dealloc;	// IMP=0x0000000000b53b5f
- (id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2;	// IMP=0x0000000000b53ad3

@end
