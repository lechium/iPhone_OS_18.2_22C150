//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DCProgressViewController, NSDate, NSProgress, UIViewController, UIWindow;

__attribute__((visibility("hidden")))
@interface DCLongRunningTaskController : NSObject
{
    _Bool _isCancelled;	// 8 = 0x8
    _Bool _shouldShowCancelButton;	// 9 = 0x9
    _Bool _shouldShowCircularProgress;	// 10 = 0xa
    _Bool _progressViewControllerDidFinishPresenting;	// 11 = 0xb
    _Bool _shouldDismissProgressViewController;	// 12 = 0xc
    CDUnknownBlockType _progressToStringTransformer;	// 16 = 0x10
    UIViewController *_viewControllerToPresentFrom;	// 24 = 0x18
    UIWindow *_window;	// 32 = 0x20
    double _intervalBeforeOpeningProgressDialog;	// 40 = 0x28
    id _keepAlive;	// 48 = 0x30
    CDUnknownBlockType _completionBlock;	// 56 = 0x38
    CDUnknownBlockType _updateProgressUIBlock;	// 64 = 0x40
    NSProgress *_progress;	// 72 = 0x48
    NSDate *_lastAccessibilityAnnouncementDate;	// 80 = 0x50
    NSDate *_openProgressDate;	// 88 = 0x58
    DCProgressViewController *_progressViewController;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000039bf2
@property(nonatomic) _Bool shouldDismissProgressViewController; // @synthesize shouldDismissProgressViewController=_shouldDismissProgressViewController;
@property(nonatomic) _Bool progressViewControllerDidFinishPresenting; // @synthesize progressViewControllerDidFinishPresenting=_progressViewControllerDidFinishPresenting;
@property(retain, nonatomic) DCProgressViewController *progressViewController; // @synthesize progressViewController=_progressViewController;
@property(retain, nonatomic) NSDate *openProgressDate; // @synthesize openProgressDate=_openProgressDate;
@property(retain, nonatomic) NSDate *lastAccessibilityAnnouncementDate; // @synthesize lastAccessibilityAnnouncementDate=_lastAccessibilityAnnouncementDate;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType updateProgressUIBlock; // @synthesize updateProgressUIBlock=_updateProgressUIBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) id keepAlive; // @synthesize keepAlive=_keepAlive;
@property(nonatomic) double intervalBeforeOpeningProgressDialog; // @synthesize intervalBeforeOpeningProgressDialog=_intervalBeforeOpeningProgressDialog;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(nonatomic) _Bool shouldShowCircularProgress; // @synthesize shouldShowCircularProgress=_shouldShowCircularProgress;
@property(retain, nonatomic) UIViewController *viewControllerToPresentFrom; // @synthesize viewControllerToPresentFrom=_viewControllerToPresentFrom;
@property(copy, nonatomic) CDUnknownBlockType progressToStringTransformer; // @synthesize progressToStringTransformer=_progressToStringTransformer;
@property(nonatomic) _Bool shouldShowCancelButton; // @synthesize shouldShowCancelButton=_shouldShowCancelButton;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
- (void)willDismissProgressViewController:(id)arg1;	// IMP=0x0000000000039a3d
- (void)closeProgressDialog;	// IMP=0x0000000000039922
- (void)openProgressDialog;	// IMP=0x0000000000039384
- (void)updateProgress;	// IMP=0x000000000003900e
- (void)completeTaskIfNecessary;	// IMP=0x0000000000038e1b
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000038d8e
- (void)startTask:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000038a98
- (id)initWithWindow:(id)arg1 intervalBeforeOpeningProgressDialog:(double)arg2;	// IMP=0x0000000000038a11
- (id)init;	// IMP=0x00000000000389cf

@end

