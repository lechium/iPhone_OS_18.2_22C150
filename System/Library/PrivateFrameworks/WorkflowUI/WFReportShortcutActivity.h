//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/UIActivity.h>

@class MISSING_TYPE, NSString, UIActivityViewController, UIViewController;

@interface WFReportShortcutActivity : UIActivity
{
    MISSING_TYPE *item;	// 8 = 0x8
    MISSING_TYPE *completion;	// 40 = 0x28
    MISSING_TYPE *reportSubmitted;	// 56 = 0x38
    MISSING_TYPE *activityControler;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_reportShortcutHostingViewController;	// 72 = 0x48
}

+ (id)activityType;	// IMP=0x0040000000137556
- (void).cxx_destruct;	// IMP=0x0000000000138092
- (id)init;	// IMP=0x000000000013805f
@property(nonatomic, readonly) UIViewController *activityViewController;
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x0000000000137c60
- (id)_systemImageName;	// IMP=0x00000000001379fb
@property(nonatomic, readonly) _Bool _isDisabled;
@property(nonatomic, readonly) NSString *activityTitle;
@property(nonatomic, readonly) NSString *activityType;
- (id)initWithWorkflow:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000013779c
@property(nonatomic) __weak UIActivityViewController *activityControler; // @synthesize activityControler;

@end
