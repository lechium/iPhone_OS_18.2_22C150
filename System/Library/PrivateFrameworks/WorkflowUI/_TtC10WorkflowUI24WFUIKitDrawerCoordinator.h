//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIViewController;
@protocol WFActionDrawerCoordinatorDelegate;

__attribute__((visibility("hidden")))
@interface _TtC10WorkflowUI24WFUIKitDrawerCoordinator : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *presentationMode;	// 16 = 0x10
    MISSING_TYPE *navigationController;	// 24 = 0x18
    MISSING_TYPE *drawerViewController;	// 32 = 0x20
    MISSING_TYPE *inspectorPaneContainerViewController;	// 40 = 0x28
    MISSING_TYPE *visibleInspectorPaneContentViewController;	// 48 = 0x30
    MISSING_TYPE *presentedPopover;	// 56 = 0x38
    MISSING_TYPE *drawerSheetView;	// 64 = 0x40
    MISSING_TYPE *actionDetailsSheetView;	// 72 = 0x48
    MISSING_TYPE *dataSource;	// 80 = 0x50
    MISSING_TYPE *topInset;	// 88 = 0x58
    MISSING_TYPE *bottomInset;	// 96 = 0x60
    MISSING_TYPE *visibility;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000de134
- (id)init;	// IMP=0x00000000000de101
- (void)performScrollingTest:(id)arg1;	// IMP=0x00000000000de093
- (void)setInspectorPaneViewController:(id)arg1;	// IMP=0x00000000000ddadf
- (void)configureAsNavigationStackInParentViewController:(id)arg1;	// IMP=0x00000000000dd525
- (void)configureAsBottomSheetInParentViewController:(id)arg1 belowSubview:(id)arg2;	// IMP=0x00000000000dcd5d
- (void)updateDrawerSheetBottomInset:(_Bool)arg1;	// IMP=0x00000000000dc42a
- (void)expandDrawer;	// IMP=0x00000000000dbf2f
- (void)collapseDrawer;	// IMP=0x00000000000dbb4f
- (void)focusSearchBar;	// IMP=0x00000000000dbb38
- (void)clearSearchBar;	// IMP=0x00000000000dbb32
- (void)presentDrawerViewController:(id)arg1 inPopover:(_Bool)arg2 withSourceRect:(struct CGRect)arg3;	// IMP=0x00000000000dba9b
@property(nonatomic, readonly) struct CGRect collapsedDrawerRect;
@property(nonatomic) unsigned long long visibility; // @synthesize visibility;
@property(nonatomic) double bottomInset; // @synthesize bottomInset;
@property(nonatomic) double topInset; // @synthesize topInset;
- (id)initWithWorkflow:(id)arg1 home:(id)arg2;	// IMP=0x00000000000da70e
@property(nonatomic, retain) UIViewController *visibleInspectorPaneContentViewController; // @synthesize visibleInspectorPaneContentViewController;
@property(nonatomic, retain) UIViewController *inspectorPaneContainerViewController; // @synthesize inspectorPaneContainerViewController;
@property(nonatomic, retain) UIViewController *drawerViewController; // @synthesize drawerViewController;
@property(nonatomic) unsigned long long presentationMode; // @synthesize presentationMode;
@property(nonatomic) __weak id <WFActionDrawerCoordinatorDelegate> delegate; // @synthesize delegate;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;	// IMP=0x00000000000de232
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x00000000000de1ea

@end

