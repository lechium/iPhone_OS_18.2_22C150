//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AKAnnotation, AKAnnotationTheme, AKPageController, AKTouchOutsideViewGestureRecognizer, IMTheme, NSString, UIView;
@protocol AKAnnotationEditorDelegate;

@interface AKAnnotationPopoverViewController : UIViewController
{
    AKTouchOutsideViewGestureRecognizer *mHideOnTouchGestureRecognizer;	// 8 = 0x8
    AKAnnotation *mAnnotation;	// 16 = 0x10
    AKPageController *mAnnotationPageController;	// 24 = 0x18
    AKAnnotationTheme *mAnnotationTheme;	// 32 = 0x20
    int mPosition;	// 40 = 0x28
    id mObserver;	// 48 = 0x30
    _Bool _editsOnLaunch;	// 56 = 0x38
    UIView *_presentationView;	// 64 = 0x40
    id <AKAnnotationEditorDelegate> _delegate;	// 72 = 0x48
    struct CGRect _presentationRect;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000cfea9
@property(nonatomic) __weak id <AKAnnotationEditorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool editsOnLaunch; // @synthesize editsOnLaunch=_editsOnLaunch;
@property(retain, nonatomic) UIView *presentationView; // @synthesize presentationView=_presentationView;
@property(nonatomic) struct CGRect presentationRect; // @synthesize presentationRect=_presentationRect;
@property(nonatomic) int position; // @synthesize position=mPosition;
@property(retain, nonatomic) AKAnnotationTheme *annotationTheme; // @synthesize annotationTheme=mAnnotationTheme;
@property(retain, nonatomic) AKPageController *annotationPageController; // @synthesize annotationPageController=mAnnotationPageController;
@property(retain, nonatomic) AKAnnotation *annotation; // @synthesize annotation=mAnnotation;
- (void)hide;	// IMP=0x00000000000cfbb1
- (void)didHide;	// IMP=0x00000000000cfafc
- (void)willHide;	// IMP=0x00000000000cf9d6
- (void)didShow;	// IMP=0x00000000000cf75f
- (void)willShow;	// IMP=0x00000000000cf702
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000000cf618
- (void)presentFromRect:(struct CGRect)arg1 view:(id)arg2;	// IMP=0x00000000000cef33
- (int)willPresentInPosition:(struct CGRect)arg1 view:(id)arg2;	// IMP=0x00000000000cedb7
- (struct CGRect)p_containerFrameForView:(id)arg1;	// IMP=0x00000000000cec81
- (_Bool)canPresentInPosition:(int)arg1;	// IMP=0x00000000000cec76
- (void)didReceiveMemoryWarning;	// IMP=0x00000000000cec38
- (void)viewDidLoad;	// IMP=0x00000000000cebc9
- (void)dealloc;	// IMP=0x00000000000ceb8b
- (void)releaseOutlets;	// IMP=0x00000000000ceb85
- (id)init;	// IMP=0x00000000000ceb33

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) IMTheme *theme;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"IMTheme",?,&,N


@end
