//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol SBHWidgetDragHandling;

__attribute__((visibility("hidden")))
@interface _TtC23ControlCenterUIServices22ControlsGalleryManager : NSObject
{
    MISSING_TYPE *controlsGalleryViewController;	// 8 = 0x8
    MISSING_TYPE *iconViewProvider;	// 16 = 0x10
    MISSING_TYPE *configurationManager;	// 24 = 0x18
    MISSING_TYPE *extensionProvider;	// 32 = 0x20
    MISSING_TYPE *applicationControlCollections;	// 40 = 0x28
    MISSING_TYPE *galleryApplicationControlCollections;	// 48 = 0x30
    MISSING_TYPE *moduleUniqueIdentifiers;	// 56 = 0x38
    MISSING_TYPE *$__lazy_storage_$_moduleContentMetrics;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000017250
- (id)init;	// IMP=0x00000000000171f0
- (id)recycledViewsContainerProviderForViewMap:(id)arg1;	// IMP=0x0000000000017330
- (unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2;	// IMP=0x0000000000017320
- (id)gridSizeClassDomainForIconView:(id)arg1;	// IMP=0x0000000000017ac0
- (_Bool)iconViewCanBeginDrags:(id)arg1;	// IMP=0x0000000000017ab0
- (_Bool)iconViewDisplaysLabel:(id)arg1;	// IMP=0x0000000000017aa0
- (_Bool)icon:(id)arg1 canReceiveGrabbedIcon:(id)arg2;	// IMP=0x0000000000017a90
- (id)behaviorDelegateForIconView:(id)arg1;	// IMP=0x0000000000017a80
- (id)customImageViewControllerForIconView:(id)arg1;	// IMP=0x0000000000017970
- (_Bool)controlHostViewControllerShouldPerformPrimaryAction:(id)arg1;	// IMP=0x0000000000017eb0
- (_Bool)addWidgetSheetConfigurationManager:(id)arg1 isDescriptorSupported:(id)arg2;	// IMP=0x0000000000017fc0
- (id)customApplicationWidgetCollectionsForAddWidgetSheetConfigurationManager:(id)arg1;	// IMP=0x0000000000017f30
- (id)addWidgetSheetConfigurationManager:(id)arg1 vendorNameForAppWithBundleIdentifier:(id)arg2;	// IMP=0x0000000000017f00
- (id)addWidgetSheetViewController:(id)arg1 widgetIconForGalleryItem:(id)arg2;	// IMP=0x00000000000180a0
@property(nonatomic, readonly) id <SBHWidgetDragHandling> widgetDragHandler;
- (void)addWidgetSheetViewControllerDidDisappear:(id)arg1;	// IMP=0x0000000000018080
- (void)addWidgetSheetViewControllerWillDisappear:(id)arg1;	// IMP=0x0000000000018070
- (void)addWidgetSheetViewControllerDidAppear:(id)arg1;	// IMP=0x0000000000018060
- (void)addWidgetSheetViewControllerWillAppear:(id)arg1;	// IMP=0x0000000000018050
- (void)addWidgetSheetViewControllerDidCancel:(id)arg1;	// IMP=0x0000000000018040
- (void)addWidgetSheetViewController:(id)arg1 didSelectWidgetIconView:(id)arg2;	// IMP=0x0000000000018030

@end

