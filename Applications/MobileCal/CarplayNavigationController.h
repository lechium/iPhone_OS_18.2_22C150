//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationController.h>

@class CUIKCalendarModel, EKUIIntegrationAlertDisplayer;

@interface CarplayNavigationController : UINavigationController
{
    CUIKCalendarModel *_model;	// 8 = 0x8
    EKUIIntegrationAlertDisplayer *_alertDisplayer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000f2ce8
- (id)undoManager;	// IMP=0x00100000000f2ccb
- (void)_initializeAndPushListView;	// IMP=0x00100000000f2c6b
- (void)_showListScrolledToDate:(id)arg1;	// IMP=0x00100000000f2c02
- (void)_dismissModalView:(id)arg1;	// IMP=0x00100000000f2be9
- (void)_showEvent:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000000f29b4
- (void)_dismissPresentedViewController;	// IMP=0x00100000000f294c
- (void)handleURL:(id)arg1;	// IMP=0x00100000000f2652
- (id)initWithModel:(id)arg1;	// IMP=0x00100000000f2387

@end

