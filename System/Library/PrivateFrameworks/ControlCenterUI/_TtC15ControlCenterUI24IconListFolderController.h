//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/SBFolderController.h>

@class MISSING_TYPE, _TtC15ControlCenterUI18IconListFolderView;

__attribute__((visibility("hidden")))
@interface _TtC15ControlCenterUI24IconListFolderController : SBFolderController
{
    MISSING_TYPE *iconListFolderDelegate;	// 8 = 0x8
    MISSING_TYPE *allowsIconAdornments;	// 24 = 0x18
}

+ (Class)_contentViewClass;	// IMP=0x00400000000646d0
+ (id)iconLocation;	// IMP=0x0040000000064640
- (void).cxx_destruct;	// IMP=0x0000000000064b80
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000064af0
@property(nonatomic, readonly) _Bool ccui_shouldPropagateAppearanceCalls;
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000064920
@property(nonatomic, readonly) _Bool shouldAutomaticallyForwardAppearanceMethods;
- (void)iconListView:(id)arg1 didRemoveIconView:(id)arg2;	// IMP=0x0000000000064850
- (void)iconView:(id)arg1 didChangeCustomImageViewController:(id)arg2;	// IMP=0x00000000000647b0
- (void)iconListView:(id)arg1 didAddIconView:(id)arg2;	// IMP=0x00000000000646f0
@property(nonatomic, readonly) _TtC15ControlCenterUI18IconListFolderView *folderView;

@end

